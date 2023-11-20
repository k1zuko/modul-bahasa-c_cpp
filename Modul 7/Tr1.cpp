#include <iostream>
using namespace std;

int main()
{
	void *besar;
	char kata[100];
	char kapital, hasil;
	int jml;
	
	cout << "Masukkan kata : ";
	cin.getline(kata, sizeof(kata));
	
	besar = &kata[0];
	kapital = toupper(*(char *)besar);
	cout << "Hasil : " << kapital;
	
	jml = strlen(kata) - 1;
	for (int a = 1; a <= jml; a++)
	{
		besar = &kata[a];
		hasil = *(char *)besar;
		if (kata[a - 1] == ' ')
		{
			hasil = toupper(*(char *)besar);
		}
		cout << hasil;
	}
	cout << endl;
}