#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string nama_file;
    ofstream mydata;

    cout << "Nama File: ";
    cin >> nama_file;
    mydata.open(nama_file);
    mydata.close();


    return 0;
}