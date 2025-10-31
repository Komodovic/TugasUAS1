#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    int golongan, jamKerja;
    long long upahPerJam, upahPokok, uangLembur, totalGaji;

    // Input
    cout << "Masukkan nama anda: ";
    getline(cin, nama);

    cout << "Masukkan golongan anda: ";
    cin >> golongan;

    cout << "Masukkan jam kerja anda per minggu: ";
    cin >> jamKerja;

    // Validasi golongan (hanya 1, 2, 3, 4, atau 5)
    if (golongan == 1) {
        upahPerJam = 25000;
    }
    else if (golongan == 2) {
        upahPerJam = 35000;
    }
    else if (golongan == 3) {
        upahPerJam = 50000;
    }
    else if (golongan == 4) {
        upahPerJam = 100000;
    }
    else if (golongan == 5) {
        upahPerJam = 125000;
    }
    else {
        cout << "Golongan tidak valid!" << endl;
        return 1;
    }

    // Hitung upah pokok
    upahPokok = (long long)jamKerja * upahPerJam;

    // Hitung lembur (hanya jika > 48 jam)
    uangLembur = 0;
    if (jamKerja > 48) {
        uangLembur = (long long)(jamKerja - 48) * 10000;
    }

    // Total gaji
    totalGaji = upahPokok + uangLembur;

    // Output sesuai format gambar
    cout << endl;
    cout << "Total Gaji " << nama << " per minggu :" << totalGaji << endl;

    return 0;
}