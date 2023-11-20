#include <iostream>
using namespace std;

int main ()
{
	long *p, x;
	
	p = &x;
	x = 40;
	
	cout << "nilai X = "<<x<<endl;
	cout << "nilai *p = "<<*p<<endl;
	cout << "nilai P = "<<p<<endl;
	cout << "nilai &x = "<<&x<<endl;
	
	*p = 25;
	
	cout << "nilai X = "<<x<<endl;
	cout << "nilai *p = "<<*p<<endl;
	cout << "nilai P = "<<p<<endl;
	cout << "nilai &x = "<<&x<<endl;
	
	return 0;
}