#include <iostream>
using namespace std;

float r; float t; float l; float s; float v;

int line()
{
	cout << "---------------------------------------------------"<<endl;
}
	
float luas()
{
	return l = 2 * 3.14 * r *(r + t);
}

float slmt()
{
	return s = 2 * 3.14 * r * t;
}

float volum()
{
	return v = 3.14 * r * r * t;
}

int main ()
{
	line();
	cout << "\t\tMODUL FUNCTION\n";
	line();
	cout << "\t\tPROGRAM COMBINASI\n";
	cout << "\t\tPROGRAM TABUNG\n";
	line();
	cout << "Masukkan nilai jari-jari tabung : ";
	cin >> r;
	cout << "Masukkan nilai tinggi tabung : ";
	cin >> t;
	cout << endl;
	line();
	cout << "Nilai luas tabung\t: " << luas() << endl;
	cout << "Nilai selimut tabung\t: " << slmt() << endl;
	cout << "Nilai volume tabung\t: " << volum() << endl;
	line();
}