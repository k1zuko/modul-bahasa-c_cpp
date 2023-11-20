#include <iostream>
using namespace std;

int main ()
{
	int aziz = 70, *defa, **dewi;
	
	cout << "aziz = " << aziz << endl;
	cout << "defa = aziz" << endl;
	cout << "dewi = aziz + 3" << "\n\n";
	
	defa = &aziz;
	dewi = &defa;
	
	cout << "a.	Berapakah nilai Defa??"<< endl;
	cout << "	Nilai Defa = "<< *defa << endl;
	
	cout << "b.	Berapakah nilai Dewi??"<< endl;
	cout << "	Nilai Dewi = "<< **dewi + 3 << "\n\n";
	
	defa = &aziz;
	dewi = &defa;
	
	cout << "aziz = "<< aziz << endl;
	cout << "defa = &aziz"<< endl;
	cout << "dewi = *aziz + 3"<< "\n\n";
	
	cout << "a.	Berapakah nilai Defa??"<< endl;
	cout << "	Nilai Defa = "<< *defa << endl;
	cout << "b.	Berapakah nilai Dewi??"<< endl;
	cout << "	Nilai Dewi = "<<  **dewi + 3 << endl;
}