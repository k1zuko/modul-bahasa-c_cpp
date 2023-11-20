#include <iostream>
using namespace std;

int main ()
{
	char kata[100];
	cin.getline(kata, sizeof(kata));
	char *jkt;
	jkt = kata;
	cout << jkt;
}