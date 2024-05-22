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
	cout<<endl<<endl<<"Yatýrýmýn geri ödeme süresini bulan programa hoþ geldiniz"<<endl<<endl;
	cout<<"Lütfen baþlangýç yatýrým harcama tutarýný giriniz"<<endl<<endl;
	double y;
	cin>>y;
	y=abs(y);
	system("cls");
	cout<<endl<<endl<<"Lütfen nakit giriþ veya çýkýþlarýnýn kaç yýl boyunca saðlanacaðýný giriniz"<<endl<<endl;
	int n;
	cin>>n;

	if (n<=0) {
		system("cls");
		cout<<endl<<endl<<"Yýl sayýsýný pozitif girmediniz lütfen deðerleri en baþtan giriniz"<<endl<<endl;
		cout<<"Deðerleri baþtan girerken lütfen yýl sayýsýný pozitif bir deðer olarak giriniz"<<endl<<endl;
		system("pause");
		goto basadon;
	}
	
	
	system("cls"); 
	double dizi[n];
	int i=0;
	double j;
	while(i<n){
		cout<<endl<<endl<<"Lütfen "<<i+1<<" numaralý yýlýn nakit giriþini veya çýkýþýný giriniz"<<endl<<endl;
		cin>>j;
		dizi[i]=j;
		i++;
		system("cls");
	}
	cout<<endl<<endl<<"Lütfen iskonto oranýný yüzde olarak giriniz. Örneðin: 28.63 gibi"<<endl<<endl;
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
	printf("Yatýrýmýn yüzde %.2lf iskontolu geri ödeme süresi %.2lf yýl olarak bulunmuþtur",iskonto,sonuc);
	cout<<endl<<endl;
	
	system("pause");
	goto basadon;
	}
	else{
		cout<<endl<<endl;
		printf("Yatýrým yüzde %.2lf iskonto ile baþlangýç yatýrým tutarýný karþýlayamamaktadýr",iskonto);
		cout<<endl<<endl;
		system("pause");
		goto basadon;
	}
	





	return 0;
}
