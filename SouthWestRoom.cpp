#include <iostream>

using namespace std;

int main() {

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


    //Top Section ------------------------------------------------------------------------------------------------------


    //Crates rows of empty space with walls on either side. "I" is the number of rows. "J" is the
    // space in between left and right walls.
    for (int i=1; i < 5; i++) {
        cout << "*";
        for (int j = 0; j < 41; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }

    //creates the row that forms the bottom part of the indented corner.
    cout << "*";
    for (int i = 1; i < 42; ++i) {
        cout << " ";
    }
    for (int i = 1; i < 6; i++) {
        cout << "*";
        for (int j = 0; j < 4; ++j) {
            cout << " ";
        }
    }
    cout << endl;

    //Top Section ------------------------------------------------------------------------------------------------------



    //Right/diagonal section -------------------------------------------------------------------------------------------

    //Makes the first half of the diagonal
    for (int i=1; i<6;i++) //Repeats for each row
    {
        //Adds more spaces in the beginning based on "i", the row number. Forms diagonal.
        for (int j = 1; j < i*3; j++) {
            cout << " ";

        }
        cout << "*";

        //Adds more spaces after the diagonal based on "i". Forms the wall to the right.
        for (int j = 1; j < 63-i*3; ++j) {
            cout << " ";

        }
        cout << "*";
        cout << endl;
    }

    //Makes the middle couple rows of the diagonal, but more importantly makes the right door as well.
    for (int i = 6; i < 8; ++i) {
        //Adds more spaces in the beginning based on "i", the row number. Forms diagonal.
        for (int j = 1; j < i*3; j++) {
            cout << " ";

        }
        cout << "*";

        //Adds more spaces after the diagonal based on "i". Forms the door on the right.
        for (int j = 1; j < 63-i*3; ++j) {
            cout << " ";

        }
        cout << "-";
        cout << endl;
    }

    //Makes the second half of the diagonal
    for (int i=8; i<13;i++) //Repeats for each row
    {
        //Adds more spaces in the beginning based on "i", the row number. Forms diagonal.
        for (int j = 1; j < i*3; j++) {
            cout << " ";

        }
        cout << "*";

        //Adds more spaces after the diagonal based on "i". Forms the wall to the right.
        for (int j = 1; j < 63-i*3; ++j) {
            cout << " ";

        }
        cout << "*";
        cout << endl;
    }

    //Right/diagonal section -------------------------------------------------------------------------------------------


    //Final Row --------------------------------------------------------------------------------------------------------

    //Places spaces before final row of asterisks.
    for (int i = 1; i < 43; ++i) {
        cout << " ";
    }

    //Places asterisks row with spaces between each one.
    for (int i = 1; i < 6; i++) {
        cout << "*";
        for (int j = 0; j < 4; ++j) {
            cout << " ";
        }
    }

    //Final Row --------------------------------------------------------------------------------------------------------


    return 0;
}