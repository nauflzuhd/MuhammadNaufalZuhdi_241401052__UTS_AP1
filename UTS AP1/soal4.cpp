#include <iostream>
using namespace std;
int main () {
    string mantra;
    int jumlah = 0, i = 0;
    cout << "Mantra: ";
    cin >> mantra;
    while (i <= mantra.length()) {
        if (mantra[i] == 'a' || mantra[i] == 'A' || mantra[i] == 'i' || mantra[i] == 'I' || mantra[i] == 'u' || mantra[i] == 'U' || mantra[i] == 'e' || mantra[i] == 'E' || mantra[i] == 'o' || mantra[i] == 'O') {
            jumlah += 1;
        }
        i++;
    }
    (jumlah > 0) ? cout << "Kekuatan mantra: " << jumlah << " vokal" : cout << "Mantra tidak valid! Tidak mengandung vokal.";
    return 0;
}
