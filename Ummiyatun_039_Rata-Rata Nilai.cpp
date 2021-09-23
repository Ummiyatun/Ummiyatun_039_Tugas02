#include <iostream>
#include <conio.h>

using namespace std;
main ()
{
int x,y,z,r;

cout<<"\t***Menghitung Nilai Rata - Rata Mata Kuliah Pemrograman Terstruktur***\n";
cout<<"\t======================================================================\n";
cout<<"\nMasukkan nilai praktikum\t= "; cin>>x;
cout<<"Masukkan nilai teori\t\t= "; cin>>y;
cout<<"Masukkan nilai final\t\t= "; cin>>z;
r= ((x*40/100)+(y*40/100)+(z*20/100));
cout<<"=================================================\n";
cout<<"Nilai rata-rata\t= "<<r;

getch();
}
