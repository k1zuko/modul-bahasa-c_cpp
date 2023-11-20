 #include "stdio.h"
 #include "iostream.h"
 #include "conio.h"
 int main()
 {
 	char kalimat[]="Saya adalah anak SIJA Angkatan 2022";
 	int hitung, i;
 	system("cls");
 	for (i=0; kalimat[i]!='\0'; i++){
 		hitung++;
 		}
 	printf("Kalimat %s mempunyai %i huruf", kalimat, hitung);
 	printf(" dan disimpan dalam %i bytes \n", hitung+1);
 }