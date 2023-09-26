#include <iostream>

using namespace std;

int main() {

    //Top Row ----------------------------------------------------------------------------------------------------------

    //Adds spaces to move the row to the right
    for (int i = 1; i < 21; ++i) {
        cout << " ";
    }

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

    //creates the row that forms the bottom part of the indented corner.
    for (int i = 1; i < 6; i++) {
        cout << "*";
        for (int j = 0; j < 4; j++) {
            cout << " ";
        }
    }
    cout << endl;

    //Top Section ------------------------------------------------------------------------------------------------------



    //Right/diagonal section -------------------------------------------------------------------------------------------

    //Makes the first half of the diagonal
    for (int i=1; i<6;i++) //Repeats for each row
    {
        //Forms Left Wall
        cout << "*";

        //Adds fewer spaces in the beginning based on "i", the row number. Forms diagonal.
        for (int j = 1; j < 63-i*3; j++) {
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
        for (int j = 1; j < 63-i*3; j++) {
            cout << " ";

        }
        cout << "*" << endl;
    }

    //Makes the second half of the diagonal
    for (int i=8; i<13;i++) //Repeats for each row
    {
        //Forms Left Wall
        cout << "*";

        //Adds fewer spaces in the beginning based on "i", the row number. Forms diagonal.
        for (int j = 1; j < 63-i*3; j++) {
            cout << " ";

        }
        cout << "*";

        cout << endl;
    }

    //Right/diagonal section -------------------------------------------------------------------------------------------


    //Final Row --------------------------------------------------------------------------------------------------------

    //Places asterisks row with spaces between each one.
    for (int i = 1; i < 6; i++) {
        cout << "*";
        for (int j = 0; j < 4; ++j) {
            cout << " ";
        }
    }

    //Final Row --------------------------------------------------------------------------------------------------------

    cout << "\nThe lights are broken, so the only illumination is coming from\n"
                 "the other side of the door. There are boxes scattered throughout\n"
                 "the room. Each box is labeled, presumably for what was contained\n"
                 "in them. However, all but one of the boxes is empty. The only one\n"
                 "that isn't empty is labeled \"Spare Parts\""; //storage room description
    return 0;
}
