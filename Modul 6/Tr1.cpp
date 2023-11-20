#include <iostream>
using namespace std;

void garis()
{
	for(int i=0;i<51;i++)
	{
		cout<<"-";
	}
	cout<<endl;
}

int cari(int *besar, int *kecil)
{
	int a=1, data; 
	char ulang; 
	do{
		cout<<" Masukkan data : "; 
		cin>>data; 
		if (a==1) 
		{
			*kecil=data; 
			*besar=data; 
		} 
		else if (*kecil>data) 
		{ 
			*kecil=data; 
		} 
		else if 
			(*besar<data) 
			{ 
				*besar=data; 
			} 
			a++;
			cout<<" Masukkan data lagi (y/n) : "; 
			cin>>ulang; 
	}
	while(ulang=='y'||ulang=='Y'); 
} 

int main()
{
	int besar, kecil;
	garis();
	cout<<"\t\t  MODUL FUNCTION"<<endl;
	garis();
	cout<<"\t\t MENENTUKAN BATAS"<<endl;
	garis();
	cari(&besar,&kecil);
	cout<<endl;
	cout<<" Data terbesar : "<<besar<<endl;
	cout<<" Data terkecil : "<<kecil<<endl;
}