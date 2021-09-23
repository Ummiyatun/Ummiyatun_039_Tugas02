#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
int main ()

{
int a,b,c,k;	
cout<<"\t***menghitung sisi miring dan keliling segitiga siku-siku***\n";
cout<<"\t------------------------------------------------------------\n";

cout<<"\n//menghitung sisi miring segitiga siku-siku\n";
cout<<"alas\t\t= "; cin>>a;
cout<<"tinggi\t\t= "; cin>>b;
c=sqrt(a*a+b*b);
cout<<"panjang sisi miring\t= "<<c;
cout<<"\n\t*****\n";
cout<<"//menghitung keliling segitiga siku-siku\n";
cout<<"alas\t\t= "; cin>>a;
cout<<"tinggi\t\t= "; cin>>b;
cout<<"sisi miring\t= "; cin>>c;
k=a+b+c;
cout<<"keliling segitiga\t= "<<k;

getch();		
}
