#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    double hutang, bunga, angsuran, total_angsuran;
    int lama_angsuran;

    cout << "==============================" << endl;
    cout << "    Kalkulator Angsuran" << endl;
    cout << "==============================" << endl;

    string nama;
    cout << "Masukkan nama: ";
    getline(cin, nama);

    cout << "Masukkan besar hutang: ";
    cin >> hutang;

    cout << "Masukkan lama angsuran (bulan): ";
    cin >> lama_angsuran;

    cout << "Masukkan besar bunga per tahun (%): ";
    cin >> bunga;

    total_angsuran = hutang + (hutang * bunga / 100);
    angsuran = total_angsuran / lama_angsuran;

    cout << "\n======================================" << endl;
    cout << "          Rincian Angsuran" << endl;
    cout << "======================================" << endl;

    cout << "Nama: " << nama << endl;
    cout << "Pinjam uang sebesar: Rp " << fixed << setprecision(2) << hutang << endl;
    cout << "Bunga: " << fixed << setprecision(2) << bunga << "%" << endl;
    cout << "Total pinjaman: Rp " << fixed << setprecision(2) << total_angsuran << endl;
    cout << "Angsuran per bulan: Rp " << fixed << setprecision(2) << angsuran << endl;
    cout << "Lama pinjaman: " << lama_angsuran << " bulan" << endl;

    cout << "\nDaftar pembayaran:" << endl;
    cout << "======================================" << endl;

    for (int i = 1; i <= lama_angsuran; i++) {
        cout << "Bulan ke-" << i << ": Rp " << fixed << setprecision(2) << angsuran << " sisa hutang: Rp " << fixed << setprecision(2) << total_angsuran - (angsuran * i) << endl;
    }

    cout << "\nLunas" << endl;
    cout << "======================================" << endl;

    return 0;
}
