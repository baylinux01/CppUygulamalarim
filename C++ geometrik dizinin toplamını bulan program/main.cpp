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
	printf("L�tfen geometrik dizinizin tipini se�iniz(1, 2, 3 veya 4'e bas�n�z)\n\n1) Dizim   a.r+a.r^2+..................+a.r^n �eklinde\n\n2) Dizim   a+a.r+a.r^2+................+a.r^n �eklinde\n\n3) Dizim   a.(1/r)+a.(1/r)^2+..........+a.(1/r)^n �eklinde\n\n4) Dizim   a+a.(1/r)+a.(1/r)^2+........+a.(1/r)^n �eklinde\n");
	scanf("%d",&dizitipi);
	
	system("cls");
	switch(dizitipi){
	case 1: 
		printf("Toplam�n� ve terim say�s�n� bulmak istedi�iniz \ngeometrik dizinin a de�erini giriniz\n");
	scanf("%d",&a);
	system("cls");
	printf("Toplam�n� ve terim say�s�n� bulmak istedi�iniz \ngeometrik dizinin r de�erini giriniz\n");
	scanf("%f",&r);
	system("cls");
	printf("Toplam�n� ve terim say�s�n� bulmak istedi�iniz \ngeometrik dizi i�in n de�erini giriniz\n");
	scanf("%d",&n);
	system("cls");
	dizitoplam=((a*r)*(1-pow(r,n)))/(1-r);
	printf("a de�eri %d, r de�eri %.2f ve n de�eri %d\nolan geometrik dizinin toplam� �udur: %.2f\n",a,r,n,dizitoplam);
	break;
	case 2: 
		printf("Toplam�n� ve terim say�s�n� bulmak istedi�iniz \ngeometrik dizinin a de�erini giriniz\n");
	scanf("%d",&a);
	system("cls");
	printf("Toplam�n� ve terim say�s�n� bulmak istedi�iniz \ngeometrik dizinin r de�erini giriniz\n");
	scanf("%f",&r);
	system("cls");
	printf("Toplam�n� ve terim say�s�n� bulmak istedi�iniz \ngeometrik dizi i�in n de�erini giriniz\n");
	scanf("%d",&n);
	system("cls");
	dizitoplam=((a*(1-pow(r,n+1)))/(1-r));
	printf("a de�eri %d, r de�eri %.2f ve n de�eri %d\nolan geometrik dizinin toplam� �udur: %.2f\n",a,r,n,dizitoplam);
	break;
	default: goto secimegeridon;
	case 3: 
		printf("Toplam�n� ve terim say�s�n� bulmak istedi�iniz \ngeometrik dizinin a de�erini giriniz\n");
	scanf("%d",&a);
	system("cls");
	printf("Toplam�n� ve terim say�s�n� bulmak istedi�iniz \ngeometrik dizinin r de�erini giriniz\n");
	scanf("%f",&r);
	system("cls");
	printf("Toplam�n� ve terim say�s�n� bulmak istedi�iniz \ngeometrik dizi i�in n de�erini giriniz\n");
	scanf("%d",&n);
	system("cls");
	dizitoplam=((a*(1/r))*(1-pow((1/r),n)))/(1-(1/r));
	printf("a de�eri %d, r de�eri %.2f ve n de�eri %d\nolan geometrik dizinin toplam� �udur: %.2f\n",a,r,n,dizitoplam);
	break;
		case 4: 
		printf("Toplam�n� ve terim say�s�n� bulmak istedi�iniz \ngeometrik dizinin a de�erini giriniz\n");
	scanf("%d",&a);
	system("cls");
	printf("Toplam�n� ve terim say�s�n� bulmak istedi�iniz \ngeometrik dizinin r de�erini giriniz\n");
	scanf("%f",&r);
	system("cls");
	printf("Toplam�n� ve terim say�s�n� bulmak istedi�iniz \ngeometrik dizi i�in n de�erini giriniz\n");
	scanf("%d",&n);
	system("cls");
	dizitoplam=((a*(1-pow((1/r),n+1)))/(1-(1/r)));
	printf("a de�eri %d, r de�eri %.2f ve n de�eri %d\nolan geometrik dizinin toplam� �udur: %.2f\n",a,r,n,dizitoplam);
	break;
	}
	system("pause");
	goto secimegeridon;
	
	
	

	
	
	return 0;
}
