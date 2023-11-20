#include <iostream.h>

int main ()
{
	int a,b,c;//deklarasi variabel
	
	cout<<"Masukkan Nilai A = ";//keluarkan string masukkan nilai
	cin>>a;//masukkan data integer dari keyboard
	
	/*Proses*/
	b=(a+12<8);
	c=!(b);
	
	cout<<"Program Ekspresi NOT"<<endl;
	cout<<"Nilai a = "<<a<<endl;
	cout<<"Nilai b = (a+12<8) = "<<b<<endl;
	cout<<"Nilai c = !(b) = "<<c<<endl;
}