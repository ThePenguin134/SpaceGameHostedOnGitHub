#include <iostream>
#include "rooms.h"

using namespace std;

bool mainMenuActive = true;
bool gameStart = false;
int startInput;
string gameInput;


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

        cin >> gameInput;
    }
}
