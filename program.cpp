#include <iostream>
using namespace std;

void masuk(int matriks[10][10], int baris, int kolom) {
    for (int i = 0; i < kolom; i++) {
        for (int j = 0; j < kolom; j++) {
            cin >> matriks[i][j];
        }
    }
}

void keluar(int matriks[10][10], int baris, int kolom) {
    for (int i = 0; i < kolom; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
}

void tambah(int matriks1[10][10], int matriks2[10][10], int hasil[10][10], int baris, int kolom) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
        }
    }
}

void kurang(int matriks1[10][10], int matriks2[10][10], int hasil[10][10], int baris, int kolom) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            hasil[i][j] = matriks1[i][j] - matriks2[i][j];
        }
    }
}

void kali(int matriks1[10][10], int matriks2[10][10], int hasil[10][10], int baris1, int kolom1, int kolom2){
    for (int i = 0; i < baris1; i++){
        for (int j = 0; j < kolom2; j++){
            hasil[i][j] = 0;
            for (int k = 0; k < kolom1; k++){
                hasil[i][j] += matriks1[i][k] * matriks2[k][j];
            }
        }
    }
}




