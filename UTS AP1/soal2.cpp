#include <iostream>
#include <cmath>
using namespace std;
int main () {
    string kode;
    long base = 0, c = 0, hasil = 0;
    cout << "Input kode biner : ";
    cin >> kode;
    for (int i = kode.length() - 1; i >= 0; i--) {
        c = pow(2, base++);
        if (kode[i] == '0') {
            continue;
        } else if (kode[i] == '1') {
            hasil += c;
        } else {
            cout << "Pesan Rusak!";
            return 0;
        }
    }
    cout << "Angka desimal dari biner " << kode << " adalah = " << hasil;
    return 0;
}
