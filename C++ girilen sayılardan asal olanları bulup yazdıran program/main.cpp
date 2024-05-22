#include <iostream>
#include <locale.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	basadon:
	system("cls");
	
	printf("Lütfen programýn aralarýndan asal olanlarýný seçip göstermesi için \ntoplamda kaç adet sayý gireceðinizi yazýnýz\n");
	int n;
	scanf("%d",&n);
	system("cls");
	
	int array[n];
		int sayi;
		int sayac=0;
		int s=0;
		
	for(int i=0;i<n;i++){
		printf("Lütfen %d sayýdan %d. sayýyý giriniz ve girdikten sonra enter tuþuna basýnýz\n",n,i+1);
		scanf("%d",&sayi);
	    system("cls");
	    
		sayac=0;
		for(int k=2;k<sayi;k++){
		
		if(sayi%k==0 && sayi!=2){
			sayac++; break;
		}}
		
		if(sayac<=0 && sayi>=2) 
		{ array[s]=sayi;
		s++;
		}
	
	}
	
	for(int g=0;g<s;g++){
	printf("Girdiðiniz %d.  asal sayý þudur: %d \n", g+1, array[g]);
	
	
	
	}
	system("pause");
	
	goto basadon;
	return 0;
  }
