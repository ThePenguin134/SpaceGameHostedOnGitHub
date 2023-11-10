#include <iostream>
#include "rooms.h"

using namespace std;

void east() {

    //Top Row ----------------------------------------------------------------------------------------------------------

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

    //Creates the half of the side door. Starts with the door and then prints "j" spaces before outputting
    // the wall.
    cout << "-";
    for (int j = 0; j < 41; ++j) {
        cout << " ";
    }
    cout << "*" << endl;

    //Creates the other half of the side door. Starts with the door and then prints "j" spaces before outputting
    // the wall.
    cout << "-";
    for (int j = 0; j < 41; ++j) {
        cout << " ";
    }
    cout << "*" << endl;

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

    cout << "\nTables with stools line the center of the room. On one\n"
                 "side of the room, there appears to be what was once a\n"
                 "buffet. It is now covered in dust, and some strange\n"
                 "gooey liquid. On the other side of the room, there are\n"
                 "three vending machines that look like they haven't been\n"
                 "touched in many generations."; //mess hall description

}
