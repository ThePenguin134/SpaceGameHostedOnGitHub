#include <iostream>
#include "rooms.h"
#include "CenterRoom.cpp"
#include "EastRoom.cpp"
#include "NorthEastRoom.cpp"
#include "NorthRoom.cpp"
#include "NorthWestRoom.cpp"
#include "SouthEastRoom.cpp"
#include "SouthRoom.cpp"
#include "SouthWestRoom.cpp"
#include "WestRoom.cpp"
#include "cmath"

using namespace std;

bool mainMenuActive = true;
bool gameStart = false;
int startInput;
string gameInput;
void printRoom();
void playMenu();
void checkInventory();
struct Item {
    int ID;
    string name;
    string description;
};


class Room {
public:
    string name;
    string description;
    bool hasItem;
    Room* connectedRooms[9]; // Array to hold connected rooms

    Room(string n, string desc, bool Item) {
        name = n;
        description = desc;
        hasItem = Item;
        for (int i = 0; i < 9; ++i) {
            connectedRooms[i] = nullptr;
        }
    }
};

struct Player {
    Item inventory[10];
};
Player player;

void printRoom() {
    return;
}

void playMenu(Room *currentRoom) {
    cout << "What would you like to do?\n";
    cin >> gameInput;
    if (gameInput == "move") {
        // Ask the player which room they want to go to next
        cout << "Which room do you want to go to next? ";
        cout << "(Available rooms: ";
        int connectedRoomsCount = 0;
        for (int i = 0; i < 5; ++i) {
            if (currentRoom->connectedRooms[i] != nullptr) {
                cout << currentRoom->connectedRooms[i]->name << ", ";
                connectedRoomsCount++;
            }
        }
        cout << ")" << endl;
        bool isValidChoice = false;
        string roomChoice;

        while (!isValidChoice) {
            cin >> roomChoice;


            for (int i = 0; i < connectedRoomsCount; ++i) {
                if (roomChoice == currentRoom->connectedRooms[i]->name) {
                    currentRoom = currentRoom->connectedRooms[i];
                    isValidChoice = true;
                    break;
                }

                else {
                    cout << "Invalid room choice. Please choose a valid room." << endl;
                    break;
                }
            }
        }
    }
    if (gameInput == "check map") {
        map();
    }
    if (gameInput == "check inventory") {
        //checkInventory(); //just iterate through the inventory, which is hopefully filled with item objects
    }
    if (gameInput == "get") {
        //cool place for check what item is in a room and adding it to the inventory.
    }
};

// ------------------------------- BOSS FIGHT CODE (START) -------------------------------------------------------------
bool isRoomSealed = false; // Bool to control the room availability
int playerHealth = 20; // Sets the players health
int snailDamage = 1; //Variable used to find snails damage each turn

//Snail struct with its snailHealth, # of heads, and damage before growing additional heads
struct Snail {
    int Health;
    int Heads;
    int BaseDamage;

};

//Gives snail initial attributes and creates him
Snail createSnail() {
    Snail snail{};
    snail.Health = 40;
    snail.Heads = 1;
    snail.BaseDamage = 2;
    return snail;
}
Snail snail = createSnail();

// Weapon availability/damage values struct
class Weapon {
public:
    bool isAvailable;
    int damage;

    Weapon(bool WeaponIsAvailable, int weaponDamage) : isAvailable(WeaponIsAvailable), damage(weaponDamage) {};
};

// Sets weapons availability and damage. Edit weapon damage values below:
Weapon Scalpel(false, 2); // Medium attack
Weapon Shovel(true, 1); // Small attack. Shovels big attack is 5x this value
Weapon Dagger(false, 1); // Later small attacks with the dagger
Weapon GoopDagger(true, 4); // First big attack with the dagger
Weapon Needle(true, 0); // instakills if random chance is met, 0 damage otherwise
Weapon Sword(true, 1); // Small attack
bool swordBeenUsed = false;

// *Weapon Functions* Start -------------------------------
void ScalpelUsed() {
    if (Scalpel.isAvailable) {
        cout << "You attack with the scalpel, but it is not very effective and deals " << Scalpel.damage << " damage." << endl;
        snail.Health -= Scalpel.damage;
    }
    else {
        cout << "You do not currently have that weapon! The snail prepares to attack you as you fumble around." << endl;
    }
}
void ShovelUsed() {
    if (Shovel.isAvailable) {
        cout
                << "As you raise your shovel you wonder if you should wait for better moment to attack or go for the strike now?"
                << endl;
        cout << "1) Strike Now!\n2) Wait." << endl;
        int choice;
        cin >> choice;
        if (choice == 1) {
            cout
                    << "You seize the moment and attack, but the shovel practically glides off of the snails shell and only deals "
                    << Shovel.damage << " damage." << endl;
            snail.Health -= Shovel.damage;
        }
        if (choice == 2) {
            cout
                    << "You bide your time and when the snail looks upwards ur able to gouge his underside with the shovel resulting in "
                    << Shovel.damage * 5 << " damage!" << endl;
            snail.Health -= Shovel.damage * 5;

            // 1/3rd chance to lose shovel
            if (rand() % 4 == 1) {
                cout
                        << "Unfortunately the snail also reacted quickly and you were unable to grab back the shovel from its body." << endl;
                Shovel.isAvailable = false;
            }
        }

    }
    else {
        cout << "You do not currently have that weapon! The snail prepares to attack you as you fumble around." << endl;
    }
}
void DaggerUsed() {
    if (Dagger.isAvailable || GoopDagger.isAvailable) {
        if (Dagger.isAvailable) {
            cout << " You attack with the uncoated dagger and deal " << Dagger.damage
                 << " as the snail seemingly laughs at you." << endl;
        }
        if (GoopDagger.isAvailable) {
            cout << "You attack the snail with the dagger coated in his own poisonous slime and deal "
                 << GoopDagger.damage << " damage to him!" << endl;
            cout << "However now that the dagger has reabsorbed his living slime it will no longer be poisonous to him."
                 << endl;
            snail.Health -= GoopDagger.damage;
            GoopDagger.isAvailable = false;
            Dagger.isAvailable = true;
        }
    }
    else {
        cout << "You do not currently have that weapon! The snail prepares to attack you as you fumble around." << endl;
    }
}
void NeedleUsed() {
    if (Needle.isAvailable) {
        if (rand() % 30 == 1) {// Random chance to instakill
            snail.Health = 0;
        } else {
            cout
                    << "Whatever disease you thought must've been on the needle had zero impact on the snail this attempt and resulted in " << Needle.damage << " damage being done this time." << endl;
        }
    }
    else {
        cout << "You do not currently have that weapon! The snail prepares to attack you as you fumble around." << endl;
    }
}
void SwordUsed() {
    if (Sword.isAvailable) {
        if (swordBeenUsed) {
            if (rand() % 3 == 1) {// 1/2 chance to grow a new head
                cout << "You slash off one head, but the snail manages to yet again, grow two more." << endl;
                cout << "You're slash also does " << Sword.damage << " damage.";
                snail.Heads += 1;
            }
            else {
                cout << "You slash off one head and the snail does not regen new ones this time!" << endl;
                cout << "You're slash also does " << Sword.damage << " damage." << endl;
                snail.Heads -= 1;
            }
        }
        else {
            cout << "You cut off the snail's head! Too bad it has genetic modifications that let it grow back two more!\nThe snail has gained extra damage with its new head as well." << endl;
            cout << "You're slash also does " << Sword.damage << " damage." << endl;
            snail.Heads += 1;
            swordBeenUsed = true;
        }
        snail.Health -= Sword.damage;
    }
    else {
        cout << "You do not currently have that weapon! The snail prepares to attack you as you fumble around." << endl;
    }
}
// *Weapon Functions* End -------------------------------

void RunAway() {
    cout << "You run away and seal the room, so you never have to see that abomination again." << endl;
    isRoomSealed = true;
}

void bossSelection() {
    cout << "What would you like to do?" << endl;
    cout << "1) Attack with Scalpel" << endl;
    cout << "2) Attack with Shovel" << endl;
    cout << "3) Attack with Dagger" << endl;
    cout << "4) Attack with Needle" << endl;
    cout << "5) Attack with Sword" << endl;
    cout << "6) Run Away" << endl;
    int bossChoice;
    cin >> bossChoice;
    switch (bossChoice) {
        case 1: {
            ScalpelUsed();
            break;
        }
        case 2: {
            ShovelUsed();
            break;
        }
        case 3: {
            DaggerUsed();
            break;
        }
        case 4: {
            NeedleUsed();
            break;
        }
        case 5: {
            SwordUsed();
            break;
        }
        case 6: {
            RunAway();
            break;
        }
        default: {
            cout << "Not a valid selection!" << endl;
            break;
        };
    }
}

void FightSummary() {
    cout << endl << "Current Fight Progress (Scroll up if you can't see the result of your previous action):\nSnail's Health: " << snail.Health << "\nSnail's # of Heads: " << snail.Heads
    << "\nYour Health: " << playerHealth << endl << endl;
}

void SnailAttack() {
    snailDamage = ((rand() % 2) + 1) * floor(snail.BaseDamage * snail.Heads * .5); //Damage scales with # of heads and has a random chance to crit
    playerHealth -= snailDamage;
    if (snail.Heads == 1)
    cout << "The Snail charges at you and deals "
         << snailDamage << " damage to you before moving back." << endl;
    else {
        cout << "The Snail charges at you with " << snail.Heads << " heads and deals "
             << snailDamage << " damage to you before moving back." << endl;
    }
}

void BossFight() {
    //Repeat till snail dies, the player dies, or the player runs
    while ((snail.Health > 0) && (playerHealth > 0 && snail.Heads > 0) && !isRoomSealed) {
        bossSelection();// Let User select choice
        if ((snail.Health > 0) && (playerHealth > 0) && !isRoomSealed && snail.Heads > 0) { // Snail attacks
            SnailAttack();
        }
        if ((snail.Health > 0) && (playerHealth > 0) && !isRoomSealed && snail.Heads > 0) {
            FightSummary();
        }
    }
    if ((snail.Health <= 0)) {
        cout << "\nCongrats! You beat the snail!" << endl;
    }
    if ((playerHealth <= 0)) {
        cout << "\nYou died to the snail." << endl;
    }
    if ((snail.Heads <= 0)) {
        cout << "\nCongrats! You left the snail headless thus defeating him!" << endl;
    }
}
// ------------------------------- BOSS FIGHT CODE (END) ---------------------------------------------------------------



struct Monster {
    string name;
    int health;
};

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Create five rooms
    Room room1("Control Room", "In the center of the room there is a command console. Near the edge of the room"
                               " there is a table, on which there is a suspicious container of liquid. Under the container, "
                               "there appears to be a napkin, acting as a coaster of sorts", true);
    Room room2("Mess-Hall", "Tables with stools line the center of the room. On one side of the room, there appears to be what was once a buffet. It is now covered in dust, and some strange gooey liquid. On the other side of the room, there are three vending machines that look like they haven't been touched in many generations. ", false);
    Room room3("Electrical-Room", "Upon entering the dark room, you notice rows upon rows of defunct hardware for servers. In the corner of the room there is what appears to be an electrical panel.", true);
    Room room4("Radio-Room", "You find a room with a large window directly ahead of you. The window looks out into the vast emptiness of space, along with a beautiful view of the sun, brighter than you've ever seen it before. Beneath the window is a system that is quite obviously a communications system. Various dials and levers span across the system. The rest of the room is filled with cases for various electronics.", false);
    Room room5("Cabins", "Ahead of you lies 8 bunk beds, with 4 on each side of the room. They are well-made, but clearly none of them have been slept in for a very long time. To the side of each bed there is a small dresser for personal belongings and clothing.", true);
    Room room6("Medical-Bay", "You enter a small medical bay with 2 beds, medical equipment for each, a small desk in the corner, and a coat rack on the wall across from the beds. Papers are scattered across the desk. Perhaps someone was looking for something?", true);
    Room room7("Alien-Room", "The room glows green. The air feels stale, and it smells like something died here. In the corner, a pulsing carcass sits. The source of the light. A slimy green goo is splattered all over the walls.", true);
    Room room8("Greenhouse", "Various plants are lined up across the room. Beneath each plant is a label that describes the plant and what its used for. Light from the sun shines in through the glass that makes up most of the room. Lined up on one wall are various drawers, shelves, and gardening tools. A shovel can be found leaning on one of the shelves.", true);
    Room room9("Storage-Room", "The lights are broken, so the only illumination is coming from the other side of the door. There are boxes scattered throughout the room. Each box is labeled, presumably for what was contained in them. However, all but one of the boxes is empty. The only one that isn't empty is labeled \"Spare Parts\".", true);

    // Connect the rooms according to the specified connections
    room1.connectedRooms[0] = &room2;
    room1.connectedRooms[1] = &room3;
    room1.connectedRooms[2] = &room4;
    room1.connectedRooms[3] = &room5;

    room2.connectedRooms[0] = &room1;
    room2.connectedRooms[1] = &room6;
    room2.connectedRooms[2] = &room9;

    room3.connectedRooms[0] = &room1;
    room3.connectedRooms[1] = &room7;
    room3.connectedRooms[2] = &room8;

    room4.connectedRooms[0] = &room1;
    room4.connectedRooms[1] = &room6;
    room4.connectedRooms[2] = &room8;

    room5.connectedRooms[0] = &room1;
    room5.connectedRooms[1] = &room7;
    room5.connectedRooms[2] = &room9;

    room6.connectedRooms[0] = &room2;
    room6.connectedRooms[1] = &room4;

    room7.connectedRooms[0] = &room3;
    room7.connectedRooms[1] = &room5;

    room8.connectedRooms[0] = &room3;
    room8.connectedRooms[1] = &room4;

    room9.connectedRooms[0] = &room2;
    room9.connectedRooms[1] = &room5;

    // Create the three treasures
    bool keyItem1 = true;
    bool keyItem2 = true;
    bool keyItem3 = true;
    bool keyItem4 = true;
    bool keyItem5 = true;

    // Create the monster
    Monster monster = {"Dragon", 100};

    // Start the game in Room 1
    Room *currentRoom = &room1;

    // Game loop
    while (true) {
        // Print the current room description
        cout << "You are in the " << currentRoom->name << endl;
        cout << currentRoom->description << endl;

        // Check if the room has a treasure and if the player wants to pick it up
        if (currentRoom->hasItem) {
            cout << "There is a treasure in this room. Do you want to pick it up? (y/n)" << endl;
            char answer;
            cin >> answer;
            if (answer == 'y') {
                currentRoom->hasItem = false;
                cout << "You picked up the " << /*itemName <<*/ "!" << endl;
                // Update the corresponding treasure flag
                if (currentRoom == &room1) {
                    keyItem1 = false;
                } else if (currentRoom == &room2) {
                    keyItem2 = false;
                } else if (currentRoom == &room3) {
                    keyItem3 = false;
                } else if (currentRoom == &room4) {
                    keyItem4 = false;
                } else if (currentRoom == &room5) {
                    keyItem5 = false;
                }
            }
        }

        // Check if the player has collected all the treasures
        if (!keyItem1 && !keyItem2 && !keyItem3 && !keyItem4 && !keyItem5) {
            cout << "You have collected all the treasures!" << endl;
            // Check if the player wants to fight the monster
            cout << "Do you want to fight the monster? (y/n)" << endl;
            char answer;
            cin >> answer;
            if (answer == 'y') {
                // Start the fight with the monster
                while (monster.health > 0) {
                    cout << "You attack the " << monster.name << " with your sword." << endl;
                    int damage = rand() % 20 + 1; // Generate random damage between 1 and 20
                    monster.health -= damage;
                    cout << "You deal " << damage << " damage. The " << monster.name << " has " << monster.health
                         << " health left." << endl;
                }
                cout << "You defeated the " << monster.name << " and won the game!" << endl;
                break; // Exit the game loop
            }
        }

        // Ask the player which room they want to go to next
        cout << "Which room do you want to go to next? ";
        cout << "(Available rooms: ";
        int connectedRoomsCount = 0;
        for (int i = 0; i < 5; ++i) {
            if (currentRoom->connectedRooms[i] != nullptr) {
                cout << currentRoom->connectedRooms[i]->name << ", ";
                connectedRoomsCount++;
            }
        }
        cout << ")" << endl;

        string roomChoice;
        cin >> roomChoice;

        bool isValidChoice = false;
        for (int i = 0; i < connectedRoomsCount; ++i) {
            if (roomChoice == currentRoom->connectedRooms[i]->name) {
                currentRoom = currentRoom->connectedRooms[i];
                isValidChoice = true;
                break;
            }
        }

        if (!isValidChoice) {
            cout << "Invalid room choice. Please choose a valid room." << endl;
        }
    }
    return 0;
}
