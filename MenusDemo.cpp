/*#include <iostream>
using namespace std;
int test() {
    //declarations
    int input; //this variable is used whenever user input is needed as a place to save that input.
    bool incomplete = true; //while this is true, the program will loop forever until it reaches a good point to end.
    //input
    while (incomplete) {
        cout << "What would you like to do?\n1. Start Game\n2. View Instructions\n3. Exit Game\n"; //this is the start menu, that asks the user whether they want to play, read the instructions or exit.
        cin >> input;
        switch (input) { //switch statements are like if statements, but they let you define what each input does individually instead of having to nest if and else statements.
            case 1:
                while (incomplete) {
                    cout << "Which menu would you like to see?\n1. Room Menu\n2. Combat Menu\n"; //this determines whether you access the test room menu or the test battle menu.
                    cin >> input;
                    switch (input) {
                        case 1:
                            cout << "You find yourself in a room that look suspiciously like a placeholder\n"
                                 << "room put in by the developers. The developers must have been lazy, because\n"
                                 << "the only thing in the room is a tea kettle. What do you do?\n"
                                 << "1. Pick up tea kettle\n2. Exit room\n";
                            cin >> input;
                            switch (input) {
                                case 1:
                                    incomplete = false;
                                    cout << "You add the tea kettle to your inventory."; //there is no inventory yet, so nothing happens
                                    break; //this ends the entire block of code, which means either the program repeats if incomplete is true, or ends otherwise.
                                case 2:
                                    incomplete = false;
                                    cout << "You leave the room.";
                                    break;
                                default: //this determines what happens if an input doesn't match any of the cases
                                    cout << "That isn't a valid option!";
                                    break;

                            }
                            break;


                        case 2:
                            cout << "You find yourself facing down a assassin with a knife. All you have on you\n"
                                 << "is a sword. The assassin is rushing you, ready to strike. What do you do?\n"
                                 << "1. Swing your sword\n2. Guard with your sword" << endl;
                            cin >> input;
                            switch (input) {
                                case 1:
                                    incomplete = false;
                                    cout << "Since your sword has greater reach, you are able to hit the assassin. You win the fight!";
                                    break;
                                case 2:
                                    incomplete = false;
                                    cout << "The assassin goes for a stab, going right through your guard. Game over!";
                                    break;
                                default:
                                    cout << "That isn't a valid option!";
                                    break;

                            }
                            break;
                    }

                }
                break;
            case 2:
                cout << "Use the on screen prompts to decide what to do. If you get\n"
                     << "a menu such as 1. Jump, then typing 1 will let you jump.";
                break;
            case 3:
                incomplete = false;
                break;
            default:
                cout << "That isn't a valid option!";
                break;

        }
    }
}
*/

/*
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int getItemIndex(string searchItem, string itemNumber[]);

int getItemIndex(string searchItem, string *itemNumber) {
    int index = 0;
    for(int i = 1; i < 70; i++)
    {
        if (itemNumber[i] == searchItem) {
            index = i;
            break;
        }
    }
    return index;
}

int main(){
    string searchItem;
    string itemNumber[70];
    string itemName[70];
    string itemDescription[70];
    string currentitem;
    int next = 0;

    ifstream inFStrm("CS1 Group Work - Item Data.csv");


    if (inFStrm.is_open()) {
        string currentline;
        while (getline(inFStrm,currentline,'\n')) {
            istringstream lineSS(currentline);
            getline(lineSS,currentitem,',');
            stringstream ss;
            ss << currentitem;
            ss >> itemNumber[next];
            getline(lineSS,currentitem,',');
            itemName[next] = currentitem;
            getline(lineSS,currentitem,',');
            itemDescription[next] = currentitem;
            next++;
        }
    }
    else {
        cout << "File was not found." << endl;
        return -1;
    }

    for (int i = 0; i < 70; i++){
        cout << itemNumber[i];
    }

    cout << "\nPlease type an item ID to search" << endl;
    cin >> searchItem;

    int index = getItemIndex(searchItem, itemNumber);
    cout << "This item is: " << itemName[index] << endl;

    return 0;
}
*/

#include <iostream>
#include <string>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

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