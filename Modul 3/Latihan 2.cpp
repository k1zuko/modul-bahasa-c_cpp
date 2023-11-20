#include <iostream.h>
#include <conio.h>

int main ()
{
	int bil;
	cout << "Masukkan 2 digit angka terakhir NISN Anda: ";
	cin >> bil;
	
	if (bil %2 == 0)
	{
		cout << "\n Digit NISN Anda adalah bilangan GENAP"<<endl;
	}
	else
	{
		cout << "\n Digit NISN Anda adalah bilangan GANJIL "<<endl;
	}
	
	getch ();
}