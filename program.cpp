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

int main(){
    int baris, kolom;
    int matriks1[10][10], matriks2[10][10], hasil[10][10];

    cout << "Masukkan jumlah barisan: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;

    cout << "Masukkan elemen untuk Matriks 1:" << endl;
    masuk(matriks1, baris, kolom);
    cout << "Masukkan elemen untuk Matriks 2:" << endl;
    masuk(matriks2, baris, kolom);

    int pilih;
    do{
        cout << "\nMenu Operasi Matriks:" << endl;
        cout << "1. Penjumlahan Matriks" << endl;
        cout << "2. Pengurangan Matriks" << endl;
        cout << "3. Perkalian Matriks" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih Opsi: ";
        cin >> pilih;

        switch (pilih) {
            case 1: {
                tambah(matriks1, matriks2, hasil, baris, kolom);
                cout << "Hasil penjumlahan matriks:" << endl;
                keluar(hasil, baris, kolom);
                break;
            }
            case 2: {
                kurang(matriks1, matriks2, hasil, baris, kolom);
                cout << "Hasil pengurangan matriks:" << endl;
                keluar(hasil, baris, kolom);
                break;
            } 
            case 3: {
                kali(matriks1, matriks2, hasil, baris, kolom);
                cout << "Hasil perkalian matriks:" << endl;
                keluar(hasil, baris, kolom);
                break;
            }
            case 4: {
                cout <, "Keluar dari program..." << endl;
                break;
            default:
                cout << "Opsi tidak valid. Silakan coba lagi." << endl;
            }
        } while (pilih ≠ 4);

        return 0;
    }





