#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	int sayi;
	basadon:
	printf("Lütfen bir sayý giriniz\n");
	scanf("%d",&sayi);
	if(sayi%2==0){
		system("cls");
		printf("Girdiðiniz sayý çifttir\n");
		system("pause");
	}
	else {
		system("cls");
		printf("Girdiðiniz sayý tektir\n");
		system("pause");
	}
	system("cls");
	goto basadon;
	
	return 0;
}
