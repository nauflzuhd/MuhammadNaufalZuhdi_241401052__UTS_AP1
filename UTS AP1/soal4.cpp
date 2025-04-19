#include <iostream>
using namespace std;
int main () {
    string mantra;
    int jumlah = 0;
    cout << "Mantra: ";
    cin >> mantra;
    for (int i = 0; i <= mantra.length(); i++) {
        if (mantra[i] == 'a' || mantra[i] == 'A' || mantra[i] == 'i' || mantra[i] == 'I' || mantra[i] == 'u' || mantra[i] == 'U' || mantra[i] == 'e' || mantra[i] == 'E' || mantra[i] == 'o' || mantra[i] == 'O') {
            jumlah += 1;
        }
    }
    (jumlah > 0) ? cout << "Kekuatan mantra: " << jumlah << " vokal" : cout << "Mantra tidak valid! Tidak mengandung vokal.";
    return 0;
}