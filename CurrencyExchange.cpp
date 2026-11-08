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

        int pasirinkimas;
        string valiuta;
        double KursBend = 0;
        double KursPirk = 0;
        double KursPard = 0;

        cout << "\nPasirinkite valiuta (1-3):\n";
        cout << "1. GBP\n";
        cout << "2. USD\n";
        cout << "3. INR\n";
        cout << "Jusu pasirinkimas: ";
        cin >> pasirinkimas;

        switch (pasirinkimas) {
            case 1:
                valiuta = "GBP";
                KursBend = GBP_Bend;
                KursPirk = GBP_Pirk;
                KursPard = GBP_Pard;
                break;

            case 2:
                valiuta = "USD";
                KursBend = USD_Bend;
                KursPirk = USD_Pirk;
                KursPard = USD_Pard;
                break;

            case 3:
                valiuta = "INR";
                KursBend = INR_Bend;
                KursPirk = INR_Pirk;
                KursPard = INR_Pard;
                break;

            default:
                cout << "Klaida! Pasirinkite 1, 2 arba 3.\n";
                continue;

        }

        cout << fixed << setprecision(2);

        if (veiksmas == 1) {
            cout << "Kursas: 1 EUR = " << kursasBendras << " " << valiuta << endl;
        }

        if (veiksmas == 2) {
            double SumEUR;

            cout << "Iveskite suma eurais: ";
            cin >> SumEUR;

            if (SumEUR <= 0) {
                cout << "Klaida! Suma turi buti didesne uz 0.\n";
                continue;
            }

            double GautSum = SumEUR * KursPirk;

            cout << "Pradine suma: " << SumEUR << " EUR\n";
            cout << "Pasirinkta valiuta: " << valiuta << endl;
            cout << "Gauta suma: " << GautSum << " " << valiuta << endl;
        }

        else if (veiksmas == 3) {
            double SumVal;

            cout << "Iveskite parduodama suma (" << valiuta << "): ";
            cin >> SumVal;

            if (SumVal <= 0) {
                cout << "Klaida! Suma turi buti didesne uz 0.\n";
                continue;
            }

            double GautSum = SumVal / KursPard;

            cout << "Pradine suma: " << SumVal << " " << valiuta << endl;
            cout << "Gauta suma: " << GautSum << " EUR\n";
        }
    } while (true);

    return 0;
}