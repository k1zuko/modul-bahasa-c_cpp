#include "stdio.h"
#include "conio.h"
void main ()
{
	int index, nilai[10];
	clrscr();
	// input nilai mahasiswa
	printf("Masukkan nilai 10 mahasiswa: \n");
	for (index=0; index<10; index++)
	{
		printf("Mahasiswa %d: ", index+1);
		scanf("%d", &nilai[index]);
	}
	//tampilan nilai mahasiswa
	printf("\nNilai mahasiswa yang telah dimasukkan\n");
	for (index=0; index<10; index++)
	{
		printf("Mahasiswa %d :%5.0i \n",index+1, nilai[index]);
	}
	getch();
}