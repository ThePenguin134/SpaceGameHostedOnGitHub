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
        checkInventory(); //just iterate through the inventory, which is hopefully filled with item objects
    }
    if (gameInput == "get") {
        //cool place for check what item is in a room and adding it to the inventory.
    }
};

int main() {
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
