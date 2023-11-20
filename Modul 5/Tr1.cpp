#include <iostream>
#include <string>
using namespace std;

int main()
{
	int vokal = 0, konsonan = 0, ngng = 0;
	char kata[100];
	cout << "Masukkan kalimat : ";
	cin.getline(kata, 100);

	int x = strlen(kata);
	cout << "\njumlah kata yang ditampilkan : " << x << endl;

	for (int i = 0; i <= x; i++)
	{
		if (kata[i] == 'a' || kata[i] == 'i' || kata[i] == 'u' || kata[i] == 'e' || kata[i] == 'o' || kata[i] == 'A' || kata[i] == 'I' || kata[i] == 'U' || kata[i] == 'E' || kata[i] == 'O')
		{
			vokal++;
		}
		else
		{
			konsonan++;
			
			if (kata[i] == 'n'||kata[i+1] == 'g'||kata[i] == 'N'||kata[i+1] == 'G')
			{
				ngng++;
			}
		}
	}
	cout << "jumlah vokal : " << vokal << endl;
	cout << "jumlah konsonan : " << konsonan << endl;
	cout << "jumlah kalimat ng : " << ngng << endl;
}