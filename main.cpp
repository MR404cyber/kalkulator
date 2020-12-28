#include <iostream>
#include "conio.h"
using namespace std;


void banner()
{
    string banner = "\e[31m╦╔═┌─┐┬  ┬┌─┬ ┬┬  ┌─┐┌┬┐┌─┐┬─┐\e[37m\n╠╩╗├─┤│  ├┴┐│ ││  ├─┤ │ │ │├┬┘\e[31m\n╩ ╩┴ ┴┴─┘┴ ┴└─┘┴─┘┴ ┴ ┴ └─┘┴└─";
    string sub = "\e[30;1m[\e[31;1m-\e[30;1m] \e[37;1mAuthor \e[30;1m: \e[37;1mraihan\n\e[30;1m[\e[31;1m-\e[30;1m] \e[37;1mName \e[30;1m: \e[37;1mKalkulator C++ Sederhana\n";
    cout <<banner<<"\n"<<sub;
}
void menu()
{
    string hit = "\e[30;1m";
    string mer = "\e[31;1m";
    string put = "\e[37;1m";
    int pilih;
    cout <<"        \x1b[105m\x1b[37;1mMENU\x1b[0m\n";
    cout <<hit<<"["<<mer<<"01"<<hit<<"] "<<put<<"Penjumlahan\n"<<hit<<"["<<mer<<"02"<<hit<<"] "<<put<<"Pengurangan\n"<<hit<<"["<<mer<<"03"<<hit<<"] "<<put<<"Perkalian\n"<<hit<<"["<<mer<<"04"<<hit<<"] "<<put<<"Pembagian\n";
    cout <<hit<<"----> "<<put<<"Masukkan pilihan "<<hit<<"> "<<mer;
    cin>>pilih;
    if (pilih == 1 || pilih == 01){
      float angka1;
      float angka2;
      cout <<hit<<"-----> "<<put<<"Masukkan angka ke 1 : "<<hit<<"> "<<mer;
      cin>>angka1;
      cout <<hit<<"-----> "<<put<<"Masukkan angka ke 2 : "<<hit<<"> "<<mer;
      cin>>angka2;
      float hasil = angka1 + angka2;
     cout <<hit<<"-------> "<<put<<"Hasil dari "<<angka1<<" + "<<angka2<<" adalah "<<mer<<hasil<<endl;
    } else if (pilih == 2 || pilih == 02){
      float angka1;
      float angka2;
      cout <<hit<<"-----> "<<put<<"Masukkan angka ke 1 : "<<hit<<"> "<<mer;
      cin>>angka1;
      cout <<hit<<"-----> "<<put<<"Masukkan angka ke 2 : "<<hit<<"> "<<mer;
      cin>>angka2;
      float hasil = angka1 - angka2;
      cout <<hit<<"-------> "<<put<<"Hasil dari "<<angka1<<" - "<<angka2<<" adalah "<<mer<<hasil<<endl;
    } else if (pilih == 3 || pilih == 03){
      float angka1;
      float angka2;
      cout <<hit<<"-----> "<<put<<"Masukkan angka ke 1 : "<<hit<<"> "<<mer;
      cin>>angka1;
      cout <<hit<<"-----> "<<put<<"Masukkan angka ke 2 : "<<hit<<"> "<<mer;
      cin>>angka2;
      float hasil = angka1 * angka2;
      cout <<hit<<"-------> "<<put<<"Hasil dari "<<angka1<<" * "<<angka2<<" adalah "<<mer<<hasil<<endl;
    } else if (pilih == 4 || pilih == 04){
      float angka1;
      float angka2;
      cout <<hit<<"-----> "<<put<<"Masukkan angka ke 1 : "<<hit<<"> "<<mer;
      cin>>angka1;
      cout <<hit<<"-----> "<<put<<"Masukkan angka ke 2 : "<<hit<<"> "<<mer;
      cin>>angka2;
      float hasil = angka1 / angka2;
      cout <<hit<<"-------> "<<put<<"Hasil dari "<<angka1<<" / "<<angka2<<" adalah "<<mer<<hasil<<endl;
    } else {
      cout <<hit<<"------> ["<<mer<<"-"<<hit<<"] "<<put<<"Pilih yang bener, tolol :v \n";
      menu();
    }
}
int main()
{
    clrscr();
    banner();
    menu();
}
