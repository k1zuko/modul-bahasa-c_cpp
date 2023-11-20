#include "stdio.h"
#include "conio.h"
void main ()
{
	int baris, kolom, matriks[3][4];
	clrscr();
	// input elemen secara Row Major Order
	printf("Masukkan elemen array: \n");
	for (baris=0; baris<3; baris++)
	{
		for (kolom=0; kolom<4; kolom++)
		{
			printf("matriks[%i][%i]", baris+1, kolom+1);
			scanf("%i", &matriks[baris][kolom]);
		}
		printf("\n");
	}
	// tampilan elemen array secara Row Major Order
	printf("Isi array: \n");
	for (baris=0; baris<3; baris++)
	{
		for (kolom=0; kolom<4; kolom++)
		{
			printf("%i\t", matriks[baris][kolom]);
		}
		printf("\n");
	}
	getch();
}