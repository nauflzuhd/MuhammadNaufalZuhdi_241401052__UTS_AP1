#include <iostream>
using namespace std;
int main () {
    string nama,nim;
    int alpro,pds,os;
    float rata;
    cout << "Nama Mahasiswa: ";
    getline(cin, nama);
    cout << "NIM: ";
    cin >> nim;
    cout << "Nilai Mata Kuliah:" << endl;
    cout << " Algoritma dan Pemrograman: ";
    cin >> alpro;
    cout << "Probabilitas dan Statistika: ";
    cin >> pds;
    cout << "Sistem Operasi: ";
    cin >> os;

    (alpro >= 60) ? cout << "\nAlgoritma dan Pemrograman: Lulus.\n" : cout << "Algoritma dan Pemrograman: Tidak Lulus. Silakan Ulangi di Tahun Depan!\n";
    (pds >= 60) ? cout << "Probabilitas dan Statistika: Lulus.\n" : cout << "Probabilitas dan Statistika: Tidak Lulus. Silakan Ulangi di Tahun Depan!\n";
    (os >= 60) ? cout << "Sistem Operasi: Lulus.\n" : cout << "Sistem Operasi: Tidak Lulus. Silakan Ulangi di Tahun Depan!\n";

    rata = float (alpro + pds + os) / 3;
    cout << "Nilai Rata-rata Semester ini: " << rata;
    return 0;
}