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


using namespace std;

string convertToString(char* a, int size)
{
    int i;
    string s = "";
    for (i = 0; i < size; i++) {
        s = s + a[i];
    }
    return s;
}

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Turkish");
	basadon:
	system("cls");
	int sayi;
	int sayi2;
	int sayi3;
	int sayac=0;
	
	cout<<"Lütfen yazýya dökülmesini istediðiniz sayýyý giriniz"<<endl<<endl;
	cin>>sayi;
	sayi3=sayi;
	for(int i=0;sayi>0;i++){
		sayi=sayi/10;
		sayac+=1;
	
	}
	sayi=sayi3;
	sayi2=sayac;
	int dizi[sayi2];
	for(int i=0;i<=sayi2-1;i++){
		
		dizi[sayi2-1-i]=sayi%10;
		sayi/=10;
	}
	sayi=sayi3;
	
printf("\n");
printf("\n");


string dizi1[10]={"","bir ","iki ","üç ","dört ","beþ ","altý ","yedi ","sekiz ","dokuz "};
string dizi10[10]={"","on ","yirmi ","otuz ","kýrk ","elli ","altmýþ ","yetmiþ ","seksen ","doksan "};
string dizi100[10]={"","yüz ","iki yüz ","üç yüz ","dört yüz ","beþ yüz ","altý yüz ","yedi yüz ","sekiz yüz ","dokuz yüz "};

if(sayi2==10) cout<<dizi1[dizi[0]]<<"milyar "<< dizi100[dizi[1]]<<dizi10[dizi[2]]<<dizi1[dizi[3]]<<"milyon "<<dizi100[dizi[4]]<<dizi10[dizi[5]]<<dizi1[dizi[6]]<<"bin "<<dizi100[dizi[7]]<<dizi10[dizi[8]]<<dizi1[dizi[9]];
if(sayi2==9) cout<< dizi100[dizi[0]]<<dizi10[dizi[1]]<<dizi1[dizi[2]]<<"milyon "<<dizi100[dizi[3]]<<dizi10[dizi[4]]<<dizi1[dizi[5]]<<"bin "<<dizi100[dizi[6]]<<dizi10[dizi[7]]<<dizi1[dizi[8]];
if(sayi2==8) cout<< dizi10[dizi[0]]<<dizi1[dizi[1]]<<"milyon "<<dizi100[dizi[2]]<<dizi10[dizi[3]]<<dizi1[dizi[4]]<<"bin "<<dizi100[dizi[5]]<<dizi10[dizi[6]]<<dizi1[dizi[7]];
if(sayi2==7) cout<< dizi1[dizi[0]]<<"milyon "<<dizi100[dizi[1]]<<dizi10[dizi[2]]<<dizi1[dizi[3]]<<"bin "<<dizi100[dizi[4]]<<dizi10[dizi[5]]<<dizi1[dizi[6]];
if(sayi2==6) cout<< dizi100[dizi[0]]<<dizi10[dizi[1]]<<dizi1[dizi[2]]<<"bin "<<dizi100[dizi[3]]<<dizi10[dizi[4]]<<dizi1[dizi[5]];
if(sayi2==5) cout<< dizi10[dizi[0]]<<dizi1[dizi[1]]<<"bin "<<dizi100[dizi[2]]<<dizi10[dizi[3]]<<dizi1[dizi[4]];
if(sayi2==4) cout<< dizi1[dizi[0]]<<"bin "<<dizi100[dizi[1]]<<dizi10[dizi[2]]<<dizi1[dizi[3]];
if(sayi2==3) cout<< dizi100[dizi[0]]<<dizi10[dizi[1]]<<dizi1[dizi[2]];
if(sayi2==2) cout<< dizi10[dizi[0]]<<dizi1[dizi[1]];
if(sayi2==1) cout<< dizi1[dizi[0]];

	printf("\n");
	printf("\n");
	system("pause");
	goto basadon;
	

	return 0;
}
