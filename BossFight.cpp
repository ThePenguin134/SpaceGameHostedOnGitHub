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

//Create Snail and initial attributes
Snail createSnail() {
    Snail snail{};
    snail.Health = 10;
    snail.Heads = 1;
    snail.BaseDamage = 3;
    return snail;
}

// Weapon availability/damage values struct
class Weapon {
public:
    bool isAvailable;
    int damage;

    Weapon(bool WeaponIsAvailable, int weaponDamage) : isAvailable(WeaponIsAvailable),
                                                       damage(weaponDamage) {};
};

Weapon Scalpel(false, 2);
Weapon Shovel(false, 1); // Shovels big attack is 5x this value
Weapon Dagger(false, 1);
Weapon GoopDagger(false, 4);
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

Snail snail = createSnail();

void ScalpelUsed() {
    cout << "You attack with the scalpel, but it is not very effective and deals " << Scalpel.damage << "." << endl;
    snail.Health -= Scalpel.damage;
}

void ShovelUsed() {
    cout << "As you raise your shovel you wonder if you should wait for better moment to attack or go for the strike now?" << endl;
    cout << "1) Strike Now!\n2) Wait." << endl;
    int choice;
    cin >> choice;
    if (choice = 1) {
        cout << "You seize the moment and attack, but the shovel practically glides oof of the snails shell and does minimal damage." << endl;
        snail.Health -= Shovel.damage;
    }
    if (choice = 2) {
        cout << "You bide your time and when the snail looks upwards ur able to gouge his underside with the shovel resulting in a lot of damage." << endl;
        snail.Health -= Shovel.damage * 5;

        // 1/3rd chance to lose shovel
        if (rand() % 4) {
            cout << "Unfortunately the snail also reacted quickly and you were unable to grab back the shovel from its body." << endl;
            Shovel.isAvailable = false;
        }
    }

}
void daggerUsed() {

}
// Dagger Function
// Bool to track if Dagger was already used

// Needle Function
// Small chance to instakill, otherwise do nothing

// Sword Function
//Bool to track if sword was already used

// Run away Function
// Seal off the door

// ___________________________________________________________________________________________________________________

void BossFight() {
    srand(time(0));


    // Select Choice code - Let the user select any weapon or to run away.


    //Actual Fight Code
        //Repeat till snail or player dies
        for((Snail().snailHealth != 0) && (playerHealth != 0)) {

            bossSlection();// Let User select choice
            // Snail attacks
        }






}