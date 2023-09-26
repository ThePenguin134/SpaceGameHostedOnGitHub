#include <iostream>

using namespace std;

int main() {

    //top row-----------------------------------------------------------------------------

    //Creates spaces before the first row of asterisks.
    for (int i = 1; i < 43; ++i) {
        cout << " ";
    }

    //Creates asterisks row with spaces between each of them.
    for (int i = 1; i < 6; i++) {
        cout << "*";
        for (int j = 0; j < 4; ++j) {
            cout << " ";
        }
    }

    cout << endl;//Ends the top row.


    //Creates the first diagonal segment
    for (int i = 1; i < 6; i++) //Repeats for each row
    {
        //Reduces spaces in the beginning based on "i", the row number; forms diagonal.
        for (int j = 1; j < 40 - i * 3; j++) {
            cout << " ";

        }
        cout << "*";

        //Adds more spaces after the diagonal based on "i"; Forms the wall to the right.
        for (int j = 1; j < i*3 + 23; j++) {
            cout << " ";

        }
        cout << "*";
        cout << endl;
    }


    //Creates the middle couple rows of the diagonal; forms the right door shown by two dashes.
    for (int i = 6; i < 8; ++i) //Repeats for each row.
    {
        //Reduces spaces in the beginning based on "i", the row number; Forms diagonal.
        for (int j = 1; j < 40 - i*3; j++) {
            cout << " ";

        }
        cout << "*";

        //Adds more spaces after the diagonal based on "i"; Forms the door on the right with two dashes.
        for (int j = 1; j < i*3 + 23; ++j) {
            cout << " ";

        }
        cout << "-";
        cout << endl;
    }


    //Makes the second half of the diagonal.
    for (int i=8; i<13;i++) //Repeats for each row.
    {
        //Reduces spaces in the beginning based on "i", the row number; Forms last diagonal segment.
        for (int j = 1; j < 40 - i*3; j++) {
            cout << " ";

        }
        cout << "*";

        //Adds more spaces after the diagonal based on "i"; Forms the wall to the right.
        for (int j = 1; j < i*3 + 23; ++j) {
            cout << " ";

        }
        cout << "*";
        cout << endl; //Ends diagonal and right wall.
    }


    //Creates top row of indented corner; starts left outside wall.
    cout << "*";
    for (int i = 1; i < 42; ++i) //Adds spaces between left wall and right row.
    {
        cout << " ";
    }
    //Creates top row of corner with spaces between asterisks.
    for (int i = 1; i < 6; i++) //Repeats for each asterisk on row. "i" is each asterisk.
        //"j" is the space between each asterisk.
    {
        cout << "*";
        for (int j = 0; j < 4; ++j) {
            cout << " ";
        }
    }
    cout << endl;


    //Creates rows of empty space with walls on either side. "I" is the number of rows. "J" is the
    //space in between left and right walls.
    for (int i=1; i < 5; i++) {
        cout << "*";
        for (int j = 0; j < 41; j++) {
            cout << " ";
        }
        cout << "*" << endl;
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

    return 0;
}
