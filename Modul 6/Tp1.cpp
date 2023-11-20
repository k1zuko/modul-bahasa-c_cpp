#include <iostream>
using namespace std;

int line()
{
	cout << "---------------------------------------------------"<<endl;
}

int factorial(int n)
{
	if (n<=0)
	{
		return 1;
	}
	else 
	{
		return n * factorial(n-1);
	}
}

int hasil(int n, int r)
{
	return factorial(n)/(factorial(r)*factorial(n-r));
}

int main ()
{
	int n, r, combinasi;
	
	line();
	cout << "\t\tMODUL FUNCTION\n";
	line();
	cout << "\t\tPROGRAM COMBINASI\n";
	line();
	cout << "Masukkan nilai n : "; cin >> n;
	cout << "Masukkan nilai r : "; cin >> r;
	
	combinasi = hasil(n,r);
	
	cout << "Hasil Combinasi " <<n<<"C"<<r<<" adalah "<< combinasi << endl;
}