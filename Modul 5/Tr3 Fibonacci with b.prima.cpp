#include <iostream>

using namespace std;

int main()
{
	int n, bilangan1 = 1, bilangan2 = 1, jawab, jum = 0;
	int i, j = 2, fibonacci[100];
	cout << "Bilangan Fibonacci pada Deret ke : ";
	cin >> n;
	
	fibonacci[0] = bilangan1;
	fibonacci[1] = bilangan2;
	
	for (i = 1; i <= n - 2; i++)
	{
		jawab = bilangan1 + bilangan2;
		bilangan1 = bilangan2;
		bilangan2 = jawab;
		fibonacci[j++] = jawab;
	}
	
	cout << "Fibonacci ke " << n << " adalah : " << fibonacci[n - 1] << "\n";
	
	for (i = 1; i <= fibonacci[n - 1]; i++)
	{
		if (fibonacci[n - 1] % i == 0)
		{
			jum++;
		}
	}
	if (jum == 2)
	{
		cout << fibonacci[n - 1] << " adalah bilangan prima" << endl;
	}
	else
		cout << fibonacci[n - 1] << " adalah bukan bilangan prima" << endl;
}