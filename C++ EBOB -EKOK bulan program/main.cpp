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
  int n;
  cout<<endl<<"L�tfen EBOB ve EKOK de�erlerini bulmak istedi�iniz toplamda"<<endl<<"ka� tane say� oldu�unu giriniz"<<endl<<endl;
  cin>>n;
  
  if(n<2){
  	system("cls");
  	cout<<endl<<"Hatal� bir say� girdiniz. L�tfen 2 veya daha b�y�k bir say� giriniz"<<endl<<endl;
  	system("pause");
  	
  	goto basadon;
  }
  
  
  int dizi[n];
  system("cls");
  cout<<endl<<"L�tfen EBOB ve EKOK bulmak istedi�iniz "<<n<<" adet say�y� giriniz";
  
  printf("\n\n");
  
for(int i=0;i<n;i++) {
  	  int k;
  	  scanf("%d",&k); 
  	  dizi[i]=abs(k);
  }
  
  
  
  
    int l=0;
    int count=0;
    while(l<n){
      int k=2;
     while(k<dizi[l]){
     	if(dizi[l]%k==0) {
     		count++; 
		 } k++;}l++; }
		 
		 
		 
	int dizi2[count];
	
	l=0;
	int j=-1;
	while(l<n){
     int k=2;
     
     while(k<dizi[l]){
     	if(dizi[l]%k==0) {
     		j++;
     		dizi2[j]=k;
     		
		 } k++; } l++;}
		 
		 
	int s=0;
	int sayi2=0;
	int sayac=0;
	int t=0;
	while(t<count){
		sayi2=0;
		s=0;
		while(s<n){
			if(dizi[s]%dizi2[t]==0){
				sayi2++;
			}s++;}
			if (sayi2==n){
				sayac++;
			} t++;
	}
	
	int dizi3[sayac];
	s=0;
	sayi2=0;
	t=0;
	int k=0;
	while(t<count){
		sayi2=0;
		s=0;
		while(s<n){
			if(dizi[s]%dizi2[t]==0){
				sayi2++;
			}s++;}
			if (sayi2==n){
			
		
				dizi3[k]=dizi2[t];
			 
				
				
		k++;	}  t++;
	}
	
    k=1;
    while(k<sayac){
    	if(dizi3[0]<dizi3[k]){
    		dizi3[0]=dizi3[k];
		} k++;
	}
	
		int toplamBoyut=sizeof(dizi3);
	    int turBoyutu=sizeof(*dizi3);
	    int elemanSayisi=toplamBoyut/turBoyutu;
	    
	    if (elemanSayisi>0){
	    	cout<<endl<<"Girdi�iniz "<<n<<" adet say�n�n EBOB'u �udur: "<<dizi3[0]<<endl<<endl;
		}
		else{
			cout<<endl<<"Girdi�iniz "<<n<<" adet say�n�n EBOB'u �udur: "<<"1"<<endl<<endl;
		}
		
		
	int ikisayiebob(int a,int b);
	
	int i=1;
	while(i<n){
		int ret=ikisayiebob(dizi[0],dizi[i]);
		dizi[0]=(dizi[0]*dizi[i])/ret;
		i++;
	}
	
	cout<<endl<<"Girdi�iniz "<<n<<" adet say�n�n EKOK'u �udur: "<<dizi[0]<<endl<<endl;
  
  	system("pause");
  	system("cls");
  	goto basadon;
			
	return 0;
}


int ikisayiebob(int a,int b){
	int n=2;
	int dizi5[n];
	dizi5[0]=a;
	dizi5[1]=b;
	 int l=0;
    int count=0;
    while(l<n){
      int k=2;
     while(k<dizi5[l]){
     	if(dizi5[l]%k==0) {
     		count++; 
		 } k++;}l++; }
		 
		 
		 
	int dizi2[count];
	
	l=0;
	int j=-1;
	while(l<n){
     int k=2;
     
     while(k<dizi5[l]){
     	if(dizi5[l]%k==0) {
     		j++;
     		dizi2[j]=k;
     		
		 } k++; } l++;}
		 
		 
	int s=0;
	int sayi2=0;
	int sayac=0;
	int t=0;
	while(t<count){
		sayi2=0;
		s=0;
		while(s<n){
			if(dizi5[s]%dizi2[t]==0){
				sayi2++;
			}s++;}
			if (sayi2==n){
				sayac++;
			} t++;
	}
	
	int dizi3[sayac];
	s=0;
	sayi2=0;
	t=0;
	int k=0;
	while(t<count){
		sayi2=0;
		s=0;
		while(s<n){
			if(dizi5[s]%dizi2[t]==0){
				sayi2++;
			}s++;}
			if (sayi2==n){
			
		
				dizi3[k]=dizi2[t];
			 
				
				
		k++;	}  t++;
	}
	
    k=1;
    while(k<sayac){
    	if(dizi3[0]<dizi3[k]){
    		dizi3[0]=dizi3[k];
		} k++;
	}
	
		int toplamBoyut=sizeof(dizi3);
	    int turBoyutu=sizeof(*dizi3);
	    int elemanSayisi=toplamBoyut/turBoyutu;
	    
	    if (elemanSayisi>0){
	    	return dizi3[0];
		}
		else{
			return 1;
		}
		
	
}
