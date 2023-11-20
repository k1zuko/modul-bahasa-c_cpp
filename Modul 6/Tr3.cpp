#include <iostream.h> 

int m; 
void akhir(float data[], int a, float hasil[]) 
{ 
	float banyak[100], b=1; int d=0; m=0; 
	for(int i=1;i<a;i++)
		{ 
			for(int j=i;j<a;j++) 
			{ 
				if(data[i]>data[j])
					{ 
						float temp;
						temp=data[i];
						data[i]=data[j]; 
						data[j]=temp; 
				} 
			} 
	} 
	for(int i=0;i<a;i++)
		{ 
			banyak[i]=0; 
			for(int j=0;j<a;j++)
				{ 
					if(data[i]==data[j]) 
					{
						banyak[i]++; 
					} 
			} 
	}
	for(int i=0;i<a;i++) 
	{ 
		if(banyak[i]>b) 
	{
		b=banyak[i]; 
		} 
	} 
	for(int i=0;i<a;i++) 
	{ 
		if(m==0) 
		{ 
			hasil[m]=0;
		}
		else hasil[m]=hasil[m-1]; 
		if(banyak[i]==b) 
		{ 
			if(data[i]!=hasil[m]) 
			{
				hasil[m]=data[i]; m++;
				} 
		} 
	}
	for(int i=0;i<a;i++) 
	{ 
		if(banyak[i]==b)
			{
				d++; 
		} 
	} 
	if(d==a)
		{ 
			m=0; 
	}
} 
void garis()
{
	for(int i=0; i<55; i++)
		{ 
			cout<<"-"; 
	} 
	cout<<endl; 
}
int main() 
{ 
	float data[100], hasil[100]; 
	int a=0; 
	char ulang;
	garis();
	cout<<"\t\t    MODUL FUNCTION"<<endl;
	garis();
	cout<<"\t MENENTUKAN DATA YANG SERING DIINPUTKAN"<<endl; 
	garis();
	do
		{
			cout<<" Masukkan data : "; 
			cin>>data[a]; a++;
			cout<<" Masukkan Data Lagi (y/n) : "; 
			cin>>ulang; 
	} 
	while(ulang=='y'||ulang=='Y');
	akhir(data,a,hasil); 
	if(m==0)
		{ 
			cout<<endl;
			garis(); 
			cout<<" Tidak ada data yang sering diinputkan "<<endl;
			garis();
	} 
	else 
	{ 
		cout<<endl;
		garis(); 
		cout<<" Data yang sering diinputkan adalah "; 
		for(int i=0;i<m;i++) 
		{ 
			cout<<hasil[i]<<" "; 
		} 
		cout<<endl; 
		garis();
	} 
}