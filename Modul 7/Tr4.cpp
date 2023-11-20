#include <iostream>
using namespace std;

int main ()
{
	string bulan[12]={"Januari","Februari","Maret", "April","Mei","Juni","Juli","Agustus","September","Oktober","November","Desember"};
	
	string *moon;
	moon = bulan;
	for (int i = 0; i < 12; i++)
	{
		cout << "Bulan ke - "<< i + 1 << " adalah "<< *(moon + i)<< endl;
	}
}