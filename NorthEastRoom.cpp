#include <iostream>

using namespace std;

void northEast() {
//Top Row --------------------------------------------------------------------------------------------------------------
    //Places asterisks row with spaces between each one.
    for (int i = 1; i < 6; i++) {
        cout << "*";
        for (int j = 0; j < 4; ++j) {
            cout << " ";
        }
    }

    cout << endl;

//Top Section ----------------------------------------------------------------------------------------------------------
//Makes the first half of the diagonal
    for (int i = 8; i < 13; i++) //Repeats for each row
    {
//Forms Left Wall
        cout << "*";

//Adds fewer spaces in the beginning based on "i", the row number. Forms diagonal.
        for (int j = 1; j < i * 3; j++) {
            cout << " ";

        }
        cout << "*";

        cout << endl;
    }

//Makes the middle couple rows of the diagonal, but more importantly makes the right door as well.
    for (int i = 6; i < 8; ++i) {

//Forms part of the door (Once looped, creates the other part.)
        cout << "-";

//Adds more spaces in between the door and wall based on "i", the row number. Forms diagonal.
        for (int j = 1; j < 21 + i * 3; j++) {
            cout << " ";

        }
        cout << "*" << endl;
    }

    //Makes the second half of the diagonal
    for (int i = 1; i < 6; i++) //Repeats for each row
    {
        //Forms Left Wall
        cout << "*";

        //Adds fewer spaces in the beginning based on "i", the row number. Forms diagonal.
        for (int j = 1; j < 41 + i * 3; j++) {
            cout << " ";

        }
        cout << "*";

        cout << endl;
    }

//Lower Section --------------------------------------------------------------------------------------------------------

    //creates the row that forms the bottom part of the indented corner.
    for (int i = 1; i < 6; i++) {
        cout << "*";
        for (int j = 0; j < 4; j++) {
            cout << " ";
        }
    }
    for (int j = 1; j < 35; j++) {
        cout << " ";
    }
    cout << "*";
    cout << endl;
    //Crates rows of empty space with walls on either side. "I" is the number of rows. "J" is the
    // space in between left and right walls.
    for (int i = 1; i < 5; i++) {

        //Shifts Rows over by "j" spaces.
        for (int j = 1; j < 21; j++) {
            cout << " ";
        }

        //Makes first wall
        cout << "*";

        //Creates space between walls.
        for (int j = 1; j < 42; j++) {
            cout << " ";
        }

        //Creates the second wall.
        cout << "*" << endl;
    }

//Bottom Section -------------------------------------------------------------------------------------------------------

//Adds spaces to move the row to the right
    for (int i = 1; i < 21; ++i) {
        cout << " ";
    }

// Repeats "I" number of asterisks in a line with "I" spaces in between them. (Before the Door)
    for (int i = 1; i < 6; i++) {
        cout << "*";
        for (int j = 1; j < 4; j++) {
            cout << " ";
        }
    }

// Prints the doorway along with three spaces. IF SPACES IN THE ASTERISKS ARE CHANGED THIS MUST ALSO BE CHANGED.
    cout << "| |   ";

// Repeats "I" number of asterisks in a line with "I" spaces in between them. (After the Door)
    for (int i = 1; i < 6; i++) {
        cout << "*";
        for (int j = 1; j < 4; j++) {
            cout << " ";
        }
    }

//Ends the row.
    cout << endl;

    cout << "\nYou enter a small medical bay with 2 beds, medical equipment for each, a small desk in the corner, "
            "\nand a coat rack on the wall across from the beds. Papers are scattered across the desk. "
            "\nPerhaps someone was looking for something? ";
}