#include<iostream>
using namespace std;

int main() {
    system("cls");
    int kode;
    
    cout << "Masukkan kode rahasia: ";
    cin >> kode;

    if (kode >= 100 && kode <= 999) {
        int ratusan = kode / 100;
        int puluhan = (kode / 10) % 10;
        int satuan = kode % 10;
        int jumlah = ratusan + puluhan + satuan;
        cout << "Jumlah ketiga digit: " << jumlah << endl;
    } else {
        cout << "Kode Salah!" << endl;
    }

    return 0;
}