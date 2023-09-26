#include <iostream>
using namespace std;
int main() {
    //declarations
    int input; //this variable is used whenever user input is needed as a place to save that input.
    bool incomplete = true; //while this is true, the program will loop forever until it reaches a good point to end.
    //input
    while (incomplete) {
        cout << "What would you like to do?\n1. Start Game\n2. View Instructions\n3. Exit Game\n"; //this is the start menu, that asks the user whether they want to play, read the instructions or exit.
        cin >> input;
        switch (input) { //switch statements are like if statements, but they let you define what each input does individually instead of having to nest if and else statements.
            case 1:
                while (incomplete) {
                    cout << "Which menu would you like to see?\n1. Room Menu\n2. Combat Menu\n"; //this determines whether you access the test room menu or the test battle menu.
                    cin >> input;
                    switch (input) {
                        case 1:
                            cout << "You find yourself in a room that look suspiciously like a placeholder\n"
                                 << "room put in by the developers. The developers must have been lazy, because\n"
                                 << "the only thing in the room is a tea kettle. What do you do?\n"
                                 << "1. Pick up tea kettle\n2. Exit room\n";
                            cin >> input;
                            switch (input) {
                                case 1:
                                    incomplete = false;
                                    cout << "You add the tea kettle to your inventory."; //there is no inventory yet, so nothing happens
                                    break; //this ends the entire block of code, which means either the program repeats if incomplete is true, or ends otherwise.
                                case 2:
                                    incomplete = false;
                                    cout << "You leave the room.";
                                    break;
                                default: //this determines what happens if an input doesn't match any of the cases
                                    cout << "That isn't a valid option!";
                                    break;

                            }
                            break;


                        case 2:
                            cout << "You find yourself facing down a assassin with a knife. All you have on you\n"
                                 << "is a sword. The assassin is rushing you, ready to strike. What do you do?\n"
                                 << "1. Swing your sword\n2. Guard with your sword" << endl;
                            cin >> input;
                            switch (input) {
                                case 1:
                                    incomplete = false;
                                    cout << "Since your sword has greater reach, you are able to hit the assassin. You win the fight!";
                                    break;
                                case 2:
                                    incomplete = false;
                                    cout << "The assassin goes for a stab, going right through your guard. Game over!";
                                    break;
                                default:
                                    cout << "That isn't a valid option!";
                                    break;

                            }
                            break;
                    }

                }
                break;
            case 2:
                cout << "Use the on screen prompts to decide what to do. If you get\n"
                     << "a menu such as 1. Jump, then typing 1 will let you jump.";
                break;
            case 3:
                incomplete = false;
                break;
            default:
                cout << "That isn't a valid option!";
                break;

        }
    }
}
