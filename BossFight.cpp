// Cody's Working on this rn, I'll update this if I take a break.

#include "iostream"
#include "cmath"

using namespace std;

//Snail struct with its snailHealth, # of heads, and damage before growing additional heads
struct Snail {
    int Health;
    int Heads;
    int BaseDamage;

};
// Weapon availability/damage values struct
class Weapon {
public:
    bool isAvailable;
    int damage;

    Weapon(bool WeaponIsAvailable, int weaponDamage) : isAvailable(WeaponIsAvailable),
                                                       damage(weaponDamage) {};
};

Weapon Scalpel(false, 1);
Weapon Shovel(false, 1);
Weapon Dagger(false, 1);
Weapon Needle(false, 1);
Weapon Sword(false, 1);
Weapon RunAway(false, 1);

void bossSlection() {
    cout << "What would you like to do?" << endl;
    cout << "1) Attack with Scalpel" << endl;
    cout << "2) Attack with Shovel" << endl;
    cout << "3) Attack with Dagger" << endl;
    cout << "4) Attack with Needle" << endl;
    cout << "5) Attack with Sword" << endl;
    cout << "6) Run Away" << endl;
    int bossChoice;
    cin >> bossChoice;
    switch (bossChoice) {
        case 1: {
            ScalpelUsed();
        }
        case 2: {
            ShovelUsed();
        }
        case 3: {
            DaggerUsed();
        }
        case 4: {
            NeedleUsed();
        }
        case 5: {
            SwordUsed();
        }
        case 6: {
            RunAway();
        }
        default: {
            cout << "Not a valid selection!" << endl;
        };
    }
}

void ScalpelUsed() {

}
// ___________________________________________________________________________________________________________________

void BossFight() {


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


    //Actual Fight Code
        //Repeat till snail or player dies
        for((Snail().snailHealth != 0) && (playerHealth != 0)) {

            bossSlection();// Let User select choice
            // Snail attacks
        }






}