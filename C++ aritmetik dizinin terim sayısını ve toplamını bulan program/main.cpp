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
	printf("Toplamýný ve terim sayýsýný bulmak istediðiniz \naritmetik dizinin ilk terimini giriniz\n");
	scanf("%d",&ilkterim);
	system("cls");
	printf("Toplamýný ve terim sayýsýný bulmak istediðiniz \naritmetik dizinin artýþ miktarýný giriniz giriniz\n");
	scanf("%d",&artismiktari);
	system("cls");
	printf("Toplamýný ve terim sayýsýný bulmak istediðiniz \naritmetik dizinin son terimini giriniz\n");
	scanf("%d",&sonterim);
	system("cls");
	if((sonterim-ilkterim)%artismiktari==0){
			terimsayisi=((sonterim-ilkterim)/artismiktari)+1;
	        dizinintoplami=(terimsayisi*(ilkterim+sonterim))/2;
	        printf("ilkterimi %d, artýþ miktarý %d ve son terimi %d olan dizinin \nterim sayýsý %d ve dizideki elemanlarýn toplam deðeri þudur: %d\n",ilkterim,artismiktari,sonterim,terimsayisi,dizinintoplami);
			system("pause");
			goto basadon;
	}
	else 	{
		printf("Hata:Girdiðiniz ilkterim ve artýþ mikarý ile girdiðiniz\n     son terim elde edilemiyor.\n\n     Lütfen deðerlerden en az birini deðiþtirip tekrar deneyiniz\n\n     ");
		system("pause");
		goto basadon;
	}
	
	

	
	
	
	
	
	return 0;
}
