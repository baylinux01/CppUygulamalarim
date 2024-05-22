#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	int sayi;
	int ters;
	int sayi2;
	sayi2=0;
	basadon:
	system("cls");
	ters=0;
	printf("Tersini yazdýrmak istediðiniz sayýyý giriniz \n");
	scanf("%d",&sayi);
	sayi2=sayi;
	
	while(sayi!=0)
	{
	ters*=10;
	ters+=(sayi%10);
	sayi/=10;
	}
	system("cls");
	printf("Girdiginiz sayi: %d \n",sayi2);
	printf("Girdiginiz sayinin tersi: %d",ters);
	printf("\n");
	system("pause");
	
	goto basadon;
	return 0;
}
