#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int n, r, nr, nfak=1, rfak=1, nrfak=1, komb;
	cout<<"====== RUMUS KOMBINASI ======\n";
	cout<<"             n! \n";
	cout<<"        ----------- \n";
	cout<<"         r!*(n-r)! \n\n";
	cout<<"Masukkan nilai n : "; cin>>n;
	cout<<"Masukkan nilai r : "; cin>>r;
	for (int x=n; x>=1; x--)
	{
		nfak=nfak*x;
	}
	for (int y=r; y>=1; y--)
	{
		rfak=rfak*y;
	}
		nr=n-r;
	for (int z=nr; z>=1; z--)
	{
		nrfak=nrfak*z;
	}
	komb=nfak/(rfak*nrfak);
	cout<<"\nHasil "<<n<<" Kombinasi "<<r<<" adalah : "<<komb<<endl;
	getch();
	return 0;
}