#include <iostream>
using namespace std;

int main ()
{
	int nilai, r, s, phi = 3.14, Lp, p, l, t, a, th;
	
	cout << "Instruksi : "<<endl;
	cout << "1 = Luas Permukaan Bola"<<endl;
	cout << "2 = Luas Permukaan Kubus"<<endl;
	cout << "3 = Luas Permukaan Balok"<<endl;
	cout << "4 = Luas Permukaan Tabung"<<endl;
	cout << "5 = Luas Permukaan Kerucut"<<endl;
	cout <<"6 = Luas Permukaan Limas Segiempat"<<endl;
	cout << "7 = Tahun Kabisat"<<endl<<endl;
	
	cout << "Masukkan yang ingin kamu ketahui : ";
	cin >> nilai;
	cout << "\n";
	
	switch (nilai) {
		case 1:
			cout << "Menghitung Luas Permukaan Bola"<<endl;
			cout << "Rumus yang digunakan : 4πr²"<<endl;
			cout << "Masukkan jari-jari (r) = ";
			cin >> r;
			
			Lp = 4 * phi * r * r;
			
			cout << "Luas Permukaan Bola adalah "<<Lp<<endl;
			break;
			
		case 2:
			cout << "Menghitung Luas Permukaan Kubus"<<endl;
			cout << "Rumus yang digunakan : 6s²"<<endl;
			cout << "Masukkan sisi (s) = ";
			cin >> s;
			
			Lp = 6 * s * s;
			
			cout << "Luas Permukaan Kubus adalah "<<Lp<<endl;
			break;
			
		case 3:
			cout << "Menghitung Luas Permukaan Balok"<<endl;
			cout << "Rumus yang digunakan : 2(pl + pt + lt)"<<endl;
			cout << "Masukkan panjang (p) = ";
			cin >> p;
			cout << "Masukkan lebar (l) = ";
			cin >> l;
			cout << "Masukkan tinggi (t) = ";
			cin >> t;
			
			Lp = 2 * (p*l + p*t + l*t);
			
			cout << "Luas Permukaan Balok adalah "<<Lp<<endl;
			break;
			
		case 4:
			cout << "Menghitung Luas Permukaan Tabung"<<endl;
			cout << "Rumus yang digunakan : 2πr(r+t)"<<endl;
			cout << "Masukkan jari-jari (r) = ";
			cin >> r;
			cout << "Masukkan tinggi (t) = ";
			cin >> t;
			
			Lp = 2 * phi * r * (r + t);
			
			cout << "Luas Permukaan Tabung adalah "<<Lp<<endl;
			break;
			
		case 5:
			cout << "Menghitung Luas Permukaan Kerucut"<<endl;
			cout << "Rumus yang digunakan : πr(s+r)"<<endl;
			cout << "Masukkan jari-jari (r) = ";
			cin >> r;
			cout << "Masukkan selimut (s) = ";
			cin >> s;
			
			Lp = phi * r * (s + r);
			
			cout << "Luas Permukaan Kerucut adalah "<<Lp<<endl;
			break;
			
		case 6:
			cout << "Menghitung Luas Permukaan Limas Segiempat"<<endl;
			cout << "Rumus yang digunakan : (s*s)+(4*(a*t/2))"<<endl;
			cout << "Masukkan sisi alas = ";
			cin >> s;
			cout << "Masukkan alas = ";
			cin >> a;
			cout << "Masukkan tinggi = ";
			cin >> t;
			
			Lp = (s * s) + (4 * (a * t / 2));
			
			cout << "Luas Permukaan Limas Segiempat adalah "<<Lp<<endl;
			break;
			
		case 7:
			cout << "Mengetahui Tahun Kabisat"<<endl;
			cout << "Rumus yang digunakan :\nTahun yang bisa dibagi 4,\ntidak bisa dibagi 100, bisa dibagi 400\nmerupakan tahun kabisat"<<endl;
			cout << "Masukkan Tahun = ";
			cin >> th;
			
			if (th%4==0; th%100!=0)
				cout <<th<< " Merupakan Tahun Kabisat"<<endl;
			else if (th%400==0)
				cout <<th<< " Merupakan Tahun Kabisat"<<endl;
			else
				cout <<th<< " Bukan Merupakan Tahun Kabisat"<<endl;
			break;
				
		default:
			cout << "Masukkan angka dengan benar!"<<endl;
			cout << "Pilih antara 1 - 7"<<endl;
			break;
	}
}