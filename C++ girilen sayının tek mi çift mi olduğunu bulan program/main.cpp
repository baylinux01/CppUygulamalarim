#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	int sayi;
	basadon:
	printf("L�tfen bir say� giriniz\n");
	scanf("%d",&sayi);
	if(sayi%2==0){
		system("cls");
		printf("Girdi�iniz say� �ifttir\n");
		system("pause");
	}
	else {
		system("cls");
		printf("Girdi�iniz say� tektir\n");
		system("pause");
	}
	system("cls");
	goto basadon;
	
	return 0;
}
