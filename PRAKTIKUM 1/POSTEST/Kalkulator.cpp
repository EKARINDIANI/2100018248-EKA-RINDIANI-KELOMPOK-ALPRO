#include <iostream>
#include <conio.h>
using namespace std;

int tambah(int a, int b){
	return a+b;
}
int kurang(int a, int b){
	return a-b;
}
int kali(int a, int b){
	return a*b;
}
int bagi(int a, int b){
	return a/b;
}
int mod(int a, int b){
	return a%b;
}

int main(){
	int bil1, bil2, m;
	system ("color 74");
	cout<<"=== PROGRAM KALKULATOR ==="<<endl;
	cout<<"1. Perkalian"<<endl;
	cout<<"2. Pembagian"<<endl;
	cout<<"3. Penjumlahan"<<endl;
	cout<<"4. Pengurangan"<<endl;
	cout<<"5. Modulus"<<endl;
	cout<<"=========================="<<endl;
	cout<<"Pilihan Menu : "; cin>>m;
	switch (m) {
		case 1:
			cout<<"Masukkan Bilangan Pertama : "; cin>>bil1;
			cout<<"Masukkan Bilangan Kedua   : "; cin>>bil2;
			cout<<"\n---------------------"<<endl;
			cout<<"Hasil dari "<<bil1<<" + "<<bil2<<" = "<<tambah(bil1,bil2);
			cout<<"\n---------------------"<<endl;
			break;
		case 2:
			cout<<"Masukkan Bilangan Pertama : "; cin>>bil1;
			cout<<"Masukkan Bilangan Kedua   : "; cin>>bil2;
			cout<<"\n---------------------"<<endl;
			cout<<"Hasil dari "<<bil1<<" - "<<bil2<<" = "<<kurang(bil1,bil2);
			cout<<"\n---------------------"<<endl;
			break;
		case 3:
			cout<<"Masukkan Bilangan Pertama : "; cin>>bil1;
			cout<<"Masukkan Bilangan Kedua   : "; cin>>bil2;
			cout<<"\n---------------------"<<endl;
			cout<<"Hasil dari "<<bil1<<" * "<<bil2<<" = "<<kali(bil1,bil2);
			cout<<"\n---------------------"<<endl;
			break;
		case 4:
			cout<<"Masukkan Bilangan Pertama : "; cin>>bil1;
			cout<<"Masukkan Bilangan Kedua   : "; cin>>bil2;
			cout<<"\n---------------------"<<endl;
			cout<<"Hasil dari "<<bil1<<" / "<<bil2<<" = "<<bagi(bil1,bil2);
			cout<<"\n---------------------"<<endl;
			break;
		case 5:
			cout<<"Masukkan Bilangan Pertama : "; cin>>bil1;
			cout<<"Masukkan Bilangan Kedua   : "; cin>>bil2;
			cout<<"\n---------------------"<<endl;
			cout<<"Hasil dari "<<bil1<<" % "<<bil2<<" = "<<mod(bil1,bil2);
			cout<<"\n---------------------"<<endl;
			break;
		case 6:
			cout<<"Pilihan tidak ada dalam daftar!!!"<<endl;
			break;			
	}
	getch();
}
