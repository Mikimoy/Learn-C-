#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char project;
// Home
    home:
    cout << "=======================" << endl;
    cout << "== Tugas Project C++ ==" << endl;
    cout << "=======================" << endl;
    cout << "   1.Input Data" << endl;
    cout << "   2.Tampilkan Data" << endl;
    cout << "   3.Searching Data" << endl;
    cout << "   4.Sorting Data" << endl;
    cout << "   6.Transaksi" << endl;
    cout << "   5.Keluar" << endl;
    cout << "========================" << endl;
    cout << "   Pilihan : ";

    cin >> project;
    cout << endl;

    if(project == '1'){
        goto input;
    }

    if(project == '2'){
        goto show;
    }

    if(project == '3'){
        goto search;
    }

    if(project == '6'){
    goto keluar;
    }
    else {
        cout << "Masukan Sesuai Dengan Pilihan Yang Ada Diatas!!!"<< endl;
        cout << endl << endl;
        goto home;
    }
    
    keluar:

    return 0;

// Input Data
    string data;
    ofstream mydata;

    input:
    cout << "=======================" << endl;
    cout << "====== Input Data =====" << endl;
    cout << "=======================" << endl;
    cout << "Nama File : ";
    cin >> data;
    mydata.open(data);
    mydata.close();
    cout << endl;

    backk:
    cout << "Back To Home ?" << endl;
    cout << endl;
    cout << "1 : Kembali" << endl;
    cout << "2 : Keluar" << endl;
    cout << "Masukan Pilihan : ";
    cin >> data;
    cout << endl;


    return 0;

// Tampilkan Data
    char show_data;
    show:
    cout << "=======================" << endl;
    cout << "====== Show Data ======" << endl;
    cout << "=======================" << endl;
    cout << "Nama File : ";

    cin >> show_data;
    cout << endl;

    if(show_data == '0') {
        goto home;
    }

    return 0;

// Searching Data
    char search_data;
    search:
    cout << "=======================" << endl;
    cout << "=== Searching Data ====" << endl;
    cout << "=======================" << endl;
    cout << "Nama File : " << endl;
    cin >> show_data;
    cout << endl;
}
