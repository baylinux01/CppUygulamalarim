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
	
	bool asalmi(int sayi){
		
		int sayac=0;
		int sayi5;
		sayi5=sayi;
	for(int i=(sayi-1);i>1;i--){
		
		if (sayi%i==0){
			sayac++; break;		
		}
	                     }
		sayi=sayi5;
		if(sayac<=0 && sayi>=2) {
		
		return true;
	       }
	    else{return false;
		}
		
	           }


int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Turkish");
	int sayi1;
	int sayi2;
	int sayi3;
	int sayi4;
	basadon:
	system("cls");
	cout<<"�ki say� ve aras�ndaki asal say�lar� bulmak i�in gereken ilk say�y� giriniz"<<endl<<endl;
	cin>>sayi3;
	cout<<endl<<endl<<"�ki say� ve aras�ndaki asal say�lar� bulmak i�in gereken ikinci say�y� giriniz"<<endl<<endl;
	cin>>sayi4;
	
	if(sayi3>sayi4){
		sayi1=sayi3;
		sayi2=sayi4;
	}
	else{
		sayi2=sayi3;
		sayi1=sayi4;
	}

	
	
	int i=sayi2;
	
	int sayac=0;
	while (i<=sayi1){
	
		if (asalmi(i)==true){	
			sayac++;
		}
		i++;
	}
	int dizi[sayac];
	i=sayi2;
	int j=0;
	while(i<=sayi1){
		
		
		if (asalmi(i)==true){
			dizi[j]=i;
			j++;
		}
		i++;
	}
	system("cls");
	cout<<sayi2<<" ve "<<sayi1<<" aras�nda "<<sayac<<" adet asal say� bulundu"<<endl<<endl;
	int t=0;
	while(t<sayac){
		cout<<"Bulunan asal say�lardan biri �udur :  "<<dizi[t]<<endl;
		t++;
	}
	cout<<endl;
	system("pause");
	goto basadon;

	return 0;
	}
	
	

	
	


