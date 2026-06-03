#include <iostream>
using namespace std;

int main() {

    int pilihan, jml_barang, harga, total = 0, bayar, diskon;
    string item;

    cout << "                                           " << endl;
    cout << "               SMK AL FALAH KEBUMEN        " << endl;
    cout << "===========================================" << endl;
    cout << "                 DAFTAR MENU               " << endl << endl;

    cout << "1. Permen Mentos      : Rp. 5000" << endl;
    cout << "2. Kenzler            : Rp. 8000" << endl;
    cout << "3. Doritos            : Rp. 9000" << endl;
    cout << "4. Ultra Milk         : Rp. 7000" << endl;
    cout << "5. Sukro              : Rp. 2000" << endl;
    cout << "6. Minyak Wangi AXE   : Rp. 37000" << endl;
    cout << "7. Es Cream Magnum    : Rp. 20000" << endl;
    cout << "8. Susu Hilo Teen     : Rp. 75000" << endl;
    cout << "9. Kinder Joy         : Rp. 15000" << endl;
    cout << "10. Selesai" << endl;

    cout << "===========================================" << endl << endl;

    do {

        cout << "Masukkan no pilihan : ";
        cin >> pilihan;

        switch (pilihan) {

            case 1:
                item = "Permen Mentos";
                harga = 5000;
                cout << "Jumlah barang : ";
                cin >> jml_barang;
                total += harga * jml_barang;
                cout << jml_barang << " " << item
                     << " = Rp. " << harga * jml_barang << endl << endl;
                break;

            case 2:
                item = "Kenzler";
                harga = 8000;
                cout << "Jumlah barang : ";
                cin >> jml_barang;
                total += harga * jml_barang;
                cout << jml_barang << " " << item
                     << " = Rp. " << harga * jml_barang << endl << endl;
                break;

            case 3:
                item = "Doritos";
                harga = 9000;
                cout << "Jumlah barang : ";
                cin >> jml_barang;
                total += harga * jml_barang;
                cout << jml_barang << " " << item
                     << " = Rp. " << harga * jml_barang << endl << endl;
                break;

            case 4:
                item = "Ultra Milk";
                harga = 7000;
                cout << "Jumlah barang : ";
                cin >> jml_barang;
                total += harga * jml_barang;
                cout << jml_barang << " " << item
                     << " = Rp. " << harga * jml_barang << endl << endl;
                break;

            case 5:
                item = "Sukro";
                harga = 2000;
                cout << "Jumlah barang : ";
                cin >> jml_barang;
                total += harga * jml_barang;
                cout << jml_barang << " " << item
                     << " = Rp. " << harga * jml_barang << endl << endl;
                break;

            case 6:
                item = "Minyak Wangi AXE";
                harga = 37000;
                cout << "Jumlah barang : ";
                cin >> jml_barang;
                total += harga * jml_barang;
                cout << jml_barang << " " << item
                     << " = Rp. " << harga * jml_barang << endl << endl;
                break;

            case 7:
                item = "Es Cream Magnum";
                harga = 20000;
                cout << "Jumlah barang : ";
                cin >> jml_barang;
                total += harga * jml_barang;
                cout << jml_barang << " " << item
                     << " = Rp. " << harga * jml_barang << endl << endl;
                break;

            case 8:
                item = "Susu Hilo Teen";
                harga = 75000;
                cout << "Jumlah barang : ";
                cin >> jml_barang;
                total += harga * jml_barang;
                cout << jml_barang << " " << item
                     << " = Rp. " << harga * jml_barang << endl << endl;
                break;

            case 9:
                item = "Kinder Joy";
                harga = 15000;
                cout << "Jumlah barang : ";
                cin >> jml_barang;
                total += harga * jml_barang;
                cout << jml_barang << " " << item
                     << " = Rp. " << harga * jml_barang << endl << endl;
                break;

            case 10:

                cout << endl;
                cout << "Jumlah Bayar : Rp. " << total << endl;

                if (total >= 100000) {
                    diskon = 0.06 * total;
                }
                else if (total >= 50000) {
                    diskon = 0.04 * total;
                }
                else if (total >= 25000) {
                    diskon = 0.02 * total;
                }
                else {
                    diskon = 0;
                }

                cout << "Diskon      : Rp. " << diskon << endl;
                cout << "Total Bayar : Rp. " << total - diskon << endl;

                cout << "Bayar : ";
                cin >> bayar;

                cout << "Kembali : Rp. "
                     << bayar - (total - diskon) << endl << endl;

                break;

            default:
                cout << "Pilihan anda salah!" << endl;
                break;
        }

    } while (pilihan != 10);

    cout << "Terima Kasih Sudah Berbelanja di Toko Kami" << endl;

    return 0;
}