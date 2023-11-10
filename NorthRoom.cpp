#include <iostream>
#include "rooms.h"

using namespace std;

void north() {

    //Top Row ----------------------------------------------------------------------------------------------------------

    // Repeats "I" number of asterisks in a line with "I" spaces in between them. (Before replacement asterisks)
    for(int i=1; i < 6; i++) {
        cout << "*";
        for (int j=1; j<4; j++) {
            cout << " ";
        }
    }

    // Prints asterisks to replace a door.
    cout << "* *   ";

    // Repeats "I" number of asterisks in a line with "I" spaces in between them. (After replacement asterisks)
    for(int i=1; i < 6; i++) {
        cout << "*";
        for (int j=1; j<4; j++) {
            cout << " ";
        }
    }

    //Ends the row.
    cout << endl;

    //Top Row ----------------------------------------------------------------------------------------------------------


    //Middle Section ---------------------------------------------------------------------------------------------------

    //Crates rows of empty space with walls on either side. "I" is the number of rows. "J" is the
    // space in between left and right walls. (Before the Door)
    for(int i=1; i < 7; i++) {
        cout << "*";
        for (int j = 0; j < 41; ++j) {
            cout << " ";
        }
        cout << "*" << endl;
    }

    // Creates side doors. Starts with the first door and then prints "j" spaces before outputting part of the 2nd door.
    cout << "-";
    for (int j = 0; j < 41; ++j) {
        cout << " ";
    }
    cout << "-" << endl;

    //Creates the other half of both side doors. Starts with the 1st door and then prints "j" spaces before outputting
    // part of the 2nd door.
    cout << "-";
    for (int j = 0; j < 41; ++j) {
        cout << " ";
    }
    cout << "-" << endl;

    //Crates rows of empty space with walls on either side. "I" is the number of rows. "J" is the
    // space in between left and right walls. (After the Door)
    for(int i=1; i < 7; i++) {
        cout << "*";
        for (int j = 0; j < 41; ++j) {
            cout << " ";
        }
        cout << "*" << endl;
    }

    //Middle Section ---------------------------------------------------------------------------------------------------


    //Bottom Section (Same as Top) -------------------------------------------------------------------------------------

    // Repeats "I" number of asterisks in a line with "I" spaces in between them. (Before the Door)
    for(int i=1; i < 6; i++) {
        cout << "*";
        for (int j=1; j<4; j++) {
            cout << " ";
        }
    }

    // Prints the doorway along with three spaces. IF SPACES IN THE ASTERISKS ARE CHANGED THIS MUST ALSO BE CHANGED.
    cout << "| |   ";

    // Repeats "I" number of asterisks in a line with "I" spaces in between them. (After the Door)
    for(int i=1; i < 6; i++) {
        cout << "*";
        for (int j=1; j<4; j++) {
            cout << " ";
        }
    }

    //Ends the row.
    cout << endl;

    //Bottom Section (Same as Top) -------------------------------------------------------------------------------------

    cout << "\nYou find a room with a large window directly ahead of\n"
                 "you. The window looks out into the vast emptiness of\n"
                 "space, along with a beautiful view of the sun, brighter\n"
                 "than you've ever seen it before. Beneath the window is a\n"
                 "system that is quite obviously a communications system.\n"
                 "Various dials and levers span across the system. The rest\n"
                 "of the room is filled with cases for various electronics."; //radio room description

}
