#include <iostream.h>
#include <conio.h>

int main()
{
	int saldo = 100000, pil, setor, ambil;

	while (pil != 3)
	{
		cout << "BANK INDONESIA JAYA"<<endl;
		cout << "_______________________"<<endl;
		cout << "Menu Transaksi :\n";
		cout << "1.Setor Tabungan \n";
		cout << "2.Ambil Tabubgan \n";
		cout << "3.Keluar \n";
		cout << "Pilihan Menu Transaksi (1/2/3) :";
		cin >> pil;

		while (pil == 1)
		{
			cout << "Penyetoran Tabungan \n";
			cout << "Masukkan Jumlah Setoran : ";
			cin >> setor;
			saldo = saldo + setor;
			cout << "Saldo Anda Saat Ini : " << saldo << endl;
			getch();
			break;
		}
		while (pil == 2)
		{
			cout << "Pengambilan Tabungan \n";
			cout << "Masukan Nominal Pengambilan : ";
			cin >> ambil;
			saldo = saldo - ambil;
			cout << "Sisa Saldo Sementara : " << saldo << endl;
			getch();
			break;
		}
		while (pil == 0)
		{
			exit(0);
		}
		if (pil > 3)
		{
			cout << "Masukkan angka dengan benar!"<<endl<<endl;
			
		}
	}
}