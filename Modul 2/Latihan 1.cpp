#include <iostream.h>

int main ()
{
	float a, b, c = 0, d = 0, e = 0, f = 0; //Deklarasi
	
	cout << "Masukkan Nilai A : ";
	cin>>a;
	cout << "Masukkan Nilai B : ";
	cin >> b;
	
	c = a*b;
	d = a/b;
	e = a+b;
	f = a-b;
	
	cout<<"Hasil dari C = A * B = "<<c<<endl;
	cout<<"Hasil dari C = A / B = "<<d<<endl;
	cout<<"Hasil dari C = A + B = "<<e<<endl;
	cout<<"Hasil dari C = A - B = "<<f<<endl;
	
	return 0;
}