#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <cmath>
#include <ctype.h>
#include <time.h>
#include <cstring>
#include <bits/stdc++.h>
#include <windows.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	basadon:
	system("cls");
	cout<<endl<<endl<<"Yat�r�m�n geri �deme s�resini bulan programa ho� geldiniz"<<endl<<endl;
	cout<<"L�tfen ba�lang�� yat�r�m harcama tutar�n� giriniz"<<endl<<endl;
	double y;
	cin>>y;
	y=abs(y);
	system("cls");
	cout<<endl<<endl<<"L�tfen nakit giri� veya ��k��lar�n�n ka� y�l boyunca sa�lanaca��n� giriniz"<<endl<<endl;
	int n;
	cin>>n;

	if (n<=0) {
		system("cls");
		cout<<endl<<endl<<"Y�l say�s�n� pozitif girmediniz l�tfen de�erleri en ba�tan giriniz"<<endl<<endl;
		cout<<"De�erleri ba�tan girerken l�tfen y�l say�s�n� pozitif bir de�er olarak giriniz"<<endl<<endl;
		system("pause");
		goto basadon;
	}
	
	
	system("cls"); 
	double dizi[n];
	int i=0;
	double j;
	while(i<n){
		cout<<endl<<endl<<"L�tfen "<<i+1<<" numaral� y�l�n nakit giri�ini veya ��k���n� giriniz"<<endl<<endl;
		cin>>j;
		dizi[i]=j;
		i++;
		system("cls");
	}
	cout<<endl<<endl<<"L�tfen iskonto oran�n� y�zde olarak giriniz. �rne�in: 28.63 gibi"<<endl<<endl;
	double iskonto;
	cin>>iskonto;
	system ("cls");
	
	double r;
	r=(iskonto/100)+1;
	double dizi2[n];
	i=0;
	int g=1;
	while(i<n){
		dizi2[i]=dizi[i]/pow(r,g);
		i++;
		g++;
	}
	
	int h=0;
	double taksit=0;
	double sayac=0;
	double sayaceki=0;
	while (h<n){
		
		taksit+=dizi2[h];
		if (taksit<=y) {
			sayac++;
			
			
		}
		if (taksit>y){
			taksit-=dizi2[h];
			break;
		}
		h++;
	}
	int u=0;
	double toplamtaksit;
	while(u<n){
	toplamtaksit+=dizi2[u];
		u++;
	}
	if (toplamtaksit>=y) {
		sayaceki=((y-taksit)/dizi2[h]);
	double sonuc=sayac+sayaceki;
	cout<<endl<<endl;
	printf("Yat�r�m�n y�zde %.2lf iskontolu geri �deme s�resi %.2lf y�l olarak bulunmu�tur",iskonto,sonuc);
	cout<<endl<<endl;
	
	system("pause");
	goto basadon;
	}
	else{
		cout<<endl<<endl;
		printf("Yat�r�m y�zde %.2lf iskonto ile ba�lang�� yat�r�m tutar�n� kar��layamamaktad�r",iskonto);
		cout<<endl<<endl;
		system("pause");
		goto basadon;
	}
	





	return 0;
}
