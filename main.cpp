#include <iostream>
#include "rooms.h"
#include "CenterRoom.cpp"
#include "EastRoom.cpp"
#include "Map.cpp"
#include "NorthEastRoom.cpp"
#include "NorthRoom.cpp"
#include "NorthWestRoom.cpp"
#include "SouthEastRoom.cpp"
#include "SouthRoom.cpp"
#include "SouthWestRoom.cpp"
#include "WestRoom.cpp"

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
struct Player {
    int health = 10;
    Item inventory[10];
    string currentRoom = "center";
};
Player player;

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

void printRoom() {
    if (player.currentRoom == "center") {
        center();
    }
    if (player.currentRoom == "north") {
        north();
    }
    if (player.currentRoom == "northEast") {
        northEast();
    }
    if (player.currentRoom == "east") {
        east();
    }
    if (player.currentRoom == "southEast") {
        southEast();
    }
    if (player.currentRoom == "south") {
        south();
    }
    if (player.currentRoom == "southWest") {
        southWest();
    }
    if (player.currentRoom == "west") {
        west();
    }
    if (player.currentRoom == "northWest") {
        northWest();
    }
}
void playMenu() {
    cout << "What would you like to do?\n";
    cin >> gameInput;
    if (gameInput == "move") {
        //itd be really cool to put some actual room moving code here
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


int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Create five rooms
    Room room1("Control Room", "In the center of the room there is a command console. Near the edge of the room"
                               " there is a table, on which there is a suspicious container of liquid. Under the container, "
                               "there appears to be a napkin, acting as a coaster of sorts", true);
    Room room2("Mess-Hall",
               "Tables with stools line the center of the room. On one side of the room, there appears to be what was once a buffet. It is now covered in dust, and some strange gooey liquid. On the other side of the room, there are three vending machines that look like they haven't been touched in many generations. ",
               false);
    Room room3("Electrical-Room",
               "Upon entering the dark room, you notice rows upon rows of defunct hardware for servers. In the corner of the room there is what appears to be an electrical panel.",
               true);
    Room room4("Radio-Room",
               "You find a room with a large window directly ahead of you. The window looks out into the vast emptiness of space, along with a beautiful view of the sun, brighter than you've ever seen it before. Beneath the window is a system that is quite obviously a communications system. Various dials and levers span across the system. The rest of the room is filled with cases for various electronics.",
               false);
    Room room5("Cabins",
               "Ahead of you lies 8 bunk beds, with 4 on each side of the room. They are well-made, but clearly none of them have been slept in for a very long time. To the side of each bed there is a small dresser for personal belongings and clothing.",
               true);
    Room room6("Medical-Bay",
               "You enter a small medical bay with 2 beds, medical equipment for each, a small desk in the corner, and a coat rack on the wall across from the beds. Papers are scattered across the desk. Perhaps someone was looking for something?",
               true);
    Room room7("Alien-Room",
               "The room glows green. The air feels stale, and it smells like something died here. In the corner, a pulsing carcass sits. The source of the light. A slimy green goo is splattered all over the walls.",
               true);
    Room room8("Greenhouse",
               "Various plants are lined up across the room. Beneath each plant is a label that describes the plant and what its used for. Light from the sun shines in through the glass that makes up most of the room. Lined up on one wall are various drawers, shelves, and gardening tools. A shovel can be found leaning on one of the shelves.",
               true);
    Room room9("Storage-Room",
               "The lights are broken, so the only illumination is coming from the other side of the door. There are boxes scattered throughout the room. Each box is labeled, presumably for what was contained in them. However, all but one of the boxes is empty. The only one that isn't empty is labeled \"Spare Parts\".",
               true);

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
    cout << "Welcome to the space game!";
    while (mainMenuActive) {
        cout << "\n\n"
        << "What would you like to do?\n"
        << "1. Start Game\n"
        << "2. Read Instructions\n"
        << "3. End Game\n";
        cin >> startInput;
        switch (startInput) {
            case 1: {
                gameStart = true;
                mainMenuActive = false;
                break;
            }
            case 2: {
                cout << "This is a game where you type in what you want to do. For example,\n"
                << "if you want to go to another room, you would type in \"move\" and then\n"
                << "the name of the room where you want to move. Try to find the way out!";
                break;
            }
            case 3: {
                mainMenuActive = false;
                break;
            }
            default: {
                cout << "Invalid option!";
                break;
            }
        }
    }
    while (gameStart) {
        center();
        cin >> gameInput;
    }
}
