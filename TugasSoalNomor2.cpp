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

    // Validasi input jam
    if (jamMasuk < 0 || jamMasuk > 23 || jamKeluar < 0 || jamKeluar > 23) {
        cout << "\nJam tidak valid! Masukkan angka antara 0 sampai 23." << endl;
        return 0;
    }

    // Hitung durasi parkir
    if (jamKeluar >= jamMasuk) {
        durasi = jamKeluar - jamMasuk;
    } else {
        durasi = (24 - jamMasuk) + jamKeluar; // parkir melewati tengah malam
    }

    // Hitung biaya parkir
    int biayaMotor = jumlahMotor * durasi * 2000;
    int biayaMobil = jumlahMobil * durasi * 5000;
    int total = biayaMotor + biayaMobil;

    cout << "\nTotal biaya parkir: Rp " << total << " (" << durasi << " jam)" << endl;

    return 0;
}
