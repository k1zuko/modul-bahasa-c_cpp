#include <iostream>
using namespace std;

void var(float *w, float *x, float *y, float *z)
{
	*w = *w * 3;
	*x = *x * 3;
	*y = *y * 3;
	*z = *z * 3;
}

int main()
{
	float w, x, y, z;
	
	cout << " Masukkan nilai variabel w = ";
	cin >> w;
	cout << " Masukkan nilai variabel x = ";
	cin >> x;
	cout << " Masukkan nilai variabel y = ";
	cin >> y;
	cout << " Masukkan nilai variabel z = ";
	cin >> z;
	
	var(&w, &x, &y, &z);
	
	cout << "\n Nilai variabel w setelahnya = " << w << endl;
	cout << " Nilai variabel x setelahnya = " << x << endl;
	cout << " Nilai variabel y setelahnya = " << y << endl;
	cout << " Nilai variabel z setelahnya = " << z << endl;
}