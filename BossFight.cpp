// Cody's Working on this rn, I'll update this if I take a break.

#include "iostream"
#include "cmath"

using namespace std;

bool isRoomSealed = false; // Bool to control the room availability
int playerHealth = 10; // Sets the players health
int snailDamage; //Variable used to find snails damage each turn

//Snail struct with its snailHealth, # of heads, and damage before growing additional heads
struct Snail {
    int Health;
    int Heads;
    int BaseDamage;

};

//Gives snail initial attributes and creates him
Snail createSnail() {
    Snail snail{};
    snail.Health = 20;
    snail.Heads = 1;
    snail.BaseDamage = 3;
    return snail;
}
Snail snail = createSnail();

// Weapon availability/damage values struct
class Weapon {
public:
    bool isAvailable;
    int damage;

    Weapon(bool WeaponIsAvailable, int weaponDamage) : isAvailable(WeaponIsAvailable),
                                                       damage(weaponDamage) {};
};
// Edit weapon damage values below:
Weapon Scalpel(false, 2);
Weapon Shovel(false, 1); // Shovels big attack is 5x this value
Weapon Dagger(false, 1);
Weapon GoopDagger(false, 4);
Weapon Needle(false, 0); // instakills if random chance is met
Weapon Sword(false, 1);
bool swordBeenUsed = false;

// *Weapon Functions* --------------------------------------------------------------------------------------------------
void ScalpelUsed() {
    if (Scalpel.isAvailable) {
        cout << "You attack with the scalpel, but it is not very effective and deals " << Scalpel.damage << "." << endl;
        snail.Health -= Scalpel.damage;
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
                    << "You seize the moment and attack, but the shovel practically glides oof of the snails shell and only deals "
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
}
void DaggerUsed() {

    if (Dagger.isAvailable) {
        cout << " You attack with the uncoated dagger and deal " << Dagger.damage << " as the snail seemingly laughs at you." << endl;
    }
    if (GoopDagger.isAvailable) {
        cout << "You attack the snail with the dagger coated in his own poisonous slime and deal " << GoopDagger.damage << " damage to him!" << endl;
        cout << "However now that the dagger has reabsorbed his living slime it will no longer be poisonous to him" << endl;
        snail.Health -= GoopDagger.damage;
        GoopDagger.isAvailable = false;
        Dagger.isAvailable = true;
    }
}
void NeedleUsed() {
    if (Needle.isAvailable) {
        if (rand() % 31 == 1) {// Random chance to instakill
            snail.Health = 0;
        } else {
            cout
                    << "Whatever disease you thought must've been on the needle had zero impact on the snail this attempt and resulted in " << Needle.damage << " damage being done this time." << endl;
        }
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
                cout << "You're slash also does " << Sword.damage << " damage.";
                snail.Heads -= 1;
            }
        }
        else {
            cout << "You cut off the snail's head! Too bad it has genetic modifications that let it grow back two more!\n The snail has gained health with its new head as well." << endl;
            cout << "You're slash also does " << Sword.damage << " damage.";
            snail.Heads += 1;
            swordBeenUsed = true;
        }
        snail.Health -= Sword.damage;
    }
}
// *Weapon Functions* --------------------------------------------------------------------------------------------------

void RunAway() {
    cout << "You run away and seal the room, so you never have to see that abomination again." << endl;
    isRoomSealed = true;
}

void bossSelction() {
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


// ___________________________________________________________________________________________________________________

void BossFight() {
    srand(time(0));


    // Select Choice code - Let the user select any weapon or to run away.


    //Actual Fight Code
        //Repeat till snail dies, the player dies, or the player runs
        while ((snail.Health != 0) && (playerHealth != 0) && !isRoomSealed) {
            bossSelction();// Let User select choice
            if ((snail.Health != 0) && (playerHealth != 0) && !isRoomSealed) { // Snail attacks
                snailDamage = ((rand() % 2) * (snail.BaseDamage * snail.Heads) * .5); //Damage scales with # of heads and has a random chance to crit
                playerHealth -= snailDamage;
                cout << "The Snail charges at you with " << snail.Heads << " heads and deals "
                << snailDamage << " damage to you before moving back." << endl;
            }
        }
}