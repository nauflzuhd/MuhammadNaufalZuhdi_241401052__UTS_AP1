#include <iostream>
using namespace std;
int main () {
    int n, c = 1;
    cout << "Kode : ";
    cin >> n;
    if (n >= 0) {
        for (int k = 1; k <= n; k++) {
            c = c * 2;
            if (c == n) {
                cout << "ya";
                return 0;
            }
        }
        cout << "bukan";
    } else {
        cout << "Masukkan bilangan bulat positif";
    }
    return 0;
}