#include <iostream>
#include <locale.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	basadon:
	system("cls");
	
	printf("L�tfen program�n aralar�ndan asal olanlar�n� se�ip g�stermesi i�in \ntoplamda ka� adet say� girece�inizi yaz�n�z\n");
	int n;
	scanf("%d",&n);
	system("cls");
	
	int array[n];
		int sayi;
		int sayac=0;
		int s=0;
		
	for(int i=0;i<n;i++){
		printf("L�tfen %d say�dan %d. say�y� giriniz ve girdikten sonra enter tu�una bas�n�z\n",n,i+1);
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
	printf("Girdi�iniz %d.  asal say� �udur: %d \n", g+1, array[g]);
	
	
	
	}
	system("pause");
	
	goto basadon;
	return 0;
  }
