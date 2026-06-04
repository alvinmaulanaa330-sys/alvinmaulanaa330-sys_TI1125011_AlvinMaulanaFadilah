#include <iostream>
using namespace std;

int main() {
    //Deklarasi variabel integer untuk menyimpan pilihan//

    int pilihan, jml_barang, harga, total = 0, bayar, diskon;
    string item;

    cout << "                                           " << endl;
    cout << "               Toko Alvin Jaya Baya        " << endl;
    cout << "===========================================" << endl;
    cout << "                 DAFTAR MENU               " << endl << endl; // dari 3 baris ke atas menampilkan identitas program kasir//

    cout << "1. Permen Mentos      : Rp. 5000" << endl; //1 sampai 9 menampilakan pilihan daftar menu beserta harganya //
    cout << "2. Kenzler            : Rp. 8000" << endl;// dan jika pembeli memilih nomor 10 maka akan keluar total harga, diskon, total bayar, uang yang dibayarkan dan kembalian//5
    cout << "3. Doritos            : Rp. 9000" << endl;
    cout << "4. Ultra Milk         : Rp. 7000" << endl;
    cout << "5. Sukro              : Rp. 2000" << endl;
    cout << "6. Minyak Wangi AXE   : Rp. 37000" << endl;
    cout << "7. Es Cream Magnum    : Rp. 20000" << endl;
    cout << "8. Susu Hilo Teen     : Rp. 75000" << endl;
    cout << "9. Kinder Joy         : Rp. 15000" << endl;
    cout << "10. Selesai" << endl;

    cout << "===========================================" << endl << endl;//menampilkan garis pemisah antara daftar menu dengan proses transaksi//

    do {
        //Menyimpan nomor menu yang dipilih pembeli//
        cout << "Masukkan no pilihan : ";
        cin >> pilihan;

        switch (pilihan) {            //dari percabangan ini selagi user belum memilih nomor 10 outputnya akan menampilkan pilihan menu yang dipilih, harga, jumlah barang, dan total harga sementara//
                                     //dan jika user memilih nomor 10 maka akan keluar total harga, diskon, total bayar, uang yang dibayarkan dan kembalian//

            case 1:                 //program mulai berjalan//
                item = "Permen Mentos";
                harga = 5000;        //Artinya jika user memilih nomor 1 maka item yang dipilih adalah permen mentos dengan harga 5000//   
                cout << "Jumlah barang : "; // outputnya akan menampilkan jumlah barang yang dibeli//
                cin >> jml_barang;
                total += harga * jml_barang;// jumlah barang dikalikan dengan harga lalu hasilnya akan dijumlahkan dengan total harga sementara//
                cout << jml_barang << " " << item
                     << " = Rp. " << harga * jml_barang << endl << endl;
                break;                      // fungsi dari break yaitu menghentikan case yang sedang berjalan dan keluar dari switch case lalu kembali ke awal perulangan do while untuk menampilkan menu pilihan lagi//
                                            //begitu juga sampai dengan nomor 9 //
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

                if (total >= 100000) { //disini terdapat percabangan untuk menentukan besarnya diskon yang akan diberikan kepada pembeli//
                    diskon = 0.06 * total;// dan jika total belanja lebih dari 100000 atau dari kelipatan 100000 maka pembeli akan mendapatkan diskon sebesar 6% dari total belanja//
                }
                else if (total >= 50000) { // setiap total belanja lebih dari 50000 atau  keliptan  dari 50000 maka pembeli akan mendapatkan diskon sebesar 4% dari total belanja//
                    diskon = 0.04 * total;
                }
                else if (total >= 25000) {//sama seperti diskon 100000 dan 50000 //
                    diskon = 0.02 * total;
                }
                else {              //percabangan else ini artinya jka pembeli tidak mendapakatkan diskon yang diatas maka diskon yang didapatkan adlah 0 atau tidak ada diskon//
                    diskon = 0;     
                }

                cout << "Diskon      : Rp. " << diskon << endl; //outputnya akan menampilkan besarnya diskon yang didapatkan oleh pembeli//
                cout << "Total Bayar : Rp. " << total - diskon << endl;

                cout << "Bayar : ";
                cin >> bayar;  ///input uang yang dibayarkan oleh pembeli//
                cout << "Kembali : Rp. " //outputnya akan menampilkan kembalian yang didapatkan oleh pembeli//
                     << bayar - (total - diskon) << endl << endl;

                break;

            default:
                cout << "Pilihan anda salah!" << endl;//jika user memasukkan nomor yang tidak ada di menu pilihan maka akan menampilkan output pilihan anda salah//
                break;
        }

    } while (pilihan != 10); //perulangan do while ini artinya selama user belum memilih nomor 10 maka program akan terus berjalan dan menampilkan menu pilihan, namun jika user sudah memilih nomor 10 maka program akan berhenti dan keluar dari perulangan do while//

    cout << "Terima Kasih Sudah Berbelanja di Toko Kami" << endl;

    return 0;   //fungsi return 0; artinya program telah selesai dijalankan dengan normal//
}       //akhir dari program kasir sederhana//