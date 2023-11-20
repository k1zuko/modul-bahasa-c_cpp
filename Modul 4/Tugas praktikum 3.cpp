#include <iostream>
using namespace std;

int main ()
{
	int n, i, j, k;
	
	cout << "Masukkan nilai : ";
	cin >> n;
	
	for (i=1; i<=n; i++) {
		for (int b=1; b<n; b++)
			cout << " ";
		for (j=n; j>=i; j--) {
			cout << "*";
		}
		cout << endl;
	}
	for (i=1; i<=n; i++) {
		for (j=n; j>i; j--) {
			cout << " ";
		}
		for (k=1; k<=i; k++) {
			cout << "*";
		}
		cout << endl;
	}
}