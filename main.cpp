#include <iostream>
#include "cmath"

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
    cout << "\nIn the center of the room there is a command console.\n"
            "Near the edge of the room there is a table, on which\n"
            "there is a suspicious container of liquid. Under the\n"
            "container, there appears to be a napkin, acting as a\n"
            "coaster of sorts."; //control room description
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

    cout << "\nTables with stools line the center of the room. On one\n"
            "side of the room, there appears to be what was once a\n"
            "buffet. It is now covered in dust, and some strange\n"
            "gooey liquid. On the other side of the room, there are\n"
            "three vending machines that look like they haven't been\n"
            "touched in many generations."; //mess hall description

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

    cout << "\nYou find a room with a large window directly ahead of\n"
            "you. The window looks out into the vast emptiness of\n"
            "space, along with a beautiful view of the sun, brighter\n"
            "than you've ever seen it before. Beneath the window is a\n"
            "system that is quite obviously a communications system.\n"
            "Various dials and levers span across the system. The rest\n"
            "of the room is filled with cases for various electronics."; //radio room description

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

    cout << "\nYou enter a small medical bay with 2 beds, medical equipment for each, a small desk in the corner, "
            "\nand a coat rack on the wall across from the beds. Papers are scattered across the desk. "
            "\nPerhaps someone was looking for something? ";
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
    cout << "\nVarious plants are lined up across the room.\n"
            "Beneath each plant is a label that describes the\n"
            "plant and what its used for. Light from the sun\n"
            "shines in through the glass that makes up most of\n"
            "the room. Lined up on one wall are various drawers,\n"
            "shelves, and gardening tools. A shovel can be found\n"
            "leaning on one of the shelves."; //Greenhouse description

}
void StorageRoom() {

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

    cout << "\nThe lights are broken, so the only illumination is coming from\n"
            "the other side of the door. There are boxes scattered throughout\n"
            "the room. Each box is labeled, presumably for what was contained\n"
            "in them. However, all but one of the boxes is empty. The only one\n"
            "that isn't empty is labeled \"Spare Parts\""; //storage room description

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

    cout << "\nAhead of you lies 8 bunk beds, with 4 on each side of the\n"
            "room. They are well-made, but clearly none of them have been\n"
            "slept in for a very long time. To the side of each bed there\n"
            "is a small dresser for personal belongings and clothing."; //cabins description

}
void AlienRoom() {

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

    cout << "\nThe room glows green. The air feels stale, and it smells like\n"
            "something died here. In the corner, a pulsing carcass sits.\n"
            "The source of the light. A slimy green goo is splattered all\n"
            "over the walls. "; //alien room description
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

    cout << "\nUpon entering the dark room, you notice rows upon rows\n"
            "of defunct hardware for servers. In the corner of the\n"
            "room there is what appears to be an electrical panel."; //electrical room description

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
    cout << "            ";
    cout << "-";
    cout << "            ";
    cout << "*" << endl;

    //row 5

    cout << "   ";
    cout << "*";
    cout << "               ";
    cout << "*";
    cout << "            ";
    cout << "*";
    cout << "               ";
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

    cout << "*              ";
    cout << "-                    -";
    cout << "              *" << endl;

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
    cout << "               ";
    cout << "*";
    cout << "            ";
    cout << "*";
    cout << "               ";
    cout << "*" << endl;

    //row 18

    cout << "      ";
    cout << "*";
    cout << "            ";
    cout << "-";
    cout << "            ";
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

bool mainMenuActive = true;
bool gameStart = false;
int startInput;
string gameInput;
void playMenu();
void checkInventory();
struct Item {
    int ID;
    string name;
    string description;
};


class Room {
public:
    string name;
    string description;
    bool hasItem;
    Room* connectedRooms[9]; // Array to hold connected rooms

    Room(string n, string desc, bool Item) {
        name = n;
        description = desc;
        hasItem = Item;
        for (int i = 0; i < 9; ++i) {
            connectedRooms[i] = nullptr;
        }
    }
};

struct Player {
    Item inventory[10];
};
Player player;

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
    if (currentRoom->name == "Alien-Room") {
        AlienRoom();
    }
    if (currentRoom->name == "Greenhouse") {
        GreenHouse();
    }
    if (currentRoom->name == "Storage-Room") {
        StorageRoom();
    }
}

Room room1("Control-Room", "In the center of the room there is a command console. Near the edge of the room there is a table, on which there is a suspicious container of liquid. Under the container, there appears to be a napkin, acting as a coaster of sorts", true);
Room room2("Mess-Hall", "Tables with stools line the center of the room. On one side of the room, there appears to be what was once a buffet. It is now covered in dust, and some strange gooey liquid. On the other side of the room, there are three vending machines that look like they haven't been touched in many generations. ", false);
Room room3("Electrical-Room", "Upon entering the dark room, you notice rows upon rows of defunct hardware for servers. In the corner of the room there is what appears to be an electrical panel.", true);
Room room4("Radio-Room", "You find a room with a large window directly ahead of you. The window looks out into the vast emptiness of space, along with a beautiful view of the sun, brighter than you've ever seen it before. Beneath the window is a system that is quite obviously a communications system. Various dials and levers span across the system. The rest of the room is filled with cases for various electronics.", false);
Room room5("Cabins", "Ahead of you lies 8 bunk beds, with 4 on each side of the room. They are well-made, but clearly none of them have been slept in for a very long time. To the side of each bed there is a small dresser for personal belongings and clothing.", true);
Room room6("Medical-Bay", "You enter a small medical bay with 2 beds, medical equipment for each, a small desk in the corner, and a coat rack on the wall across from the beds. Papers are scattered across the desk. Perhaps someone was looking for something?", true);
Room room7("Alien-Room", "The room glows green. The air feels stale, and it smells like something died here. In the corner, a pulsing carcass sits. The source of the light. A slimy green goo is splattered all over the walls.", true);
Room room8("Greenhouse", "Various plants are lined up across the room. Beneath each plant is a label that describes the plant and what its used for. Light from the sun shines in through the glass that makes up most of the room. Lined up on one wall are various drawers, shelves, and gardening tools. A shovel can be found leaning on one of the shelves.", true);
Room room9("Storage-Room", "The lights are broken, so the only illumination is coming from the other side of the door. There are boxes scattered throughout the room. Each box is labeled, presumably for what was contained in them. However, all but one of the boxes is empty. The only one that isn't empty is labeled \"Spare Parts\".", true);

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
        cout << ")" << endl;

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
        }

        if (!isValidChoice) {
            cout << "Invalid room choice. Please choose a valid room." << endl;
        }
    }
}

// Allows the user to pick what they would like to do. Uses the current room as a parameter to pass through if they decide to move.
Room* playMenu(Room *currentRoom) {
    cout << "What would you like to do?\n";
    cin >> gameInput;
    if (gameInput == "move") {
        Room* newCurrentRoom = move(currentRoom); // Passes the current room into the move function and playMenu returns the new room for later use
        return newCurrentRoom;
    }
    if (gameInput == "check map") {
        map();
    }
    if (gameInput == "check inventory") {
        //checkInventory(); //just iterate through the inventory, which is hopefully filled with item objects
    }
    if (gameInput == "get") {
        //cool place for check what item is in a room and adding it to the inventory.
    }
}

// ------------------------------- BOSS FIGHT CODE (START) -------------------------------------------------------------
bool isRoomSealed = false; // Bool to control the room availability
int playerHealth = 20; // Sets the players health
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

// Weapon availability/damage values struct
class Weapon {
public:
    bool isAvailable;
    int damage;

    Weapon(bool WeaponIsAvailable, int weaponDamage) : isAvailable(WeaponIsAvailable), damage(weaponDamage) {};
};

// Sets weapons availability and damage. Edit weapon damage values below:
Weapon Knife(false, 2); // Medium attack
Weapon Shovel(false, 1); // Small attack. Shovels big attack is 5x this value
Weapon Dagger(false, 1); // Later small attacks with the dagger
Weapon GoopDagger(false, 4); // First big attack with the dagger
Weapon Needle(false, 0); // instakills if random chance is met, 0 damage otherwise
Weapon Sword(false, 1); // Small attack
bool swordBeenUsed = false;
int weaponCount;

// *Weapon Functions* Start -------------------------------
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
void NeedleUsed() {
    if (Needle.isAvailable) {
        if (rand() % 30 == 1) {// Random chance to instakill
            snail.Health = 0;
        } else {
            cout
                    << "Whatever disease you thought must've been on the needle had zero impact on the snail this attempt and resulted in " << Needle.damage << " damage being done this time." << endl;
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
            }
            else {
                cout << "You slash off one head and the snail does not regen new ones this time!" << endl;
                cout << "You're slash also does " << Sword.damage << " damage." << endl;
                snail.Heads -= 1;
            }
        }
        else {
            cout << "You cut off the snail's head! Too bad it has genetic modifications that let it grow back two more!\nThe snail has gained extra damage with its new head as well." << endl;
            cout << "You're slash also does " << Sword.damage << " damage." << endl;
            snail.Heads += 1;
            swordBeenUsed = true;
        }
        snail.Health -= Sword.damage;
    }
    else {
        cout << "You do not currently have that weapon! The snail prepares to attack you as you fumble around." << endl;
    }
}
// *Weapon Functions* End -------------------------------

void SealRoom() {
    room3.connectedRooms[1] = nullptr;
    room5.connectedRooms[1] = nullptr;
}

void RunAway() {
    cout << "You run away and seal the room, so you never have to see that abomination again." << endl;
    SealRoom();
    isRoomSealed = true;
}

void bossSelection() {
    cout << "What would you like to do?" << endl;
    cout << "1) Attack with Knife" << endl;
    cout << "2) Attack with Shovel" << endl;
    cout << "3) Attack with Dagger" << endl;
    cout << "4) Attack with Needle" << endl;
    cout << "5) Attack with Sword" << endl;
    cout << "6) Run Away" << endl;
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
            NeedleUsed();
            break;
        }
        case 5: {
            SwordUsed();
            break;
        }
        case 6: {
            RunAway();
            break;
        }
        default: {
            cout << "Not a valid selection!" << endl;
            break;
        };
    }
}

void FightSummary() {
    cout << endl << "Current Fight Progress (Scroll up if you can't see the result of your previous action):\nSnail's Health: " << snail.Health << "\nSnail's # of Heads: " << snail.Heads
    << "\nYour Health: " << playerHealth << endl << endl;
}

void SnailAttack() {
    snailDamage = ((rand() % 2) + 1) * floor(snail.BaseDamage * snail.Heads * .5); //Damage scales with # of heads and has a random chance to crit
    playerHealth -= snailDamage;
    if (snail.Heads == 1)
    cout << "The Snail charges at you and deals "
         << snailDamage << " damage to you before moving back." << endl;
    else {
        cout << "The Snail charges at you with " << snail.Heads << " heads and deals "
             << snailDamage << " damage to you before moving back." << endl;
    }
}

void BossFight() {
    //Repeat till snail dies, the player dies, or the player runs
    while ((snail.Health > 0) && (playerHealth > 0 && snail.Heads > 0) && !isRoomSealed) {
        bossSelection();// Let User select choice
        if ((snail.Health > 0) && (playerHealth > 0) && !isRoomSealed && snail.Heads > 0) { // Snail attacks
            SnailAttack();
        }
        if ((snail.Health > 0) && (playerHealth > 0) && !isRoomSealed && snail.Heads > 0) {
            FightSummary();
        }
    }
    if (isRoomSealed) {

    }
    if ((snail.Health <= 0)) {
        cout << "\nCongrats! You beat the snail!" << endl;
    }
    if ((playerHealth <= 0)) {
        cout << "\nYou died to the snail." << endl;
    }
    if ((snail.Heads <= 0)) {
        cout << "\nCongrats! You left the snail headless thus defeating him!" << endl;
    }
}
// ------------------------------- BOSS FIGHT CODE (END) ---------------------------------------------------------------

// ------------------------------- Room Interaction (START) ------------------------------------------------------------

void GoopInteraction() {
    if (Dagger.isAvailable) {
        cout << "You dip the dagger in the goop and it now glows green." << endl;
        GoopDagger.isAvailable = true;
        Dagger.isAvailable = false;
    }
}

//Stops the player when they are trying to enter the alien room and ensures they have at least one weapon, note describing the snail, key to open the door, and a healing item. Also explains this to them.
void AlienRoomRequirements() {
    cout << "Dangerous Snail behind these doors! Please do not enter unless you at MINIMUM have:\n1) At least two weapons\n2)Information about the dangers of the snail\n3)A proper way to heal\n"
            "4)The key of course that we stored away for good reason" << endl;

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
    if (Needle.isAvailable) {
        weaponCount += 1; //weaponCount var is declared right below the weapon instances in Boss Fight Code
    }
    if (Sword.isAvailable) {
        weaponCount += 1; //weaponCount var is declared right below the weapon instances in Boss Fight Code
    }

    if (weaponCount >= 2) {
        cout << "You can open the door with your key to take on the giant snail." << endl;
        cout << "Do you wish to take him on? (y/n?)" << endl;
        string enterSnailRoomChoice;
        cin >> enterSnailRoomChoice;
        if (enterSnailRoomChoice == "y") {
            BossFight();
        }
        if (enterSnailRoomChoice == "n") {
            // Leave empty so the alien Room Code ends
        }
    }
    else {
        // Leave empty so the alien Room Code ends
    }
}


// ------------------------------- Room Interaction (END) --------------------------------------------------------------
int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Create five rooms

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

    // Create the three treasures
    bool isKnifePickupAvailable = true;
    bool isShovelPickupAvailable = true;
    bool isDaggerPickupAvailable = true;
    bool isNeedlePickupAvailable = true;
    bool isSwordPickupAvailable = true;

    // Start the game in Room 1
    Room *currentRoom = &room1;

    // Game loop
    while (true) {
        // Print the current room description
        printRoom(currentRoom);
        cout << "You are in the " << currentRoom->name << endl;
        cout << currentRoom->description << endl;
        if (currentRoom->name == "Alien-Room") {
            AlienRoomRequirements();
        }
        currentRoom = playMenu(currentRoom); // Allows the user to move and updates the current room with the result of the move command

        // Check if the room has a treasure and if the player wants to pick it up
        if (currentRoom->hasItem) {
            cout << "There is treasure in this room. Do you want to pick it up? (y/n)" << endl;
            char answer;
            cin >> answer;
            if (answer == 'y') {
                currentRoom->hasItem = false;
                cout << "You picked up the " << /*itemName <<*/ "!" << endl;
                // Update the corresponding treasure flag
                if (currentRoom == &room2) {
                    isKnifePickupAvailable = false;
                } else if (currentRoom == &room8) {
                    isShovelPickupAvailable = false;
                } else if (currentRoom == &room5) {
                    isDaggerPickupAvailable = false;
                } else if (currentRoom == &room6) {
                    isNeedlePickupAvailable = false;
                } else if (currentRoom == &room9) {
                    isSwordPickupAvailable = false;
                }
            }
        }
    }
    return 0;
}
