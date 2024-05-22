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
	cout<<endl<<endl<<"Yatýrýmýn iç verim oranýný bulan programa hoþ geldiniz"<<endl<<endl;
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
	double dizi[n];
	system("cls"); 
	int i=0;
	double j;
	while(i<n){
		cout<<endl<<endl<<"Lütfen "<<i+1<<" numaralý yýlýn nakit giriþini veya çýkýþýný giriniz"<<endl<<endl;
		cin>>j;
		dizi[i]=j;
		i++;
		system("cls");
	}

	
	
	double dizi2[n];
	
	double r=2.0001;

	i=0;
	int g=1;
	while(i<n){
		dizi2[i]=dizi[i]/pow(r,g);
		i++;
		g++;
	}
	
	i=0;
	int toplam=0;
	
	while (i<n){
		toplam=toplam+dizi2[i];
		i++;
	}
	
	
	while(abs((y-toplam)>0.001)){
		
	r=r-0.00001;
	i=0;
	int g=1;
	while(i<n){
		dizi2[i]=dizi[i]/pow(r,g);
		i++;
		g++;
	}
	
	int s=0;
	toplam=0;
	
	while (s<n){
		toplam=toplam+dizi2[s];
		s++;
	}
		
	}

	cout<<endl;
	cout<<y<<" yatýrým harcama tutarýnda "<<endl<<endl<<n<<" yýl boyunca girdiðiniz nakit giriþ veya çýkýþlarý "<<endl;
	int k=0;
	while(k<n){
		cout<<endl;
		cout<<k+1<<"."<<" yýl için "<<dizi[k];
		k++;
	}
	cout<<"    iken"<<endl<<endl;
	printf("Yatýrýmýn iç verim oraný yaklaþýk yüzde %.2lf olarak bulunmuþtur",(r-1)*100);
	cout<<endl<<endl;
	system("pause");
	goto basadon;
	
	
	
	return 0;
}
