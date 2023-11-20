#include <iostream>

using namespace std;
int main()
{
	int i;
	char *nama_hari[] = {"Senin", "Selasa", "Rabu", "Kamis", "Jum'at", "Sabtu", "Minggu"};
	
	cout << "Hari (1-7) : ";
	cin >> i;
	cout << "Hari ke-"<<i<<" adalah hari ";
	if (i >= 1; i <=7)
	{
		cout << nama_hari[i - 1] << endl;
	}
	else
	{
		cout << "Kode hari salah!!";
	}
}