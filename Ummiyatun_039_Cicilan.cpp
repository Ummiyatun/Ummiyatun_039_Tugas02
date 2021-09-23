#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
int hrgmtr,hrgpk,lk,bg,ccl,ttlhrgccl,keuntungan_dealer;

cout<<"=========================================================================\n";
cout<<"\t     MENGHITUNG CICILAN, TOTAL HARGA CICILAN";
cout<<"\n\tDAN KEUNTUNGAN DEALER DARI PEMBELIAN SEPEDA MOTOR";
cout<<"\n=========================================================================\n";
cout<<"masukkan harga motor\t\t: "; cin>>hrgmtr;
cout<<"masukkan lama kredit(bln)\t: "; cin>>lk;
cout<<"=========================================================================\n";

hrgpk=hrgmtr/lk;
bg=hrgpk*0.1;
ccl=hrgpk+bg;
ttlhrgccl=ccl*lk;
keuntungan_dealer=ttlhrgccl - hrgmtr;

cout<<"\nharga pokok\t\t: "<<hrgpk;
cout<<"\nbunga\t\t\t: "<<bg;
cout<<"\ncicilan\t\t\t: "<<ccl;
cout<<"\ntotal harga motor\t: "<<ttlhrgccl;
cout<<"\nkeuntungan dealer\t: "<<keuntungan_dealer;

getch();
}
