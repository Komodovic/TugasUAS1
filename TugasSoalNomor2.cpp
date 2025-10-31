#include <iostream>
using namespace std;

int main() {
    int jumlahMotor, jumlahMobil;
    int jamMasuk, jamKeluar;
    int durasi;

    cout << "Masukkan jumlah motor : ";
    cin >> jumlahMotor;
    cout << "Masukkan jumlah mobil : ";
    cin >> jumlahMobil;

    cout << "Input jam masuk (format 24 jam): ";
    cin >> jamMasuk;
    cout << "Input jam keluar (format 24 jam): ";
    cin >> jamKeluar;

    // Hitung durasi parkir
    if (jamKeluar >= jamMasuk) {
        durasi = jamKeluar - jamMasuk;
    } else {
        durasi = (24 - jamMasuk) + jamKeluar; // untuk kasus parkir lewat tengah malam
    }

    // Biaya parkir
    int biayaMotor = jumlahMotor * durasi * 2000;
    int biayaMobil = jumlahMobil * durasi * 5000;
    int total = biayaMotor + biayaMobil;

    cout << "\nTotal biaya parkir: Rp " << total << " (" << durasi << " jam)" << endl;

    return 0;
}

