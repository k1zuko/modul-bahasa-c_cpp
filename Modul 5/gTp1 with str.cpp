#include <string>
#include <iostream>

using namespace std;
int main()
{
	string kata;
	
	cout << "Masukkan Kata = ";
	getline(cin, kata);
	
	string katatitip=kata;
	int balik = kata.length();
	balik = substr(balik, kata);
	
	//if (katatitip==kata)
	//{
		//cout<<"Kata yang Anda masukkan memiliki balikan yang sama!"<<endl;
		//return 0;
	//}
	cout << "Hasil Perubahan = " << kata << balik;
}