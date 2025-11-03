#include <iostream>
using namespace std;

int main() {
    int jumlahMotor, jumlahMobil;
    int jamMasuk, jamKeluar;
    int durasi, lamaHari;

    cout << "Masukkan jumlah motor : ";
    cin >> jumlahMotor;
    cout << "Masukkan jumlah mobil : ";
    cin >> jumlahMobil;

    cout << "Masukkan jam masuk (format 24 jam): ";
    cin >> jamMasuk;
    cout << "Masukkan jam keluar (format 24 jam): ";
    cin >> jamKeluar;
    cout << "Masukkan selisih hari (misalnya 0 jika masih di hari yang sama): ";
    cin >> lamaHari;

    // Validasi input jam
    if (jamMasuk < 0 || jamMasuk > 23 || jamKeluar < 0 || jamKeluar > 23) {
        cout << "\nJam tidak valid! Masukkan angka antara 0 sampai 23." << endl;
        return 0;
    }

    // Hitung durasi total dalam jam
    if (jamKeluar >= jamMasuk) {
        durasi = (lamaHari * 24) + (jamKeluar - jamMasuk);
    } else {
        durasi = (lamaHari * 24) + ((24 - jamMasuk) + jamKeluar);
    }

    // Hitung biaya parkir
    int biayaMotor = jumlahMotor * durasi * 2000;
    int biayaMobil = jumlahMobil * durasi * 5000;
    int total = biayaMotor + biayaMobil;

    cout << "\nTotal biaya parkir: Rp " << total;
    cout << " (" << durasi << " jam = " << durasi / 24 << " hari " << durasi % 24 << " jam)" << endl;

    return 0;
}
