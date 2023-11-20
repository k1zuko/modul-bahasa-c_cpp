#include <iostream>
using namespace std;

int main ()
{
	float pb = 12000 , pc = 15000, pt = 7500, total, ks1, ks2, ks3, tp1, tp2, tp3;
	
	cout << "================================"<<endl;
	cout << "     PT. MAKMUR SUKSES JAYA"<<endl;
	cout << "================================"<<endl;
	cout << "Kasir		: M. Kh. Huda"<<endl;
	cout << "Salesman	: Fathur"<<endl;
	cout << "Tgl		: 17 - 09 - 2022"<<endl;
	cout << "================================"<<endl;
	cout << "Harga Baju	: Rp.10000"<<endl;
	cout << "Harga Celana	: Rp.13000"<<endl;
	cout << "Harga Topi	: Rp.7500"<<endl;
	cout << "================================"<<endl;
	cout << "   Salesman Berhasil Menjual \n  5 Baju, 3 Celana, dan 2 Topi \n   Kepada Para Pelanggannya"<<endl;
	cout << "================================"<<endl;
	
	pb = 10000 * 5;
	pc = 13000 * 3;
	pt = 7500 * 2;
	cout << "Harga Baju	* 5 = Rp."<<pb<<endl;
	cout << "Harga Celana	* 3 = Rp."<<pc<<endl;
	cout << "Harga Topi	* 2 = Rp."<<pt<<endl;
	cout << "================================"<<endl;
	total = pb + pc + pt;
	cout << "Total Hasil dari\nBarang yang Dijual  : Rp."<<total<<endl;
	cout << "================================"<<endl;
	
	if (total>100000)
	{
		ks1 = total * 0.3;
		tp1 = ks1 + 50000;
		cout << "Upah Salesman       : Rp.50000"<<endl;
		cout << "Komisi Salesman 30% : Rp."<<ks1<<endl;
		cout << "Total Pendapatan\nSalesman            : Rp."<<tp1<<endl;
	}
	else if (total>60000)
	{
		ks2 = total * 0.2;
		tp2 = ks2 + 30000;
		cout << "Upah Salesman       : Rp.30000"<<endl;
		cout << "Komisi Salesman 20% : Rp."<<ks2<<endl;
		cout << "Total Pendapatan\nSalesman            : Rp."<<tp2<<endl;
	}
	else
	{
		ks3 = total * 0.15;
		tp3 = ks3 + 15000;
		cout << "Upah Salesman       : Rp.15000"<<endl;
		cout << "Komisi Salesman 15% : Rp."<<ks3<<endl;
		cout << "Total Pendapatan\nSalesman            : Rp."<<tp3<<endl;
	}
	
	return 0;
}