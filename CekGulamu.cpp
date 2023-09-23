#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    int usia;
    char jenisKelamin;
    double gulaDarah;
    bool memilikiRiwayatPenyakitDiabetes;

    cout << "Selamat datang di Cek Gulamu" << endl;
    cout << "Silakan isi data berikut:" << endl;

    cout << "Nama: ";
    getline(cin, nama);

    cout << "Usia: ";
    cin >> usia;

    cout << "Jenis Kelamin (L/P): ";
    cin >> jenisKelamin;

    cout << "Kadar Gula Darah (sewaktu): ";
    cin >> gulaDarah;

    cout << "Apakah Anda memiliki riwayat penyakit diabetes? (1/0): ";
    cin >> memilikiRiwayatPenyakitDiabetes;

    // Analisis data
    cout << "\nHasil Analisis Data:" << endl;
    cout << "Nama: " << nama << endl;
    cout << "Usia: " << usia << " tahun" << endl;
    cout << "Jenis Kelamin: " << (jenisKelamin == 'L' ? "Laki-Laki" : "Wanita") << endl;
    cout << "Kadar Gula Darah: " << gulaDarah << " mg/dl" << endl;

    if (memilikiRiwayatPenyakitDiabetes) {
        cout << "Anda memiliki riwayat penyakit diabetes." << endl;
    } else {
        cout << "Anda tidak memiliki riwayat penyakit diabetes." << endl;
    }

    // Analisis risiko penyakit diabetes
    if (jenisKelamin == 'L' && usia >= 45) {
        cout << "Anda memiliki risiko penyakit diabetes lebih tinggi karena usia dan jenis kelamin." << endl;
    } else if (jenisKelamin == 'P' && usia >= 60) {
        cout << "Anda memiliki risiko penyakit diabetes lebih tinggi karena usia dan jenis kelamin." << endl;
    }

    if (gulaDarah >= 140) {
        cout << "Anda memiliki kadar gula darah tinggi, yang dapat meningkatkan risiko penyakit diabetes." << endl;
    }

    return 0;
}

