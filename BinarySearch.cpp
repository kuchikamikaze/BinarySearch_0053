#include <iostream>
using namespace std;

int elemen[10];
int nPanjang;
int x;

void input(){
    while(true){
        cout << "Masukan banyak elemen pada array (maksimal 10): ";
        cin >> nPanjang;

        if (nPanjang <= 10){
            break;
        }
        else {
            cout << "\n[!] Jumalah elemen tidak boleh lebih dari 10, silahkan coba lagi.\n";
        }
    }

    cout << "\n=============================\n";
    cout << "\n    Masukan Elemen Array    \n";
    cout << "\n=============================\n";

    for(int i=0; i < nPanjang; i++){
        cout << "Data ke" << (i+1) << " = ";
        cin >> elemen[i];
    }
}

void bubleSortAray(){

    int pass = 1;

    do{
        for (int j=0; j <= nPanjang-1-pass; j++){
            if (elemen[j] > elemen[j + 1]){
                int temp = elemen[j];
                elemen[j] = elemen[j+1];
                elemen[j+1] = temp;
            }
        }
        pass++;
    }while (pass <= nPanjang);
}

void display(){
    
    cout << "\n==========================================\n";
    cout << "\n Elemen Array Setelah di Urutkan (Asc) \n";
    cout << "\n==========================================\n";

    for (int j = 0; j < nPanjang; j++){
        cout << elemen[j];
        if (j < nPanjang - 1){
            cout << "->";
        }
    }
    cout << endl;
}

void binarySearch(){
    char ulang;
    do{
    cout << "\n==========================================\n";
    cout << "\n         Pencarian Binary Search         \n";
    cout << "\n==========================================\n";

    cout << "Masukan elemen yang ingin dicari: ";
    cin >> x;

    int low = 0;
    int high = nPanjang-1;


    }
}