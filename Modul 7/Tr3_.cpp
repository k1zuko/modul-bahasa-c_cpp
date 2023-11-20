#include <iostream>
using namespace std;

int main()
{
	void *k;
	char kata[100];
	int jml, hasil;
	
	cout << "Masukkan kata : ";
	cin.getline(kata, sizeof(kata));
	
	jml = strlen(kata) - 1;
	hasil = 1;
	k = &hasil;
	for (int a = 1; a <= jml; a++)
	{
		if (kata[a - 1] == ' ' || kata[a - 1] == '.' || kata[a - 1] == ',' )
		{
			hasil++;
		}
	}
	cout << "Jumlah kata adalah : " << *(int *)k << endl;
}