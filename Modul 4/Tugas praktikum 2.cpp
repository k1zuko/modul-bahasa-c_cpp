#include <iostream>
using namespace std;

int main ()
{
	int C, F, R, K;
	cout << "°C	°F	°R	°K"<<endl;
	
	for (C=10; C<=100; C+=10) {
		
		F=(C * 9 / 5) + 32;
		R=C*0.8;
		K=C+273.15;
		
		cout << C <<"\t" << F << "\t" << R << "\t" << K << endl;
	}
}