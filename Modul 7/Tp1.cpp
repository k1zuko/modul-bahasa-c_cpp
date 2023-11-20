#include <iostream>
using namespace std;

char kata[100];

int balik()
{
	for (int a = strlen(kata); a >= 0 ; a--)
	{
		cout << kata[a];
	}
	cout << endl;
}

void blackhole()
{
	cout << "×××---------------×××---------------×××"<<endl;
}

int main ()
{
	cout << "Masukkan kata : ";
	cin.getline(kata, sizeof(kata));
	blackhole();
	cout << "Pembalikan kata : ";
	balik();
	blackhole();
}