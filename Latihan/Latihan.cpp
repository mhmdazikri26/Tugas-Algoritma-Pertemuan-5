#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string namaSiswa;
    double nilai1, nilai2, nilai3;
    double rataRata;
    string hadiah;

    // Layar Masukkan
    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;

    cout << "Nama Siswa : ";
    getline(cin, namaSiswa);

    cout << "Nilai Pertandingan I : ";
    cin >> nilai1;

    cout << "Nilai Pertandingan II : ";
    cin >> nilai2;

    cout << "Nilai Pertandingan III : ";
    cin >> nilai3;

    // Proses menghitung nilai rata-rata
    rataRata = (nilai1 + nilai2 + nilai3) / 3;

    // Proses menentukan hadiah
    if (rataRata >= 85) {
        hadiah = "Seperangkat Mobil";
    } 
    else if (rataRata >= 70) {
        hadiah = "Seperangkat Uang sebesar Rp. 500,000";
    } 
    else {
        hadiah = "Hadiah Hiburan";
    }

    // Layar Keluaran
    cout << endl;
    cout << "Siswa yang bernama " << namaSiswa << endl;
    cout << "Memperoleh nilai rata-rata " << fixed << setprecision(2) << rataRata;
    cout << " dari hasil perlombaan yang diikutinya." << endl;
    cout << "Hadiah yang didapat adalah " << hadiah << endl;

    return 0;
}