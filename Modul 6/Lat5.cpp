/*aplikasi rekursif pada fibonacci*/
#include <iostream.h>

int fibo(int a)
{
	if(a<=1 && a<=2)
	{
		return true;
	}
	else 
	{
		return fibo(a-1) + fibo(a-2);
	}
}

void main()
{
	int x;
	cout << "Mencari Nilai Fibonacci\n";
	cout << "Masukkan nilai n = ";
	cin >> x;
	cout << "Fibonacci " << x << " = " << fibo(x) << endl;
}