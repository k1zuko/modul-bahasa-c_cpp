#include <iostream>
using namespace std;

int main ()
{
	int a=0, b=20, c=20;
	cout << "A	B	C"<<endl;
	cout << "_________________"<<endl;
	
	for(a=0; a<=20; a++)
	{
		cout << a << "\t" << b << "\t" << c;
		cout << endl;
		b--;
	}
	cout<<endl;
}