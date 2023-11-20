#include <iostream>
using namespace std;

int main ()
{
	float b1 = 35000, b2 = 10000, b3 = 17500, b4 = 13500, total, diskon, totaldiskon;
	
	cout << "================================"<<endl;
	cout << "\tBERKAH SEJAHTERA"<<endl;
	cout << "================================"<<endl;
	cout << "Kasir		: M. Kh. Huda"<<endl;
	cout << "Pembeli		: Fathur"<<endl;
	cout << "Tgl pembelian	: 16 - 09 - 2022"<<endl;
	cout << "================================"<<endl;
	cout << "Potato Chips L	* 3 = Rp."<<b1<<endl;
	cout << "Mie Ayam Geprek	* 4 = Rp."<<b2<<endl;
	cout << "Sprite		* 3 = Rp."<<b3<<endl;
	cout << "Es Krim		* 2 = Rp."<<b4<<endl;
	cout << "================================"<<endl;
	
	total = b1 + b2 + b3 + b4;
	cout << "Total belanja		= Rp."<<total<<endl;
	
	if (total>100000)
	{
		diskon = total * 0.3;
		totaldiskon = total - diskon;
		cout << "Di diskon 30% 		= Rp." << diskon << endl;
		cout << "Total setelah di diskon = Rp."<<totaldiskon<<endl;
	}
	else if (total>=75000)
	{
		diskon = total * 0.2;
		totaldiskon = total - diskon;
		cout << "Di diskon 20% 		= Rp." << diskon << endl;
		cout << "Total setelah di diskon = Rp."<<totaldiskon<<endl;
	}
	else
	{
		diskon = total * 0.1;
		totaldiskon = total - diskon;
		cout << "Di diskon 10% 		= Rp." << diskon << endl;
		cout << "Total setelah di diskon = Rp."<<totaldiskon<<endl;
	}
	cout << "================================"<<endl;
	cout << "       SELAMAT BERBELANJA"<<endl;
	
	return 0;
}