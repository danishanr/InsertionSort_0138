#include <iostream>
using namespace std;

int arr[20]; // Membuat array dengan panjang data 20
int n; // Membuat variabel inputan n

void input(){ // Procedure input
    while (true)
    {
        cout << "Masukkan Jumlah Data pada Array : "; // Membuat input jumlah element array
        cin >> n; // Memanggil variabel inputan n

        if (n <= 20){ // Membuat kondisi n tidak lebih dari 20
            break;
        }
        else{
            cout << "\nArray yang anda masukkan maksimal 20\n" // Menampilkan pesan jika data lebih dari 20

        }
    }
    cout << endl; // Membuat jarak per baris program
    cout << "======================" << endl; // Membuat tampilan susunan data lement array
    cout << "Masukkan Element Array" << endl;
    cout << "======================" << endl;

    for (int i = 0; i < n; i++) // Menggunakan perulangan for untuk menyimpan data pada array
    {
        cout << "Data ke-" << (i + 1) << ": "; // Memasukkan atau menginputkan nilai data n
        cin >> arr[i]; // Menyimpan nilai data n kedalam array arr
    }
    
    
}