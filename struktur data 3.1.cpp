#include<iostream>
#include<conio.h>
using namespace std ;


int main ()
{
    struct data
    {
        char 	nama[20];
        int 	nim;
        int 	tugas;
        int 	kuis;
        int 	mid;
        int 	uas;
        float 	nilai_akhir;
    };struct data mahasiswa[20];

cout<<"#################################################\n";
cout<<"Program Structur Menghitung Nilai Akhir Mahasiswa\n";
cout<<"#################################################\n";
int a,b;
cout<<"Masukan Data Mahasiswa : ";
cin>>b;
for(a=0;a<b;a++)
{
    cout<<"Masukan Nama Mahasiswa : ";
    cin>>mahasiswa[a].nama;
    cout<<"Masukan NIM Mahasiswa  : ";
    cin>>mahasiswa[a].nim;
    cout<<"Masukan Nilai Tugas    : ";
    cin>>mahasiswa[a].tugas;
    cout<<"Masukan Nilai Kuis     : ";
    cin>>mahasiswa[a].kuis;
    cout<<"Masukan Nilai MID      : ";
    cin>>mahasiswa[a].mid;
    cout<<"Masukan Nilai UAS      : ";
    cin>>mahasiswa[a].uas;
    cout<<endl;
}
cout<<endl;
cout<<"#######################################################################################################\n";
cout<<"Nama"<<"\t"<<"NIM"<<"\t"<<"Tugas"<<"\t"<<"Kuis"<<"\t"<<"MID"<<"\t"<<"UAS"<<"\t"<<"Nilai Akhir"<<"\t"<<endl;
cout<<"#######################################################################################################\n";
for(a=0;a<b;a++)
{
	mahasiswa[a].nilai_akhir=(mahasiswa[a].tugas*20/100)+(mahasiswa[a].kuis*20/100)+(mahasiswa[a].mid*30/100)+(mahasiswa[a].uas*40/100);
	cout<<mahasiswa[a].nama<<"\t"<<mahasiswa[a].nim<<"\t"<<mahasiswa[a].tugas<<"\t"<<mahasiswa[a].kuis<<"\t"<<mahasiswa[a].mid<<"\t"<<mahasiswa[a].uas<<"\t"<<mahasiswa[a].nilai_akhir;
	mahasiswa[a].nilai_akhir=(mahasiswa[a].tugas*20/100)+(mahasiswa[a].kuis*20/100)+(mahasiswa[a].mid*30/100)+(mahasiswa[a].uas*40/100);
if (mahasiswa[a].nilai_akhir>=85)
    cout<<" (A)";
else if (mahasiswa[a].nilai_akhir>=70)
    cout<<" (B)";
else if (mahasiswa[a].nilai_akhir>=55)
    cout<<" (C)";
else if (mahasiswa[a].nilai_akhir>=40)
    cout<<" (D)";
else if (mahasiswa[a].nilai_akhir<=40)
    cout<<" (E)";
cout<<endl;
}
cout<<endl;
}
