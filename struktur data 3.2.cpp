#include <iostream>
#include <conio.h>
#include <stdio.h>




using namespace std ;

main()
{
struct pegawai{
char nama[50];
int jam,lembur,gp,gaji;}a;

    cout<<endl;
    cout<<"-------------------------------------------------\n";
    cout<<"Program Struct Menghitung Gaji\n";
    cout<<"-------------------------------------------------\n";
    cout<<endl;
    cout<<"-------------------------------------------------\n";
    cout<<endl<<endl;
    cout<<"Masukkan Nama : ";
    gets(a.nama);
    cout<<"Masukkan Jam Kerja : ";cin>>a.jam;

int();

cout<<"\nNama : "<<a.nama;
cout<<endl;
if(a.jam>7)
                {
   a.gp=7*500;
   a.lembur=(a.jam-7)*(15*500);
                a.gaji=a.gp+a.lembur;
   cout<<"Gaji pokok : "<<a.gp;
   }
else
                {
   a.lembur=0;
   a.gaji= a.jam*500;
   }
cout<<"\nJam Kerja : "<<a.jam;
cout<<"\nLembur : "<<a.lembur;
cout<<"\nGaji : "<<a.gaji;

getch();}
