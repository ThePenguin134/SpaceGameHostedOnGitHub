#include <iostream>

using namespace std;

void west() {

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

    // Creates side doors. Starts with the wall and then prints "j" spaces before outputting part of the door.
    cout << "*";
    for (int j = 0; j < 41; ++j) {
        cout << " ";
    }
    cout << "-" << endl;

    //Creates the other half of the side door. Starts with the wall and then prints "j" spaces before outputting 
    // part of the door.
    cout << "*";
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

    cout << "\nUpon entering the dark room, you notice rows upon rows\n"
                 "of defunct hardware for servers. In the corner of the\n"
                 "room there is what appears to be an electrical panel."; //electrical room description

}
