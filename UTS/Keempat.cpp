#include<iostream>
using namespace std;

int main() {
    system("cls");
    string input;
    
    cout << "Masukkan judul buku (dipisahkan dengan spasi): ";
    getline(cin, input);

    int count = 1;
    int i = 0;

    while (i < input.length() ) {
        i++;
        if (input[i] == ' ') {  
            count++;
        } 
    } 

    cout << "Jumlah judul buku: " << count << endl;
}