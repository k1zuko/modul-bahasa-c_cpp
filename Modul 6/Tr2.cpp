#include <iostream>
#include <math.h>
using namespace std;

void garis()
{
	for(int i=0; i<51; i++)
	{
		cout<<"-";
	}
	cout<<endl;
}

int main()
{ 
	int a=0;
	float data[50], rata, baku, jumlah=0, xi, total_xi;
	char ulang;
	
	garis();
	cout<<"\t\t  MODUL FUNCTION "<<endl;
	garis();
	cout<<"\t      PROGRAM STANDAR DEVIASI "<<endl; 
	garis();
	
	do
	{
		cout<<"Masukkan data : ";
		cin>>data[a];
		jumlah=jumlah+data[a];
		a++;
		cout<<"Masukkan data lagi? (y/n) : ";
		cin>>ulang;
	}
	while(ulang=='y'||ulang=='Y');
	
	cout<<"\n";
	rata=jumlah/a;
	cout<<" Nilai Rata-Rata : "<<rata;
	cout<<"\n";
	total_xi=0;
	
	for(int x=0; x<a; x++)
	{
		xi=data[x]-rata;
		total_xi=total_xi+(xi*xi);
	}
	
	baku=sqrt(total_xi/(a-1));
	cout<<"\n Simpangan Baku : "<<baku<<endl;
}