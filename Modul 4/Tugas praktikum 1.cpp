#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string kata;
	
	cout << "Masukkan kata : ";
	cin >> kata;
	cout << endl;
	
	for (int a=0; a<=kata.length();a++) {
		cout << kata.substr (a, kata.length()) << endl;
	}
}