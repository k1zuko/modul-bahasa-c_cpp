#include <iostream.h>

//deklarasi fungsi
int calcSalesTax(float purchase, float taxRate=0.1);

//main function
int main()
{
	float purchase;
	cout<<"Masukkan pembelian : ";
	cin>>purchase;
	float taxRate=calcSalesTax(purchase);
	cout<<"Pajak pembelian adalah : "<<taxRate<<endl;
	return 0;
}
int calcSalesTax(float purchase, float taxRate)
{
	return purchase * taxRate;
}