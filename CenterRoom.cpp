#include <iostream>
using namespace std;

int main() {
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
