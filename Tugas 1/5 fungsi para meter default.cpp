#include <iostream>
using namespace std;

// Jika panjang tidak diisi, otomatis dianggap 10
void tampilkanGaris(int panjang = 10) {
    for (int i = 0; i < panjang; i++) {
        cout << "-";
    }
    cout << endl;
}

int main() {
    tampilkanGaris();    // Menggunakan nilai default (10)
    tampilkanGaris(20);  // Menggunakan nilai 20
    return 0;
}