#include<iostream>
using namespace std;

int main() {
    string nama, nim;
    int nilai1, nilai2, nilai3;
    system("cls");

    cout << "Masukkan Nama Mahasiswa : ";
    getline(cin, nama);
    cout << "Masukkan NIM : ";
    cin >> nim;
    cout << "Nilai matakuliah : " << endl;
    cout << "Algoritma dan Pemrograman : ";
    cin >> nilai1;
    cout << "Probabilitas dan Statistika : ";
    cin >> nilai2;
    cout << "sistem Operasi : ";
    cin >> nilai3;
    
    system("cls");
    cout << "Algoritma dan Pemrograman      : ";
    if (nilai1 >= 60) {
        cout << " Lulus " << endl;
    } else {
        cout << " Tidak Lulus, silahkan ulangi tahun depan " << endl;
    }
    
    cout << "Probabilitas dan Statistika    : ";
    if (nilai2 >= 60) {
        cout << " Lulus " << endl; 
    } else {
        cout << " Tidak Lulus, silahkan ulangi tahun depan " << endl;
    }
    
    cout << "sistem Operasi                 : ";
    if (nilai3 >= 60) {
        cout << " Lulus " << endl;
    } else {
        cout << " Tidak Lulus, silahkan ulangi tahun depan " << endl;
    }
}