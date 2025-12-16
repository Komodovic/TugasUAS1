#include <iostream>
using namespace std;

// Function untuk menghitung dan menampilkan rata-rata
void hitungAverage(int jumlah, int banyakData) {
    double rata;
    rata = (double)jumlah / banyakData;
    cout << "Jumlah Angka = " << jumlah << "\n";
    cout << "Banyak Data = " << banyakData << "\n";
    cout << "Rata-ratanya = " << rata << "\n";
}

int main() {
    int input = 0;
    int jumlah = 0;
    int banyakData = 0;
    double rata;

    cout << "Masukkan data\n";

    for (int i = 0; i < 3; i++) {
        cin >> input;
        jumlah += input;
        banyakData++;
    }

    // Panggil fungsi hitungAverage
    hitungAverage(jumlah, banyakData);

    return 0;
}

