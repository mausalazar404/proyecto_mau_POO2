#include <iostream>
#include <limits>
#include "Trainer.h"
#include "FireDragon.h"
#include "WaterDragon.h"
#include "Meat.h"
#include "MagicHerb.h"
#include "Battle.h"

using namespace std;

void showDragonStats(Dragon* d) {
    cout << *d << endl; 
}

int main() {
    // Crear dragones
    FireDragon* draco = new FireDragon("Draco", "Fire", 5, 80, 40, 20, 50, 70);
    WaterDragon* aqua = new WaterDragon("Aqua", "Water", 4, 90, 30, 25, 45, 65);

    // Crear comidas
    Meat* steak = new Meat("Steak", 30, 10, 50);
    MagicHerb* herb = new MagicHerb("Healing Herb", 15, 20, "heal");

    // Crear entrenador
    Trainer t("Mau", {});
    cout << t.adoptDragon(draco) << endl;
    cout << t.adoptDragon(aqua) << endl;

    int option;
    bool playing = true;

    while (playing) {
        cout << "\n------ Dragon Trainer Menu ------\n";
        cout << "1. Feed Draco (simple)\n";
        cout << "2. Feed Aqua (multiple times)\n";
        cout << "3. Train Draco\n";
        cout << "4. Train Aqua\n";
        cout << "5. Show Draco Stats\n";
        cout << "6. Show Aqua Stats\n";
        cout << "7. Compare dragons\n";
        cout << "8. Access dragon by index\n";
        cout << "9. Start Battle\n";
        cout << "0. Exit\n";
        cout << "Choose an option: ";
        cin >> option;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input.\n";
            continue;
        }

        switch (option) {
            case 1:
                cout << t.feedDragon(draco, steak,1) << endl;
                break;
            case 2:
                cout << t.feedDragon(aqua, herb, 3) << endl; 
                break;
            case 3:
                cout << t.trainDragon(draco) << endl;
                break;
            case 4:
                cout << t.trainDragon(aqua) << endl;
                break;
            case 5:
                cout << "\n--- Draco stats ---" << endl;
                showDragonStats(draco);
                break;
            case 6:
                cout << "\n--- Aqua stats ---" << endl;
                showDragonStats(aqua);
                break;
            case 7:
                cout << "\n--- Comparing dragons ---" << endl;
                if(*draco > *aqua) {
                    cout << draco->getName() << " is more powerfull than " << aqua->getName() << "!" << endl;
                } else {
                    cout << aqua->getName() << " is more powerfull than " << draco->getName() << "!" << endl;
                }
                break;
            case 8:
                cout << "\n--- Access by index ---" << endl;
                cout << "Dragon in index 0: " << t[0]->getName() << endl;
                cout << "Dragon in index 1 : " << t[1]->getName() << endl;
                break;
            case 9: {
                Battle b(draco, aqua);
                Dragon* winner = b.startBattle();
                cout << "The winner is: " << winner->getName() << "!\n";
                break;
            }
            case 0:
                playing = false;
                break;
            default:
                cout << "Invalid option.\n";
        }
    }

    delete draco;
    delete aqua;
    delete steak;
    delete herb;

    return 0;
}