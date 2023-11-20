#include <iostream>
using namespace std;

int main ()
{
	int saldo = 100000, pilihan, setor, ambil;
	
	do {
		cout << "_________________________"<<endl;
		cout << "   BANK INDONESIA JAYA"<<endl;
		cout << "_________________________"<<endl;
		cout << "           Saldo : "<<saldo<<endl;
		cout << "Menu Transaksi : "<<endl;
		cout << "1. Setor Tabungan"<<endl;
		cout << "2. Ambil Tabungan"<<endl;
		cout << "3. Keluar"<<endl;
		cout << "Pilihan Menu Transaksi (1/2/3) : ";
		cin >> pilihan;
	
		 if (pilihan==1) {
			cout << "=> Penyetoran Tabungan"<<endl;
			cout << "=> Masukkan Jumlah Setoran : ";
			cin >> setor;
		
			saldo = saldo + setor;
		
			pilihan++;
			cout << endl;
		 }
		 else if (pilihan==2) {
		 	cout << "=> Pengambilan Tabungan"<<endl;
	 		cout << "=> Masukkan Nominal Pengambilan : ";
	 		cin >> ambil;
	 		cout << endl;
	 		
		 	saldo = saldo - ambil;
		 	
	 		if (saldo>=50000) {
	 			cout << "Kebijakan! Sisakan 50000 dalam Bank";
	 		}
	 		else if (saldo<50000) {
	 			cout << "Anda Melanggar Kebijakan Bank!"<<endl;
	 			cout << "Akun Anda Diblokir Sementara";
	 			system("exit");
	 		}
	 		
	 		pilihan++;
	 		cout << endl;
		 }
		 else {
		 	cout << "Terimakasih! Selamat Jalan"<<endl;
	 		break;
		 }
	}
	while (saldo>=50000);
}