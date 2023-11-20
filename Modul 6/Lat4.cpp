/*aplikasi rekursif pada faktorial*/
#include <iostream.h>

int faktorial(int a)
{
	if(a==1)
	{
		return true;
	}
	else 
	{
		return a*faktorial(a-1);
	}
}

void main()
{
	int x;
	cout<<"Mencari Nilai Faktorial\n";
	cout<<"Masukkan nilai n=";
	cin>>x;
	cout<<"Faktorial "<<x<<"! = "<<faktorial(x)<<endl;
}