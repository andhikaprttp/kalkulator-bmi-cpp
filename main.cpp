#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    double berat, tinggi, bmi;

    // Input berat dan tinggi dari pengguna
    cout << "Masukkan berat (kg): ";
    cin >> berat;

    cout << "Masukkan tinggi (m): ";
    cin >> tinggi;

    // Menghitung BMI
    bmi = berat / (tinggi * tinggi);

    // Menentukan kategori BMI dan menampilkan hasil
    cout << "BMI Anda adalah: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Berat badan kurang";
    } else if (bmi >= 18.5 && bmi < 25) {
        cout << "Berat badan normal";
    } else if (bmi >= 25 && bmi < 30) {
        cout << "Berat badan berlebih (kelebihan berat badan)";
    } else {
        cout << "Obesitas";
    }

    // program untuk pembelajaran pemrograman dasar 
    // andhika

    return 0;
}
