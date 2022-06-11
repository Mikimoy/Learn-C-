#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char home;
    awal:
    cout << "======================" << endl;
    cout << "==== Project C++ =====" << endl;
    cout << "======================";
    cout << endl;

    cout << "  1.Input Data" << endl;
    cout << "  2.Tampilkan Data" << endl;
    cout << "  3.Searching Data" << endl;
    cout << "  4.Sorting Data" << endl;
    cout << "  5.Transaksi" << endl;
    cout << "  6.Keluar" << endl;
    cout << "======================" << endl;
    cout << "Pilihan : ";
    cin >> home;
    cout << endl << endl;
    cout << endl << endl;

    if(home == '1'){
        goto input_file;
    }

    return 0;

    //Input File Choise 1
    char choise;
    input_file:
    string input_data;
    string nama;
    ofstream mydata;

    cout << "======================" << endl;
    cout << "===== Input File =====" << endl;
    cout << "======================" << endl;
    cout << "Nama File : ";
    cin >> input_data;
    cout << endl;

    mydata.open(input_data);
    cout << "======================" << endl;
    cout << "!!! Silahkan Diisi !!!" << endl;
    cout << " Nama : ";
    cin >> nama;
    mydata << nama;
    mydata.close();
    cout << endl << endl;
    cout << endl << endl;

    // Back Home Universal
    choisee:
    cout << "Apakah Anda Ingin Kembali Ke Awal?" << endl;
    cout << endl;
    cout << "Y = Awal" << endl;
    cout << "T = Keluar " << endl;
    cout << "Masukan Pilihan : ";
    cin >> choise;
    cout << endl << endl;
    cout << endl << endl;
    cout << endl << endl;

    if(choise == 'Y' | choise == 'y'){
        goto awal;
    }
    if(choise == 'T' | choise == 't'){
        goto keluar;
    }
    else{
        cout << "Harap Masukan Pilihan Yang Sesuai !!!" << endl;
        goto choisee;
    }

    return 0;

    keluar:

    return 0;

    //Tampilkan 
    
}
