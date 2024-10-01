// NAMA : DWIYANDRA RAYSHA PUTRA SYAWAL
// NPM  : 2410631170069


#include <iostream>
using namespace std;

int hitungGajiPokok(int jamKerja) {
    int gajiPerJam = 7500;
    return jamKerja * gajiPerJam;
}

int hitungLembur(int jamKerja) {
    int gajiPerJam = 7500;
    if (jamKerja > 8) {
        return (jamKerja - 8) * (gajiPerJam * 3 / 2);
    }
    return 0;
}

int hitungUangMakan(int jamKerja) {
    if (jamKerja >= 9) {
        return 10000;
    }
    return 0;
}

int hitungTransport(int jamKerja) {
    if (jamKerja >= 10) {
        return 13000;
    }
    return 0;
}

int main() {
    char NIP[5], nama[10];
    int jamKerja;
    cout <<"SELAMAT DATANG DI SISTEM PERHITUNGAN GAJI KARYAWAN PT. WIXX."<<endl;

    cout << "\nMasukkan NIP: ";
    cin  >> NIP;
    cout << "Masukkan Nama: ";
    cin  >> nama;
    cout << "Masukkan jumlah jam kerja: ";
    cin  >> jamKerja;


    int gajiPokok     = hitungGajiPokok(jamKerja);
    int lembur        = hitungLembur(jamKerja);
    int uangMakan     = hitungUangMakan(jamKerja);
    int uangTransport = hitungTransport(jamKerja);


    cout << "\nNIP            : " << NIP << endl;
    cout << "Nama           : " << nama << endl;
    cout << "\nGaji Pokok     : Rp. " << gajiPokok << endl;
    cout << "Lembur         : Rp. " << lembur << endl;
    cout << "Uang Makan     : Rp. " << uangMakan << endl;
    cout << "Uang Transport : Rp. " << uangTransport << endl;

    return 0;
}
