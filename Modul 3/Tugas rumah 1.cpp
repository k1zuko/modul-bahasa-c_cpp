#include <iostream>
using namespace std;

int main ()
{
	float nk, nmk, nt, nmt, nu, nmu, na;
	cout << "===== Nilai Siswa ====="<<endl;
	cout << "Nilai Keaktifan	= ";
	cin >> nk;
	cout << "Nilai Tugas	= ";
	cin >> nt;
	cout << "Nilai Ujian	= ";
	cin >>nu;
	
	nmk = nk * 0.2;
	nmt = nt * 0.3;
	nmu = nu * 0.5;
	na = nmk + nmt + nmu;
	cout << "\n==== Nilai Murni Siswa ====\n";
	cout << "Nilai Murni Keaktifan = "<<nmk<<endl;
	cout << "Nilai Murni Tugas = "<<nmt<<endl;
	cout << "Nilai Murni Ujian = "<<nmu<<endl;
	cout << "Nilai Akhir = "<<na<<endl<<endl;
	cout << "=== Pernyataan ==="<<endl;
	
	if (na>55)
	{
		if (na>85)
		{
			if (na>90)
					cout << "A"<<endl;
			else
					cout << "A-"<<endl;
			cout <<"Selamat! Anda lulus dengan nilai yang EXCELLENT!";
		}
		else if (na>65)
		{
			if (na>80)
					cout << "B+"<<endl;
			else if (na>75)
					cout << "B"<<endl;
			else
					cout << "B-"<<endl;
			cout << "Anda lulus dengan baik, tingkatkan terus prestasi Anda.";
		}
		else
		{
			cout << "C"<<endl;
			cout << "Anda lulus, tingkatkan lagi pencapaian Anda.";
		}
	}
	else if (na>=0)
	{
		if (na>=45)
			cout << "D"<<endl;
		else
			cout << "E"<<endl;
		cout << "Maaf, Anda belum dapat diluluskan. Tingkatkan terus belajar Anda.";
	}
	cout << endl;
	return 0;
}