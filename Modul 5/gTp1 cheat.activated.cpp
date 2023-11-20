#include <string>
#include <iostream>

using namespace std;
int main()
{
	char kata[20];
	int panjang_kata,i;
 
	cout<<"Masukan kata : "; cin>>kata;
	panjang_kata=strlen(kata);
 
	cout<<"Hasil : ";
	for(i=panjang_kata;i>=1;i--)
	{
		char stack=kata[i-1];
		cout<<stack;
	}
}