// Cody's Working on this rn, I'll update this if I take a break.

#include "iostream"
#include "cmath"

using namespace std;

void BossFight() {

    //Snail struct with its health, # of heads, and damage before growing additional heads
    struct Snail {
        int health;
        int heads;
        int snailBaseDamage;
    };

    // Weapon availability struct
    class Weapon(weaponselection) {
        bool isAvailable;
        int damage;
    };

    // Scalpel Function
        // Deal a small amount of damage

    // Shovel Function
        //Choice to attack or wait
            // Attacking results in minimal damage
            // Waiting results in big damage, but a chance to lose the shovel

    // Dagger Function
        // Bool to track if Dagger was already used

    // Needle Function
        // Small chance to instakill, otherwise do nothing

    // Sword Function
        //Bool to track if sword was already used

    // Run away Function
        // Seal off the door

    // Select Choice code - Let the user select any weapon or to run away.
    cout << "What would you like to do?" << endl;
    cout << "1) Attack with Scalpel" << endl;
    cout << "2) Attack with Shovel" << endl;
    cout << "3) Attack with Dagger" << endl;
    cout << "4) Attack with Needle" << endl;
    cout << "5) Attack with Sword" << endl;
    cout << "6) Run Away" << endl;
    int bossChoice;
    cin >> bossChoice;
    switch(bossChoice) {
        case 1: {

        }
        case 2: {

        }
        case 3: {

        }
        case 4: {

        }
        case 5: {

        }
        case 6: {

        }
        default: {
            cout << "Not a valid selection!" << endl;
        };
    }

    //Actual Fight Code
        //Repeat till snail or player dies
        for((Snail().health != 0) && (playerHealth != 0)) {

        }
            // Let User select choice
            // Snail attacks






}