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
