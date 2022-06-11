#include <iostream>

using namespace std;

int main()
{
    char yt;

    awal:
    cout << "Mencoba Perulanggan Ya atau Tidak By Pamsatria" << endl;

    cout<<endl<<endl;

    cout<<"Entry Data Lagi (y/t) ?  ";
    cin>>yt;
    cout<<endl;
    if(yt=='Y'||yt=='y'){
        goto awal;
    }
    if(yt=='T'||yt=='t'){
        goto akhir;
    }
    akhir:


    return 0;
}