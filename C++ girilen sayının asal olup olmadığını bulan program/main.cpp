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
	printf("L�tfen asal olup olmad���n� ��renmek istedi�iniz say�y� giriniz\n");
	scanf("%d",&sayi);
	
	for(int i=(sayi-1);i>1;i--){
		
		
		
		if (sayi%i==0){
			sayac++; break;
	        
				
		}
	
	}
		if(sayac>0){
		
	
	system("cls");
	printf("Girdi�iniz say� asal bir say� de�ildir \n");
	system("pause");
	}
		else if(sayac<=0 && sayi>=2) {
		system("cls");
		printf("Girdi�iniz say� asal bir say�d�r \n");
		system("pause");
	}
	else {
		system("cls");
		printf("1, 0 veya negatif bir say� girdiniz l�tfen 2 veya daha b�y�k bir say� giriniz \n");
		system("pause");
		
	}

	goto basadon;
	return 0;
	
	}
		
	
	
	


