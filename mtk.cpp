#include <iostream>
using namespace std;

int main() {
    // deklarasi variabel
    float absensi, tugas, uts, uas, nilai_akhir;
    char nilai_huruf;

    cout << "Program menghitung nilai akhir semester" << endl;
    cout << "=======================================" << endl;

    // proses input
    cout << "Masukkan Nilai Absensi: ";
    cin >> absensi;
    cout << "Masukkan Nilai Tugas : ";
    cin >> tugas;
    cout << "Masukkan Nilai UTS : ";
    cin >> uts;
    cout << "Masukkan Nilai UAS : ";
    cin >> uas;

    // rumus (tanda komentar '//' dihilangkan dan rumus diperbaiki)
    nilai_akhir = (absensi * 0.1) + (tugas * 0.2) + (uts * 0.3) + (uas * 0.4);

    if (nilai_akhir >= 85) {
        nilai_huruf = 'A';
    } else if (nilai_akhir >= 75) {
        nilai_huruf = 'B';
    } else if (nilai_akhir >= 64) {
        nilai_huruf = 'C';
    } else if (nilai_akhir >= 50) {
        nilai_huruf = 'D';
    } else {
        nilai_huruf = 'E';
    }

    // proses output
    cout << "Nilai Akhir : " << nilai_akhir << endl;
    cout << "Nilai Huruf : " << nilai_huruf << endl;

    return 0;
}
