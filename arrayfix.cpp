#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int nilai;
    int angka;
    vector<int> arrayAngka;
    cout << "Masukan jumlah nilai yang ingin di input : ";
    cin >> nilai;

    for(int i = 0; i < nilai; i++){
        cout << "Masukan angka ke-" << i+1 << " : ";
        cin >> angka;
        arrayAngka.push_back(angka);
    }
//mencari nilai tertinggi menggunakan library algorithm
int nilaiTertinggi = *max_element(arrayAngka.begin(), arrayAngka.end());
cout << "Nilai Tertinggi : " << nilaiTertinggi << endl;

//mencari angka untuk diperiksa ada/tidaknya menggunakan lib algorithm
int cari;
bool ketemu;
cout << "Masukan angka yang ingin diperiksa : ";
cin >> cari;
ketemu = binary_search(arrayAngka.begin(), arrayAngka.end(), cari);

    for(int i = 0; i < nilai; i++){
        if(arrayAngka[i] == cari){
            cout << "Angka " << cari << " ditemukan di indeks : " << i;
        }
    }

    if(!ketemu){
        cout << "Angka tidak ditemukan!";
    }
return 0;
}