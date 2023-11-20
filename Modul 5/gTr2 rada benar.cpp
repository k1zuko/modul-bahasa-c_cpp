#include <iostream>
using namespace std;

int main ()
{
	int angka=1, nilai[4][6];
	
	for (int x=1; x<=4; x++)
	{
		for (int y=1; y<=6; y++)
		{
			cout<<"nilai ["<<x<<"]["<<angka++<<"]\t\t: ";
			cin>>nilai[x][y];
			
		}
		cout<<endl;
		angka=1;
	}
	
	cout<<"|---------|---------|---------|---------|---------|---------|"<<endl;
	cout<<"|    p    |    q    |  p or q | p and q |   notp  | p xor q |"<<endl;
	cout<<"|---------|---------|---------|---------|---------|---------|"<<endl;
	
	for (int x=1; x<=4; x++)
	{
		for (int y=1; y<=6; y++)
		{
			cout <<"|    "<< nilai[x][y]++ << "    ";
			nilai[x][y];
		}
		cout<<"|"<<endl;
	}
	cout<<"|---------|---------|---------|---------|---------|---------|"<<endl;
}