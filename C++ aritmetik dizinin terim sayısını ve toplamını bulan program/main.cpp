#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	int ilkterim;
	int sonterim;
	int artismiktari;
	int dizinintoplami;
	int terimsayisi;

	basadon:
	system("cls");
	printf("Toplam�n� ve terim say�s�n� bulmak istedi�iniz \naritmetik dizinin ilk terimini giriniz\n");
	scanf("%d",&ilkterim);
	system("cls");
	printf("Toplam�n� ve terim say�s�n� bulmak istedi�iniz \naritmetik dizinin art�� miktar�n� giriniz giriniz\n");
	scanf("%d",&artismiktari);
	system("cls");
	printf("Toplam�n� ve terim say�s�n� bulmak istedi�iniz \naritmetik dizinin son terimini giriniz\n");
	scanf("%d",&sonterim);
	system("cls");
	if((sonterim-ilkterim)%artismiktari==0){
			terimsayisi=((sonterim-ilkterim)/artismiktari)+1;
	        dizinintoplami=(terimsayisi*(ilkterim+sonterim))/2;
	        printf("ilkterimi %d, art�� miktar� %d ve son terimi %d olan dizinin \nterim say�s� %d ve dizideki elemanlar�n toplam de�eri �udur: %d\n",ilkterim,artismiktari,sonterim,terimsayisi,dizinintoplami);
			system("pause");
			goto basadon;
	}
	else 	{
		printf("Hata:Girdi�iniz ilkterim ve art�� mikar� ile girdi�iniz\n     son terim elde edilemiyor.\n\n     L�tfen de�erlerden en az birini de�i�tirip tekrar deneyiniz\n\n     ");
		system("pause");
		goto basadon;
	}
	
	

	
	
	
	
	
	return 0;
}
