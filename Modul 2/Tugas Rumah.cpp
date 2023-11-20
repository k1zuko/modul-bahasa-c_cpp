#include <iostream.h>

int main ()
{
	int a, b, c, d, e, j, k, l, m, n;
	
	cout<<"\tMasukan nilai a : ";
	cin>>a;
	cout<<"\tMasukan nilai b : ";
	cin>>b;
	cout<<"\tMasukan nilai c : ";
	cin>>c;
	
	d=(a*b)-c/(b+a);
	e=d<<2;
	cout<<"\n Nilai dari d = (a*b)-c/(b+a) = "<<d<<endl;
	cout<<" Hasil dari Geser 2 Bit Kekiri = "<<e<<endl<<endl;
	
	cout<<"\tMasukan nilai j : ";
	cin>>j;
	cout<<"\tMasukan nilai k : ";
	cin>>k;
	cout<<"\tMasukan nilai l : ";
	cin>>l;
	
	m=j*(k+l);
	n=m>>3;
	cout<<"\n Nilai dari m = j*(k+l) = "<<m<<endl;
	cout<<" Hasil dari Geser 3 Bit Kekanan = "<<n<<endl<<endl;
	
	if (e<n) cout<<e<<" Lebih Kecil dari "<<n<<endl;
	if (e==n) cout<<e<<" Sama dengan "<<n<<endl;
	if (e!=n) cout<<e<<" Tidak Sama dengan "<<n<<endl;
	if (e>n) cout<<e<<" Lebih Besar dari "<<n<<endl<<endl;
}