#include<iostream>
#include<conio.h>

#include<fstream>

#include<iomanip>

void main()

{

ofstream file_keluaran;

file_keluaran.open(“rama”);

file_keluaran

<<”aku adalah lelaki”<<endl

<<”yang tak pernah lelah mencari wanita”<<endl

<<endl;

file_keluaran.close();

getch();

}