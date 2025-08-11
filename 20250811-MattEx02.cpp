#include <iostream>
#include <string>
using namespace std;

int main() {
    string verbe;
    int T1, T2;

    cout << "Inserez un Verbe svp!" << endl;
    getline(cin, verbe);

    T1 = verbe.length() - 2;
    T2 = verbe.length() - 1;

    if (verbe[T1] == 'e' && verbe[T2] == 'r' && verbe != "aller") {
        cout << "Le verbe inseré appartient au premier groupe." << endl;
    }
    else if (verbe[T1] == 'i' && verbe[T2] == 'r') {
        cout << "Le verbe inseré appartient au deuxieme groupe." << endl;
    }
    else {
        cout << "Le verbe inseré appartient au troisieme groupe." << endl;
    }

    return 0;
}