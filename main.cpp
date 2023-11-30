#include <iostream>
#include "rooms.h"

using namespace std;

bool gameActive = true;
bool gameStart = false;
int startInput;
string input;

int main() {
    cout << "Welcome to the space game!";
    while (gameActive) {
        cout << "\n\n"
        << "What would you like to do?\n"
        << "1. Start Game\n"
        << "2. Read Instructions\n"
        << "3. End Game\n";
        cin >> startInput;
        switch (startInput) {
            case 1: {
                gameStart = true;
            }
            case 2: {
                cout << "this would be a really great place for a description";
            }
            case 3: {
                gameActive = false;
            }
            default: {
                cout << "Invalid option!";
            }
        }
    }
  center();
}
