#include<iostream>
using namespace std;

int main() {
    system("cls");
    int kode1, kode2, kode3;
    
    cout << "Kode -1 : ";
    cin >> kode1;
    cout << "Kode -2 : ";
    cin >> kode2;
    cout << "Kode -3 : ";
    cin >> kode3;

    
    if (kode1 >= 50 && kode2 >= 50 && kode3 >= 50) {
        goto aman;
    } else {
        cout << "Bahaya" << endl;
        cout << "ALARM ACTIVATED !!!!!!" << endl;
        goto end;
    } 
    
    aman:
    if (kode1+kode2+kode3 >= 200) {
        cout << "Aman" << endl;
    } else {
        cout << "Bahaya" << endl;
        cout << "ALARM ACTIVATED !!!!!!" << endl;
        goto end;
    }   
        
    end:
    return 0;
}
