#include <iostream>
using namespace std;

void ubah(int *b)
{
	*b = *b + 22;
}

int main ()
{
	int a = 12;
	
	cout << "isi nilai semula = "<< a << endl;
	
	ubah(&a);
	
	cout << "isi nilak sekarang = "<< a << endl;
}