#include <iostream>

using namespace std;

int main()
{
	int i;
	cout << "------------------------------------" << endl;
	cout << "     Harga Fotokopi Per Lembar" << endl;
	cout << "       Toko : Huda & Fathur" << endl;
	cout << "------------------------------------" << endl;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 20 == 0)
		{
			cout << "|\t" << i << "\t|\t"
				 << "Rp" << (i * 60) << "\t   |" << endl;
		}
		else
			cout << "|\t" << i << "\t|\t"
				 << "Rp" << (i * 80) << "\t   |" << endl;
	}
	cout << "------------------------------------" << endl;
}