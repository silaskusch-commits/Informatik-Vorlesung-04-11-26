#include <iostream>
using namespace std;

int main() {
    double kontostand = 0, betrag;
    int wahl;

    do {
        cout << "1) Einzahlen  2) Abheben  3) Kontostand  0) Ende: ";
        cin >> wahl;

        if (wahl == 1) {
            cout << "Betrag: ";
            cin >> betrag;
            kontostand += betrag;
        } else if (wahl == 2) {
            cout << "Betrag: ";
            cin >> betrag;
            if (betrag <= kontostand) kontostand -= betrag;
            else cout << "Nicht genug Guthaben\n";
        } else if (wahl == 3) {
            cout << "Kontostand: " << kontostand << " EUR\n";
        }
    } while (wahl != 0);
}
