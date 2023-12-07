#include <iostream>
#include "cmath"
#include "sstream"
#include <fstream>
#include <chrono>

using namespace std;

void ControlRoom() {
//Top Row --------------------------------------------------------------------------------------------------------------
    //prints "/" with proper spacing
    cout << "  /   ";
    //First for loop (1-5)
    for (int a = 1; a <= 5; a++) {
        //Prints asterisk 5 times
        cout << "*";
        //Inner for loop (3 times)
        for (int b = 1; b <= 3; b++) {
            //Prints 3 spaces between each asterisk
            cout << " ";
        }
    }
    //prints the door
    cout << "| |   ";
    //Second for loop (1-5)
    for (int d = 1; d <= 5; d++) {
        //Prints asterisk 5 times
        cout << "*";
        //Inner for loop (3 times)
        for (int y = 1; y <= 3; y++) {
            //Prints 3 spaces between each asterisk
            cout << " ";
        }
    }
    //prints the corner of the room
    cout << "\\";
    //new line
    cout << endl;
//Row 2 ----------------------------------------------------------------------------------------------------------------
    //prints the corner of the room
    cout << " /";
//Third for loop (1-51)
    for (int n = 1; n <= 51; n++) {
        //Prints 51 spaces
        cout << " ";
    }
    //prints the corner of the room
    cout << "\\";
    //new line
    cout << endl;
//Row 3 ----------------------------------------------------------------------------------------------------------------
    //prints the corner of the room
    cout << "/";
    //Third for loop (1-53)
    for (int n = 1; n <= 53; n++) {
        //prints 53 spaces
        cout << " ";
    }
    //prints the corner of the room
    cout << "\\";
    //new line
    cout << endl;
//Rows 4-8 -------------------------------------------------------------------------------------------------------------
    //Fourth for loop (1-5)
    for (int k = 1; k <= 5; k++) {
        //Inner for loop (1 time)
        for (int m = 1; m <= 1; m++) {
            //prints *
            cout << "*";
        }
        //Inner for loop (53 times)
        for (int n = 1; n <= 53; n++) {
            //prints 53 spaces
            cout << " ";
        }
        //Inner for loop (1 time)
        for (int o = 1; o <= 1; o++) {
            //prints *
            cout << "*";
        }
        //new line
        cout << endl;
    }
//Rows 9 & 10 ----------------------------------------------------------------------------------------------------------
    //Fifth for loop (1-2)
    for (int a = 1; a <= 2; a++) {
        //Inner for loop (1 time)
        for (int m = 1; m <= 1; m++) {
            //prints _
            cout << "_";
        }
        //Inner for loop (53 times)
        for (int n = 1; n <= 53; n++) {
            //Prints 53 spaces
            cout << " ";
        }
        //Inner for loop (1 time)
        for (int o = 1; o <= 1; o++) {
            //Prints _
            cout << "_" << endl;
        }
        //new line
        cout << endl;
    }
//Rows 11-15 -----------------------------------------------------------------------------------------------------------//Fourth for loop (1-5)
    //Sixth for loop (1-5)
    for (int k = 1; k <= 5; k++) {
        //Inner for loop (1 time)
        for (int m = 1; m <= 1; m++) {
            //prints *
            cout << "*";
        }
        //Inner for loop (53 times)
        for (int n = 1; n <= 53; n++) {
            //prints 53 spaces
            cout << " ";
        }
        //Inner for loop (1 time)
        for (int o = 1; o <= 1; o++) {
            //prints *
            cout << "*";
        }
        //new line
        cout << endl;
    }
//Row 16 ---------------------------------------------------------------------------------------------------------------
    //prints the corner of the room
    cout << "\\";
    //Seventh for loop (1-53)
    for (int n = 1; n <= 53; n++) {
        //prints 53 spaces
        cout << " ";
    }
    //prints the corner of the room
    cout << "/";
    cout << endl;
//Row 17 ---------------------------------------------------------------------------------------------------------------
    //prints the corner of the room
    cout << " \\";
    //Eighth for loop (1-51)
    for (int n = 1; n <= 51; n++) {
        cout << " ";
    }
    //prints the corner of the room
    cout << "/";
    cout << endl;
//Row 18 ---------------------------------------------------------------------------------------------------------------
    //prints "\" with proper spacing
    cout << "  \\   ";
    //Ninth for loop (1-5)
    for (int a = 1; a <= 5; a++) {
        //Prints asterisk 5 times
        cout << "*";
        //Inner for loop (3 times)
        for (int b = 1; b <= 3; b++) {
            //Prints 3 spaces between each asterisk
            cout << " ";
        }
    }
    //Prints the door
    cout << "| |   ";
    //Tenth for loop(1-5)
    for (int d = 1; d <= 5; d++) {
        //Prints 5 asterisks
        cout << "*";
        //Inner for loop (3 times)
        for (int y = 1; y <= 3; y++) {
            //prints 3 spaces between asterisk
            cout << " ";
        }
    }
    //prints the corner
    cout << "/\n";
    cout << endl;
}
void MessHall() {

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



}
void RadioRoom() {

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


}
void MedicalBay() {
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

}
void GreenHouse() {

    //Forms the top row.
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

    //Ends the row.
    cout << endl;

}
void StorageRoom()
{

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
        for (int j = 1; j < 63 - i*3; j++) {
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

    //Ends the row.
    cout << endl;

}
void Cabins() {

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

    //Bottom Section (Same as Top) -------------------------------------------------------------------------------------

}
void SnailRoom() {

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
    cout << endl;

    //Final Row --------------------------------------------------------------------------------------------------------

}
void ElectricalRoom() {

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


}
void map() {
    //---------top Row
    cout << "               " ;
    cout << "*  *  *  *  *  *  *  *" << endl;

    //row 2

    cout << "            ";
    cout << "*";
    cout << "      ";
    cout << "*";
    cout << "            ";
    cout << "*";
    cout << "      ";
    cout << "*" << endl;

    //row 3

    cout << "         ";
    cout << "*";
    cout << "         ";
    cout << "-";
    cout << "            ";
    cout << "-";
    cout << "         ";
    cout << "*" << endl;

    //row 4
    cout << "      ";
    cout << "*";
    cout << "            ";
    cout << "-";
    cout << "     RAD    ";
    cout << "-";
    cout << "            ";
    cout << "*" << endl;

    //row 5

    cout << "   ";
    cout << "*";
    cout << "     GH        ";
    cout << "*";
    cout << "            ";
    cout << "*";
    cout << "       MED     ";
    cout << "*" << endl;

    //row 6 ----- top of center room; end of diagonal sides.

    cout << "*              ";
    cout << "*  *  *  |  |  *  *  *";
    cout << "              *" << endl;

    //row 7

    cout << "*              ";
    cout << "*                    *";
    cout << "              *" << endl;

    //row 9

    cout << "*  *  |  |  *  ";
    cout << "*                    *";
    cout << "  *  |  |  *  *" << endl;

    //row 10

    cout << "*              ";
    cout << "*                    *";
    cout << "              *" << endl;

    //row 11

    cout << "*      ER      ";
    cout << "-        CR          -";
    cout << "       MH     *" << endl;

    //row 12

    cout << "*              ";
    cout << "-                    -";
    cout << "              *" << endl;

    //row 13

    cout << "*              ";
    cout << "*                    *";
    cout << "              *" << endl;

    //row 14

    cout << "*  *  |  |  *  ";
    cout << "*                    *";
    cout << "  *  |  |  *  *" << endl;

    //row 15

    cout << "*              ";
    cout << "*                    *";
    cout << "              *" << endl;

    //row 16 ------ bottom row of center room

    cout << "*              ";
    cout << "*  *  *  |  |  *  *  *";
    cout << "              *" << endl;

    //row 17

    cout << "   ";
    cout << "*";
    cout << "      ALI      ";
    cout << "*";
    cout << "            ";
    cout << "*";
    cout << "       STO     ";
    cout << "*" << endl;

    //row 18

    cout << "      ";
    cout << "*";
    cout << "            ";
    cout << "-";
    cout << "     CAB    ";
    cout << "-";
    cout << "            ";
    cout << "*" << endl;

    //row 19

    cout << "         ";
    cout << "*";
    cout << "         ";
    cout << "-";
    cout << "            ";
    cout << "-";
    cout << "         ";
    cout << "*" << endl;

    //row 20

    cout << "            ";
    cout << "*";
    cout << "      ";
    cout << "*";
    cout << "            ";
    cout << "*";
    cout << "      ";
    cout << "*" << endl;

    //------------last row

    cout << "               " ;
    cout << "*  *  *  *  *  *  *  *" << endl;
}

string gameInput;
class player {
public:
    int Health = 20;
};
class Item {
private:
    string name;
    string description;

public:
    // Read
    void input(string line) {
        istringstream lineStream(line);
        string item;

        getline(lineStream, item, ',');
        name = item;

        getline(lineStream, item, ',');
        description = item;
    }
    string readName(){
        return name;
    }
    string readDescription(){
        return description;
    }
};
class Room {
public:
    string name;
    string description;
    Item Item1;
    Item Item2;
    bool hasItem1;
    bool hasItem2;
    Room* connectedRooms[9]; // Array to hold connected rooms

    Room(string n, string desc, Item I1, Item I2, bool haveItem1, bool haveItem2) {
        name = n;
        description = desc;
        Item1 = I1;
        Item2 = I2;
        hasItem1 = haveItem1;
        hasItem2 = haveItem2;
        for (int i = 0; i < 9; ++i) {
            connectedRooms[i] = nullptr;
        }
    }
    // Get the names of the Item objects in the Room
    string getItem1Name() {
        return Item1.readName();
    }

    string getItem2Name() {
        return Item2.readName();
    }
};
class Weapon {
public:
    bool isAvailable;
    int damage;

    Weapon(bool WeaponIsAvailable, int weaponDamage) : isAvailable(WeaponIsAvailable), damage(weaponDamage) {};
}; // Weapon availability/damage values struct
// Sets weapons availability and damage. Edit weapon damage values below:
Weapon Knife(true, 2); // Medium attack
Weapon Shovel(false, 1); // Small attack. Shovels big attack is 5x this value
Weapon Dagger(true, 1); // Later small attacks with the dagger
Weapon GoopDagger(false, 4); // First big attack with the dagger
Weapon Syringe(false, 0); // instakills if random chance is met, 0 damage otherwise
Weapon Sword(false, 1); // Small attack
Weapon MedKit(false, 0); // Small attack
bool swordBeenUsed = false;
int weaponCount;

void about() {
    cout << "Welcome to SpaceGame. This is a game about speed, collection, and pure rng :D\nPlease explore the"
            "space station at your own pace. However, if you are a score setter, then collect \nas many items as "
            "possible and beat the boss as quickly as possible to receive the highest score." << endl;
}
void GoopInteraction() {
    if (Dagger.isAvailable) {
        cout << "You can't seem to pick the goop up.\nHowever, you decide to dip your dagger in the goop and it now glows green. Maybe it'll be stronger?" << endl;
        GoopDagger.isAvailable = true;
        Dagger.isAvailable = false;
    } else {
        cout << "You can't seem to pick the goop up. You seem to be missing a weapon that might be useful here.." << endl;
    }
}

void getItem(Item ind[], Room *currentRoom) {

    //Explains Items available
    bool isValidChoice = false;
    while (!isValidChoice) {

        //Output options for items that the player can pick up / interact with
        if (currentRoom->hasItem1 || currentRoom->hasItem2) {
            cout
                    << "There are item(s) in this room. If you would like to pick up an item, enter it's name. If not just enter 'nothing'"
                    << endl;
            if (currentRoom->hasItem1) {
                cout << "-" << currentRoom->Item1.readName() << endl;
            }
            if (currentRoom->hasItem2) {
                cout << "-" << currentRoom->Item2.readName() << endl;
            }
            string userChoice;
            cin >> userChoice;

            // Process the users item input and gives their item by making it unavailable for pickup
            if (userChoice == currentRoom->Item1.readName() && currentRoom->hasItem1) {
                cout << "Description Of Item Selected:\n" << currentRoom->Item1.readDescription() << endl;
                currentRoom->hasItem1 = false;
                isValidChoice = true;

            } else if (userChoice == currentRoom->Item2.readName() && currentRoom->hasItem2) {
                if (currentRoom->Item2.readName() != "Green-Goop") {
                    cout << "Description Of Item Selected:\n" << currentRoom->Item2.readDescription() << endl;
                    currentRoom->hasItem2 = false;
                    isValidChoice = true;
                } else { //If the item picked is the goop, then it has its own functionality aka you can't pick it up
                    GoopInteraction();
                    isValidChoice = true;
                }
            } else if (userChoice == "nothing") {
                break;
            } else {
                cout << "That's an invalid selection!" << endl;
            }
        } else {
            cout << "There aren't any items in this room!" << endl;
            break;
        }
    }






    // Disable Item for future pickup
}

//Inventory function, lists items that the player has.
int checkInventory(Item ind[], Room &room1, Room &room2, Room &room3, Room &room4, Room &room5, Room &room6, Room &room8, Room &room9){
    int itemCount = 0;
    if(!room1.hasItem1 || !room1.hasItem2 || !room2.hasItem1 || !room2.hasItem2 || !room3.hasItem1 || !room3.hasItem2 || !room4.hasItem1 || !room4.hasItem2 || !room5.hasItem1 || !room5.hasItem2 || !room6.hasItem1 || !room6.hasItem2 || !room8.hasItem1 || !room8.hasItem2 || !room9.hasItem1 || !room9.hasItem2) {
        cout << "You currently have:" << endl;
        if (!room1.hasItem1) {
            cout << room1.Item1.readName() << "," << endl;
            itemCount++;
        }
        if (!room1.hasItem2) {
            cout << room1.Item2.readName() << "," << endl;
            itemCount++;
        }
        if (!room2.hasItem1) {
            cout << room2.Item1.readName() << "," << endl;
            itemCount++;
        }
        if (!room2.hasItem2) {
            cout << room2.Item2.readName() << "," << endl;
            itemCount++;
        }
        if (!room3.hasItem1) {
            cout << room3.Item1.readName() << "," << endl;
            itemCount++;
        }
        if (!room3.hasItem2) {
            cout << room3.Item2.readName() << "," << endl;
            itemCount++;
        }
        if (!room4.hasItem1) {
            cout << room4.Item1.readName() << "," << endl;
            itemCount++;
        }
        if (!room4.hasItem2) {
            cout << room4.Item2.readName() << "," << endl;
            itemCount++;
        }
        if (!room5.hasItem1) {
            cout << room5.Item1.readName() << "," << endl;
            itemCount++;
        }
        if (!room5.hasItem2) {
            cout << room5.Item2.readName() << "," << endl;
            itemCount++;
        }
        if (!room6.hasItem1) {
            cout << room6.Item1.readName() << "," << endl;
            itemCount++;
        }
        if (!room6.hasItem2) {
            cout << room6.Item2.readName() << "," << endl;
            itemCount++;
        }
        if (!room8.hasItem1) {
            cout << room8.Item1.readName() << "," << endl;
            itemCount++;
        }
        if (!room8.hasItem2) {
            cout << room8.Item2.readName() << "," << endl;
            itemCount++;
        }
        if (!room9.hasItem1) {
            cout << room9.Item1.readName() << "," << endl;
            itemCount++;
        }
        if (!room9.hasItem2) {
            cout << room9.Item2.readName() << "," << endl;
            itemCount++;
        }
    }
    else{
        cout << "You do not currently have any items." << endl;
    }
    return itemCount;
}
int itemCountFunction(Item ind[], Room &room1, Room &room2, Room &room3, Room &room4, Room &room5, Room &room6, Room &room8, Room &room9) {
    int itemCount = 0;
    if (!room1.hasItem1 || !room1.hasItem2 || !room2.hasItem1 || !room2.hasItem2 || !room3.hasItem1 ||
        !room3.hasItem2 || !room4.hasItem1 || !room4.hasItem2 || !room5.hasItem1 || !room5.hasItem2 ||
        !room6.hasItem1 || !room6.hasItem2 || !room8.hasItem1 || !room8.hasItem2 || !room9.hasItem1 ||
        !room9.hasItem2) {
        if (!room1.hasItem1) {
            itemCount++;
        }
        if (!room1.hasItem2) {
            itemCount++;
        }
        if (!room2.hasItem1) {
            itemCount++;
        }
        if (!room2.hasItem2) {
            itemCount++;
        }
        if (!room3.hasItem1) {
            itemCount++;
        }
        if (!room3.hasItem2) {
            itemCount++;
        }
        if (!room4.hasItem1) {
            itemCount++;
        }
        if (!room4.hasItem2) {
            itemCount++;
        }
        if (!room5.hasItem1) {
            itemCount++;
        }
        if (!room5.hasItem2) {
            itemCount++;
        }
        if (!room6.hasItem1) {
            itemCount++;
        }
        if (!room6.hasItem2) {
            itemCount++;
        }
        if (!room8.hasItem1) {
            itemCount++;
        }
        if (!room8.hasItem2) {
            itemCount++;
        }
        if (!room9.hasItem1) {
            itemCount++;
        }
        if (!room9.hasItem2) {
            itemCount++;
        }
    }
    return itemCount;
}


void printRoom(Room *currentRoom) {
    if (currentRoom->name == "Control-Room") {
        ControlRoom();
    }
    if (currentRoom->name == "Mess-Hall") {
        MessHall();
    }
    if (currentRoom->name == "Electrical-Room") {
        ElectricalRoom();
    }
    if (currentRoom->name == "Radio-Room") {
        RadioRoom();
    }
    if (currentRoom->name == "Cabins") {
        Cabins();
    }
    if (currentRoom->name == "Medical-Bay") {
        MedicalBay();
    }
    if (currentRoom->name == "Snail-Room") {
        SnailRoom();
    }
    if (currentRoom->name == "Greenhouse") {
        GreenHouse();
    }
    if (currentRoom->name == "Storage-Room") {
        StorageRoom();
    }
}


//Lets user move by letting them know their options and then taking their input.
Room* move(Room *moveCurrentRoom) {
    bool isValidChoice = false;
    while (!isValidChoice) {
        // Lets the player move to a new room
        cout << "(Available rooms: ";
        int connectedRoomsCount = 0;
        for (int i = 0; i < 5; ++i) { // lists the connected rooms aka rooms that the user can move to
            if (moveCurrentRoom->connectedRooms[i] != nullptr) {
                if (i == 0) { // The first room name (Doesn't need a comma before it)
                    cout << moveCurrentRoom->connectedRooms[i]->name;
                    connectedRoomsCount++;
                } else { // Rest of the rooms names (Need commas before each one)
                    cout << ", " << moveCurrentRoom->connectedRooms[i]->name;
                    connectedRoomsCount++;
                }
            }
        }
        cout << "), or \"nothing\" if you don't want to move." << endl;

        string roomChoice;
        cin >> roomChoice; //Takes users input for the room they want to move to

        //Validates that the imputed room matches one of the connected rooms and sets the new room to the one picked.
        for (int i = 0; i < connectedRoomsCount; ++i) {
            if (roomChoice == moveCurrentRoom->connectedRooms[i]->name) {
                moveCurrentRoom = moveCurrentRoom->connectedRooms[i];
                isValidChoice = true;
                return moveCurrentRoom;
                break;
            }
            if (roomChoice == "nothing") {
                isValidChoice = true;
                return moveCurrentRoom;
                break;
            }
        }

        if (!isValidChoice) {
            cout << "Invalid room choice. Please choose a valid room." << endl;
        }
    }
}

// Allows the user to pick what they would like to do. Uses the current room as a parameter to pass through if they decide to move.
Room* playMenu(Room *currentRoom, Item ind[], Room &room1, Room &room2, Room &room3, Room &room4, Room &room5, Room &room6, Room &room8, Room &room9, chrono::high_resolution_clock::time_point start_time) {
    cout << "What would you like to do? Commands:\n- move\n- map (If you have it)\n- check-inventory\n- get\n- about\n- time" << endl;
    cin >> gameInput;
    Room* newCurrentRoom = currentRoom;
    if (gameInput == "move" || gameInput == "Move") {
        newCurrentRoom = move(currentRoom); // Uses move command to update the players room
    }
    //Allows the user to use the map if they have it, and doesn't if they don't.
    if (gameInput == "map" || gameInput == "Map") {
        if (room1.hasItem1) {
            cout << "You don't have that item, so you can't use that function!" << endl;
        }
        else{
            map();
        }
    }
    if (gameInput == "check-inventory" || gameInput ==  "Check-inventory" || gameInput ==  "Check-Inventory") {
        //checkInventory(); //just iterate through the inventory, which is hopefully filled with item objects
        checkInventory(ind, room1,room2, room3, room4, room5, room6, room8, room9);
    }
    if (gameInput == "get" || gameInput ==  "Get") {
        getItem(ind, currentRoom);
    }
    if (gameInput == "about" || gameInput ==  "About"){
        about();
    }
    if (gameInput == "time" || gameInput ==  "Time"){
        auto end_time = chrono::high_resolution_clock::now();

        // Calculate the elapsed time
        auto duration = chrono::duration_cast<chrono::seconds>(end_time - start_time);
        cout << "Game duration: " << duration.count() << " seconds" << endl;
    }
    return newCurrentRoom; // Passes the new room to main, or the old one if the player didn't move
}

// Check if the player is in the same room after using the playMenu
bool isPlayerInNewRoom(Room *previousRoom, Room *currentRoom) {
    string firstRoom = previousRoom->name;
    string secondRoom = currentRoom->name;
    if (firstRoom != secondRoom) {
        return true;
    }
    else {
        return false;
    }
}

Room *forcePlayerIntoPreviousRoom(Room *previousRoom) {
    Room *currentRoom = previousRoom;
    cout << "You have returned to the " << currentRoom->name << endl;
    return currentRoom;
}

// ------------------------------- BOSS FIGHT CODE (START) -------------------------------------------------------------
bool isRoomSealed = false; // Bool to control the room availability
int snailDamage = 1; //Variable used to find snails damage each turn

//Snail struct with its snailHealth, # of heads, and damage before growing additional heads
struct Snail {
    int Health;
    int Heads;
    int BaseDamage;

};

//Gives snail initial attributes and creates him
Snail createSnail() {
    Snail snail{};
    snail.Health = 40;
    snail.Heads = 1;
    snail.BaseDamage = 2;
    return snail;
}
Snail snail = createSnail();

player createPlayer() {
    player player{};
    player.Health = 20;
    return player;
}
player player = createPlayer();

// *Fighting Options* Start -------------------------------
void KnifeUsed() {
    if (Knife.isAvailable) {
        cout << "You attack with the Knife, but it is not very effective and deals " << Knife.damage << " damage." << endl;
        snail.Health -= Knife.damage;
    }
    else {
        cout << "You do not currently have that weapon! The snail prepares to attack you as you fumble around." << endl;
    }
}
void ShovelUsed() {
    if (Shovel.isAvailable) {
        cout
                << "As you raise your shovel you wonder if you should wait for better moment to attack or go for the strike now?"
                << endl;
        cout << "1) Strike Now!\n2) Wait." << endl;
        int choice;
        cin >> choice;
        if (choice == 1) {
            cout
                    << "You seize the moment and attack, but the shovel practically glides off of the snails shell and only deals "
                    << Shovel.damage << " damage." << endl;
            snail.Health -= Shovel.damage;
        }
        if (choice == 2) {
            cout
                    << "You bide your time and when the snail looks upwards ur able to gouge his underside with the shovel resulting in "
                    << Shovel.damage * 5 << " damage!" << endl;
            snail.Health -= Shovel.damage * 5;

            // 1/3rd chance to lose shovel
            if (rand() % 4 == 1) {
                cout
                        << "Unfortunately the snail also reacted quickly and you were unable to grab back the shovel from its body." << endl;
                Shovel.isAvailable = false;
            }
        }

    }
    else {
        cout << "You do not currently have that weapon! The snail prepares to attack you as you fumble around." << endl;
    }
}
void DaggerUsed() {
    if (Dagger.isAvailable || GoopDagger.isAvailable) {
        if (Dagger.isAvailable) {
            cout << " You attack with the uncoated dagger and deal " << Dagger.damage
                 << " as the snail seemingly laughs at you." << endl;
        }
        if (GoopDagger.isAvailable) {
            cout << "You attack the snail with the dagger coated in his own poisonous slime and deal "
                 << GoopDagger.damage << " damage to him!" << endl;
            cout << "However now that the dagger has reabsorbed his living slime it will no longer be poisonous to him."
                 << endl;
            snail.Health -= GoopDagger.damage;
            GoopDagger.isAvailable = false;
            Dagger.isAvailable = true;
        }
    }
    else {
        cout << "You do not currently have that weapon! The snail prepares to attack you as you fumble around." << endl;
    }
}
void SyringeUsed() {
    if (Syringe.isAvailable) {
        if (rand() % 30 == 1) {// Random chance to instakill
            snail.Health = 0;
            cout << "The syringe caused the snail to explode! I wonder what was on that..." << endl;
        } else {
            cout
                    << "Whatever disease you thought must've been on the Syringe had \nzero impact on the snail this attempt and resulted in " << Syringe.damage << " damage being done this time." << endl;
        }
    }
    else {
        cout << "You do not currently have that weapon! The snail prepares to attack you as you fumble around." << endl;
    }
}
void SwordUsed() {
    if (Sword.isAvailable) {
        if (swordBeenUsed) {
            if (rand() % 3 == 1) {// 1/2 chance to grow a new head
                cout << "You slash off one head, but the snail manages to yet again, grow two more." << endl;
                cout << "You're slash also does " << Sword.damage << " damage.";
                snail.Heads += 1;
            } else {
                cout << "You slash off one head and the snail does not regen new ones this time!" << endl;
                cout << "You're slash also does " << Sword.damage << " damage." << endl;
                snail.Heads -= 1;
            }
        } else {
            cout
                    << "You cut off the snail's head! Too bad it has genetic modifications that let it grow back two more!\nThe snail has gained extra damage with its new head as well."
                    << endl;
            cout << "You're slash also does " << Sword.damage << " damage." << endl;
            snail.Heads += 1;
            swordBeenUsed = true;
        }
        snail.Health -= Sword.damage;
    } else {
        cout << "You do not currently have that weapon! The snail prepares to attack you as you fumble around." << endl;
    }
}

int MedKitUsesLeftGlobal = 3;
int MedKitUsed(int MedKitUsesLeftLocal) {
        if (MedKit.isAvailable && MedKitUsesLeftLocal > 1) {
            cout << "You patch yourself up and restore 7 hp! Careful, your uses are limited!" << endl;
            player.Health += 7;
            MedKitUsesLeftLocal -= 1;
        } else if (MedKit.isAvailable && MedKitUsesLeftLocal == 1){
            cout << "You patch yourself up and restore 7 hp! That was the last of the bandages!" << endl;
            player.Health += 7;
            MedKitUsesLeftLocal -= 1;
        }
        else {
            cout << "You do not currently have a MedKit! The snail prepares to attack you as you fumble around."
                 << endl;
        }
        return MedKitUsesLeftLocal;
    }

void SealRoom(Room &room3, Room &room5, Room *previousRoom) {
    if (previousRoom == &room3) {
        room3.connectedRooms[1] = nullptr;
    }
    if (previousRoom == &room5) {
        room5.connectedRooms[1] = nullptr;
    }
    isRoomSealed = true;
}

bool endFightBecauseOfRunAway = false; //Used to break out of the boss fight code when the player runs
Room *RunAway(Room &room3, Room &room5, Room *currentRoom, Room *previousRoom) {
    if (!isRoomSealed) {
        cout << "You run away and smash the card reader sealing the room from this side, now you'll have to go around if you want to fight again." << endl;
        SealRoom(room3, room5, previousRoom);
        isRoomSealed = true; // Global bool to track if one side of the snail room has been closed
        currentRoom = forcePlayerIntoPreviousRoom(previousRoom);
        endFightBecauseOfRunAway = true;
        printRoom(currentRoom);
    }
    else {
        cout << "You can't run away again without sealing off the room entirely! Then, you wouldn't be able to beat the game!" << endl;
    }
    return currentRoom;
}
// *Fighting Options* End -------------------------------

    Room *bossSelection(Room &room3, Room &room5, Room *currentRoom, Room *previousRoom) {

        cout << "What would you like to do?\nMake sure you have the item you want to use or the snail "
                "will catch you off guard." << endl;
        cout << "1) Attack with Knife" << endl;
        cout << "2) Attack with Shovel" << endl;
        cout << "3) Attack with Dagger" << endl;
        cout << "4) Attack with Syringe" << endl;
        cout << "5) Attack with Sword" << endl;
        cout << "6) Use MedKit to Heal" << endl;
        cout << "7) Run Away" << endl;
        int bossChoice;
        cin >> bossChoice;
        switch (bossChoice) {
            case 1: {
                KnifeUsed();
                break;
            }
            case 2: {
                ShovelUsed();
                break;
            }
            case 3: {
                DaggerUsed();
                break;
            }
            case 4: {
                SyringeUsed();
                break;
            }
            case 5: {
                SwordUsed();
                break;
            }
            case 6: {
                MedKitUsesLeftGlobal = MedKitUsed(MedKitUsesLeftGlobal);
                break;
            }
            case 7: {
                currentRoom = RunAway(room3, room5, currentRoom, previousRoom);
                break;
            }
            default: {
                cout << "Not a valid selection!" << endl;
                break;
            };
        }
        return currentRoom;
    }

    void FightSummary() {
        cout << endl
             << "Current Fight Progress (Scroll up if you can't see the result of your previous action):\nSnail's Health: "
             << snail.Health << endl;
        if (snail.Heads >= 2) {
            cout << "Snail's # of Heads: " << snail.Heads << endl;
        }
        cout << "Your Health: " << player.Health << endl << endl;
    }

    void SnailAttack() {
        snailDamage = ((rand() % 2) + 1) * floor(snail.BaseDamage * snail.Heads *
                                                 .5); //Damage scales with # of heads and has a random chance to crit
        player.Health -= snailDamage;
        if (snail.Heads == 1)
            cout << "The Snail charges at you and deals "
                 << snailDamage << " damage to you before moving back." << endl;
        else {
            cout << "The Snail charges at you with " << snail.Heads << " heads and deals "
                 << snailDamage << " damage to you before moving back." << endl;
        }
    }

    Room *BossFight(Room &room3, Room &room5, Room *currentRoom, Room *previousRoom) {
        //Repeat till snail dies, the player dies, or the player runs
        while ((snail.Health > 0) && (player.Health > 0 && snail.Heads > 0)) {
            currentRoom = bossSelection(room3, room5, currentRoom, previousRoom);// Let User select choice
            if ((snail.Health > 0) && (player.Health > 0) && snail.Heads > 0 && !endFightBecauseOfRunAway) { // Snail attacks
                SnailAttack();
            }
            if ((snail.Health > 0) && (player.Health > 0) && snail.Heads > 0 && !endFightBecauseOfRunAway) {
                FightSummary();
            }
            if (endFightBecauseOfRunAway) {
                endFightBecauseOfRunAway = false; //Sets it back to false so that the player will be able to do the fight again instead of while loop dying
                break;
            }
        }
        if ((snail.Health <= 0)) {
            cout << "\nCongrats! You beat the snail!" << endl;
        }
        if ((player.Health <= 0)) {
            cout << "\nYou died to the snail." << endl;
        }
        if ((snail.Heads <= 0)) {
            cout << "\nCongrats! You left the snail headless thus defeating him!" << endl;
        }
        return currentRoom;
    }
// ------------------------------- BOSS FIGHT CODE (END) ---------------------------------------------------------------

//Stops the player when they are trying to enter the snail room and ensures they have at least one weapon, note describing the snail, key to open the door, and a healing item. Also explains this to them.
    Room *SnailRoomRequirements(Room &room1, Room &room2, Room &room3, Room &room4, Room &room5, Room &room6, Room &room8,
                          Room &room9, Room *previousRoom, Room *currentRoom) {
        cout
                << "Dangerous Snail behind these doors! Please do not enter unless you at MINIMUM have:\n1) At least two weapons\n2)Information about the dangers of the snail\n3)A proper way to heal\n"
                   "4)An ID-Card with clearance to access the room" << endl;

        Knife.isAvailable = !room2.hasItem1; //Available if not pickup-able. First item in Mess Hall
        Dagger.isAvailable = !room5.hasItem1 && !GoopDagger.isAvailable; //Available if not pickup-able and GoopDagger isn't owned. First item in Cabins
        Syringe.isAvailable = !room6.hasItem1; //Available if not pickup-able. First item in MedicalBay
        Shovel.isAvailable = !room8.hasItem1; // //Available if not pickup-able. First item in GreenHouse
        Sword.isAvailable = !room9.hasItem1; //Available if not pickup-able. First item in Storage-Room
        MedKit.isAvailable = !room2.hasItem2; //Available if not pickup-able. First item in Electrical-Room


        //Count How many weapons the player has
        if (Knife.isAvailable) {
            weaponCount += 1; //weaponCount var is declared right below the weapon instances in Boss Fight Code
        }
        if (Shovel.isAvailable) {
            weaponCount += 1; //weaponCount var is declared right below the weapon instances in Boss Fight Code
        }
        if (Dagger.isAvailable || GoopDagger.isAvailable) {
            weaponCount += 1; //weaponCount var is declared right below the weapon instances in Boss Fight Code
        }
        if (Syringe.isAvailable) {
            weaponCount += 1; //weaponCount var is declared right below the weapon instances in Boss Fight Code
        }
        if (Sword.isAvailable) {
            weaponCount += 1; //weaponCount var is declared right below the weapon instances in Boss Fight Code
        }

        if (weaponCount >= 2 && MedKit.isAvailable && !room1.hasItem2 /* The ID Card */ && !room2.hasItem2 /* The Slime Note */) {
            cout << "You can open the door with your ID-Card to take on the giant snail." << endl;
            cout << "Do you wish to take him on? (y/n?)" << endl;
            string enterSnailRoomChoice;
            cin >> enterSnailRoomChoice;
            if (enterSnailRoomChoice == "y") {
                currentRoom = BossFight(room3, room5, currentRoom, previousRoom);
            }
            if (enterSnailRoomChoice == "n") {
                currentRoom = forcePlayerIntoPreviousRoom(previousRoom);
                printRoom(currentRoom);
            }
        } else {
            cout << endl << "You are not currently prepared to fight the snail, go explore some more to meet the requirements." << endl;
            currentRoom = forcePlayerIntoPreviousRoom(previousRoom);
            printRoom(currentRoom);
        }
    return currentRoom;
    }

//-----------------------------------------------------------------------------------------------------------------------

int main() {
   about();

    fstream in_stream;
    Item ind[18];

        int row = 0;
        string line;
        in_stream.open("Updated Item List - Sheet1.csv");
        getline(in_stream, line, '\n');
        while (getline(in_stream, line, '\n')) {
            ind[row].input(line);
            row++;
        }
        in_stream.close();

        // Get the current time at the start of the game
        auto start_time = std::chrono::high_resolution_clock::now();

        Room room1("Control-Room",
                   "\nIn the center of the room there is a command console.\nNear the edge of the room there is a table, on which\nthere is a folded up sheet of paper. Near the command\nconsole, you can see an ID card.",
                   ind[0], ind[1], true, true);
        Room room2("Mess-Hall",
                   "\nTables with stools line the center of the room. On one\nside of the room, there appears to be what was once a\nbuffet. It is now covered in dust, and some strange\ngooey liquid. You can see a note in the goo. On the\nother end of the buffet are various utensils, notably\na knife.",
                   ind[2], ind[3], true, true);
        Room room3("Electrical-Room",
                   "\nUpon entering the dark room, you notice rows upon rows\nof defunct hardware for servers. In the corner of the\nroom there is what appears to be a shelf with emergency\nmedical supplies on it. You can see a light bulb discarded\non the floor.\n",
                   ind[4], ind[5], true, true);
        Room room4("Radio-Room",
                   "\nYou find a room with a large window directly ahead of\nyou. The window looks out into the vast emptiness of\nspace, along with a beautiful view of the sun, brighter\nthan you've ever seen it before. Beneath the window is a\nsystem that is quite obviously a communications system.\nThe system looks dead, but there seems to be a spare\nradio nearby. Also near the system is a skull, with\nslime nearby.",
                   ind[6], ind[7], true, true);
        Room room5("Cabins",
                   "\nAhead of you lies 8 bunk beds, with 4 on each side of the\nroom. They are well-made, but clearly none of them have been\nslept in for a very long time. To the side of each bed there\nis a small dresser for personal belongings and clothing. You\ncan see a sock strewn out on one dresser, and a dagger placed\nneatly on another.",
                   ind[8], ind[9], true, true);
        Room room6("Medical-Bay",
                   "\nYou enter a small medical bay with 2 beds, medical equipment for each,\na small desk in the corner, and a coat rack on the wall across from the\nbeds. Papers are scattered across the desk, along with a used syringe\nand some hand sanitizer. Perhaps someone was looking for something?\n",
                   ind[10], ind[11], true, true);
        Room room7("Snail-Room",
                   "You look through the small windows of the doors.\nThe room glows green. The air feels stale, and it smells like\nsomething died here. In the corner, a pulsing carcass sits.\nThe source of the light. A slimy green goo is splattered all\nover the walls.\nThere is also a shriveling up note posted on the door:\n",
                   ind[12], ind[13], true, true);
        Room room8("Greenhouse",
                   "\nVarious plants are lined up across the room.\nBeneath each plant is a label that describes the\nplant and what its used for. Light from the sun\nshines in through the glass that makes up most of\nthe room. Lined up on one wall are various drawers,\nshelves, and gardening tools. A shovel can be found\nleaning on one of the shelves. There is some green\ngoop off in the corner.\n",
                   ind[14], ind[15], true, true);
        Room room9("Storage-Room",
                   "\nThe lights are broken, so the only illumination is coming from\nthe other side of the door. There are boxes scattered throughout\nthe room. Each box is labeled, presumably for what was contained\nin them. They all seem to be full of junk, except a box full of\nlighters. Along the walls are racks full of weapons, including an\nold looking sword.\n",
                   ind[16], ind[17], true, true);

        Room *previousRoomMain = &room2; /* Initialize the previousRoom Global var and initialize it, so
 the first local map will show up too */

        // Seed the random number generator with the current time
        srand(time(0));


        // Create nine rooms

        // Connect the rooms according to the specified connections
        room1.connectedRooms[0] = &room2;
        room1.connectedRooms[1] = &room3;
        room1.connectedRooms[2] = &room4;
        room1.connectedRooms[3] = &room5;

        room2.connectedRooms[0] = &room1;
        room2.connectedRooms[1] = &room6;
        room2.connectedRooms[2] = &room9;

        room3.connectedRooms[0] = &room1;
        room3.connectedRooms[1] = &room7;
        room3.connectedRooms[2] = &room8;

        room4.connectedRooms[0] = &room1;
        room4.connectedRooms[1] = &room6;
        room4.connectedRooms[2] = &room8;

        room5.connectedRooms[0] = &room1;
        room5.connectedRooms[1] = &room7;
        room5.connectedRooms[2] = &room9;

        room6.connectedRooms[0] = &room2;
        room6.connectedRooms[1] = &room4;

        room7.connectedRooms[0] = &room3;
        room7.connectedRooms[1] = &room5;

        room8.connectedRooms[0] = &room3;
        room8.connectedRooms[1] = &room4;

        room9.connectedRooms[0] = &room2;
        room9.connectedRooms[1] = &room5;

        // Start the game in Room 1
        Room *currentRoom = &room1;

        // Game loop
        while (true) {
            if (isPlayerInNewRoom(previousRoomMain, currentRoom)) { //If player is in a new room then print that room's picture
                printRoom(currentRoom);
            }
            // Print the current room description
            if (currentRoom->name != "Snail-Room") { //Ensures that the program doesn't say that the player is in the room when they are met with the fight requirements
                cout << "You are in the " << currentRoom->name << endl;
                previousRoomMain = currentRoom; // Store current room as previous except for the snail room
            }
            cout << currentRoom->description << endl;
            if (currentRoom->name == "Snail-Room") { //If player is in the snail room then show them the requirements to enter and let them fight if they meet them.
                currentRoom = SnailRoomRequirements(room1, room2, room3, room4, room5, room6, room8, room9, previousRoomMain, currentRoom);
            }
            else {
                currentRoom = playMenu(currentRoom, ind, room1, room2, room3, room4, room5, room6, room8, room9, start_time); // Allows the user to move and updates the current room with the result of the move command// Allows the user to move and updates the current room with the result of the move command
            }

            //END GAME
            if ((snail.Health <= 0 || player.Health <= 0 || snail.Heads <= 0)) {
                break;
            }
        }
        // Calculate the elapsed time
        auto end_time = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::seconds>(end_time - start_time);
        cout << "Game duration: " << duration.count() << " seconds" << endl;


    //Score Code
    int itemCount = itemCountFunction(ind, room1, room2, room3, room4, room5, room6, room8, room9);
    //Max Score = 999
    int score = 0;
    //16 items, each item worth 20 points = 320 total
    score += (itemCount * 20);
    //time, remaining 379 points. 60 seconds then start losing points
    if (chrono::duration_cast<chrono::duration<int>>(duration).count() > 60) {
        score += (379 - (chrono::duration_cast<chrono::duration<int>>(duration).count() * 10));
    }
    else{
        score += 379;
    }
    //player max health, each hp remaining is 15 points = 300 total
    score += (player.Health * 15);


    cout << "THE END!" << endl;
    cout << "YOUR FINAL SCORE IS " << score << endl;
    return 0;
    }