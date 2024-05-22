#include <iostream>
#include <locale.h>
#include <math.h>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	secimegeridon:
	system("cls");
	int a;
	float r;
	int n;
	int dizitipi;
	float dizitoplam;
	printf("Lütfen geometrik dizinizin tipini seçiniz(1, 2, 3 veya 4'e basýnýz)\n\n1) Dizim   a.r+a.r^2+..................+a.r^n þeklinde\n\n2) Dizim   a+a.r+a.r^2+................+a.r^n þeklinde\n\n3) Dizim   a.(1/r)+a.(1/r)^2+..........+a.(1/r)^n þeklinde\n\n4) Dizim   a+a.(1/r)+a.(1/r)^2+........+a.(1/r)^n þeklinde\n");
	scanf("%d",&dizitipi);
	
	system("cls");
	switch(dizitipi){
	case 1: 
		printf("Toplamýný ve terim sayýsýný bulmak istediðiniz \ngeometrik dizinin a deðerini giriniz\n");
	scanf("%d",&a);
	system("cls");
	printf("Toplamýný ve terim sayýsýný bulmak istediðiniz \ngeometrik dizinin r deðerini giriniz\n");
	scanf("%f",&r);
	system("cls");
	printf("Toplamýný ve terim sayýsýný bulmak istediðiniz \ngeometrik dizi için n deðerini giriniz\n");
	scanf("%d",&n);
	system("cls");
	dizitoplam=((a*r)*(1-pow(r,n)))/(1-r);
	printf("a deðeri %d, r deðeri %.2f ve n deðeri %d\nolan geometrik dizinin toplamý þudur: %.2f\n",a,r,n,dizitoplam);
	break;
	case 2: 
		printf("Toplamýný ve terim sayýsýný bulmak istediðiniz \ngeometrik dizinin a deðerini giriniz\n");
	scanf("%d",&a);
	system("cls");
	printf("Toplamýný ve terim sayýsýný bulmak istediðiniz \ngeometrik dizinin r deðerini giriniz\n");
	scanf("%f",&r);
	system("cls");
	printf("Toplamýný ve terim sayýsýný bulmak istediðiniz \ngeometrik dizi için n deðerini giriniz\n");
	scanf("%d",&n);
	system("cls");
	dizitoplam=((a*(1-pow(r,n+1)))/(1-r));
	printf("a deðeri %d, r deðeri %.2f ve n deðeri %d\nolan geometrik dizinin toplamý þudur: %.2f\n",a,r,n,dizitoplam);
	break;
	default: goto secimegeridon;
	case 3: 
		printf("Toplamýný ve terim sayýsýný bulmak istediðiniz \ngeometrik dizinin a deðerini giriniz\n");
	scanf("%d",&a);
	system("cls");
	printf("Toplamýný ve terim sayýsýný bulmak istediðiniz \ngeometrik dizinin r deðerini giriniz\n");
	scanf("%f",&r);
	system("cls");
	printf("Toplamýný ve terim sayýsýný bulmak istediðiniz \ngeometrik dizi için n deðerini giriniz\n");
	scanf("%d",&n);
	system("cls");
	dizitoplam=((a*(1/r))*(1-pow((1/r),n)))/(1-(1/r));
	printf("a deðeri %d, r deðeri %.2f ve n deðeri %d\nolan geometrik dizinin toplamý þudur: %.2f\n",a,r,n,dizitoplam);
	break;
		case 4: 
		printf("Toplamýný ve terim sayýsýný bulmak istediðiniz \ngeometrik dizinin a deðerini giriniz\n");
	scanf("%d",&a);
	system("cls");
	printf("Toplamýný ve terim sayýsýný bulmak istediðiniz \ngeometrik dizinin r deðerini giriniz\n");
	scanf("%f",&r);
	system("cls");
	printf("Toplamýný ve terim sayýsýný bulmak istediðiniz \ngeometrik dizi için n deðerini giriniz\n");
	scanf("%d",&n);
	system("cls");
	dizitoplam=((a*(1-pow((1/r),n+1)))/(1-(1/r)));
	printf("a deðeri %d, r deðeri %.2f ve n deðeri %d\nolan geometrik dizinin toplamý þudur: %.2f\n",a,r,n,dizitoplam);
	break;
	}
	system("pause");
	goto secimegeridon;
	
	
	

	
	
	return 0;
}
