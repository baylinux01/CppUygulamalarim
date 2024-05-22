#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	int sayi;
	int sayac=0;
	basadon:
		system("cls");
		sayac=0;
	printf("Lütfen asal olup olmadýðýný öðrenmek istediðiniz sayýyý giriniz\n");
	scanf("%d",&sayi);
	
	for(int i=(sayi-1);i>1;i--){
		
		
		
		if (sayi%i==0){
			sayac++; break;
	        
				
		}
	
	}
		if(sayac>0){
		
	
	system("cls");
	printf("Girdiðiniz sayý asal bir sayý deðildir \n");
	system("pause");
	}
		else if(sayac<=0 && sayi>=2) {
		system("cls");
		printf("Girdiðiniz sayý asal bir sayýdýr \n");
		system("pause");
	}
	else {
		system("cls");
		printf("1, 0 veya negatif bir sayý girdiniz lütfen 2 veya daha büyük bir sayý giriniz \n");
		system("pause");
		
	}

	goto basadon;
	return 0;
	
	}
		
	
	
	


