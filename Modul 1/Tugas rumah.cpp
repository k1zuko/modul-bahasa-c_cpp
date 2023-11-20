#include <iostream>

using namespace std;

int main()
{
	float C, F, R, K;
		cout<<"===================================\n   KONVERSI SUHU DARI CELCIUS KE \n   Fahrenheit : Reamur : Kelvin\n===================================\n";
	
	cout<<"Masukan Suhu Dalam Celcius = ";
	cin>>C;
	F=(C * 9 / 5) + 32;
	R=C*0.8;
	K=C+273.15;
	cout<<"=====================================================\n\t\tHASIL KONVERSI\n=====================================================\n";
	cout<<"Fahrenheit \t= "<<F<<" Derajat\n";
	cout<<"Reamur \t\t= "<<R<<" Derajat\n";
	cout<<"Kelvin \t\t= "<<K<<" Derajat\n";
	cout<<"=====================================================\n"<<endl;
	cout<<"Created By Kita Bersama";
	
}