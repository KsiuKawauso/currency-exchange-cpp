#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    const double GBP_Bend = 0.8729;
    const double GBP_Pirk = 0.8600;
    const double GBP_Pard = 0.9220;

    const double USD_Bend = 1.1793;
    const double USD_Pirk = 1.1460;
    const double USD_Pard = 1.2340;

    const double INR_Bend = 104.6918;
    const double INR_Pirk = 101.3862;
    const double INR_Pard = 107.8546;

    int veiksmas;

    do {
        cout << "\n--- VALIUTOS KEITYKLA ---\n";
        cout << "1. Valiutos kurso palyginimas su euru\n";
        cout << "2. Valiutos pirkimas (EUR -> valiuta)\n";
        cout << "3. Valiutos pardavimas (valiuta -> EUR)\n";
        cout << "4. Iseiti\n";
        cout << "Pasirinkite veiksma: ";
        cin >> veiksmas;

        if (veiksmas < 1 || veiksmas > 4) {
            cout << "Klaida! Pasirinkite skaiciu nuo 1 iki 4.\n";
            continue;
        }

        if (veiksmas == 4) {
            cout << "Programa baigta.\n";
            break;
        }
