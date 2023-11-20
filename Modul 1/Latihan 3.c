#include <stdio.h>

int main()
{
	int Alas, Tinggi, Luas_Segitiga;
	
	printf ("Masukkan Nilai Alas Segitiga : ");
	scanf ("%d", &Alas);
	printf ("Masukkan Nilai Tinggi Segitiga : ");
	scanf ("%d", &Tinggi);
	
	Luas_Segitiga=0.5*Alas*Tinggi;
	
	printf ("Nilai Luas Segitiga adalah : %d", Luas_Segitiga, "%d");
	printf ("\n");
}