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
	cout<<endl<<endl<<"Yat�r�m�n i� verim oran�n� bulan programa ho� geldiniz"<<endl<<endl;
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
	double dizi[n];
	system("cls"); 
	int i=0;
	double j;
	while(i<n){
		cout<<endl<<endl<<"L�tfen "<<i+1<<" numaral� y�l�n nakit giri�ini veya ��k���n� giriniz"<<endl<<endl;
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
	cout<<y<<" yat�r�m harcama tutar�nda "<<endl<<endl<<n<<" y�l boyunca girdi�iniz nakit giri� veya ��k��lar� "<<endl;
	int k=0;
	while(k<n){
		cout<<endl;
		cout<<k+1<<"."<<" y�l i�in "<<dizi[k];
		k++;
	}
	cout<<"    iken"<<endl<<endl;
	printf("Yat�r�m�n i� verim oran� yakla��k y�zde %.2lf olarak bulunmu�tur",(r-1)*100);
	cout<<endl<<endl;
	system("pause");
	goto basadon;
	
	
	
	return 0;
}
