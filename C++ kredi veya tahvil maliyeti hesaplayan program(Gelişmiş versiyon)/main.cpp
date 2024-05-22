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
	cout<<endl<<endl<<"Kredi veya tahvil maliyeti hesaplayan programa hoþgeldiniz"<<endl<<endl;
	cout<<"Bankadan çekilen kredi tutarýný veya ihraç"<<endl<<"edilen tahvillerin toplam nominal deðerini giriniz"<<endl<<endl;
	double tutar;
	cin>>tutar;
	cout<<endl<<endl<<"Masraflar ve iskontolar sonucu iþletmenin elde ettiði net para miktarýný giriniz"<<endl<<endl;
	double netpara;
	cin>>netpara;
	cout<<endl<<endl<<"Lütfen yýl bazýnda vade sayýsýný giriniz"<<endl<<endl;
	int n;
	cin>>n;
	
	cout<<endl<<endl<<"Faiz ödemesinin yýlda kaç kez yapýlacaðýný giriniz"<<endl<<endl;
	int kackez;
	cin>>kackez;
	
	n=n*kackez;
	
	
	cout<<endl<<endl<<"Vergi oranýný yüzde olarak giriniz. Örneðin 30.65 þeklinde"<<endl<<endl;
	double vergi;
	cin>>vergi;
	vergi=vergi/100;
	
	cout<<endl<<endl<<"Faiz miktarýný yüzde olarak giriniz. Örneðin; 30.46 þeklinde"<<endl<<endl;
	double faiz;
	cin>>faiz;
	faiz=faiz/100;
	faiz=faiz/kackez;
	
	cout<<endl<<endl<<"Anapara ödemesinin kaç taksitte yapýlacaðýný giriniz"<<endl<<endl;
	int anaparataksit;
	cin>>anaparataksit;
	
	double dizianaparataksittutarlar[anaparataksit];
	double dizianaparataksithangitaksitle[anaparataksit];
	int o=0;
	while(o<anaparataksit){
		cout<<endl<<endl<<"Lütfen anaparanýn "<<o+1<<". taksit tutarýný giriniz"<<endl<<endl;
		cin>>dizianaparataksittutarlar[o];
		cout<<endl<<endl<<"Girdiðiniz "<<o+1<<". anapara taksit tutarýnýn ödemeniz gereken "<<endl<<n<<" adet taksitten hangisi içerisinde ödeneceðini giriniz"<<endl<<endl;
		cin>>dizianaparataksithangitaksitle[o];
		o++;
	}
	

	
	double dizianaparataksittutarlarkumulatif[o];
	int d=0;
	int a=0;
	while(d<o){
		a=0;
		while (a<=d){
			dizianaparataksittutarlarkumulatif[d]+=dizianaparataksittutarlar[a];
			a++;
		}
		d++;	
	}
	

	
	double diziduzenlenmistutarlar[n];
	
	int u=0;
	int l=0;

	int t=0;
	while (u<n){
		
		diziduzenlenmistutarlar[u]=tutar;
	u++;
	}
	u=0;
	while(u<n){
		
			if (u==dizianaparataksithangitaksitle[l]){
			
			int t=u;
			while (t<n){
				diziduzenlenmistutarlar[t]=tutar-dizianaparataksittutarlarkumulatif[l];
				t++;
			}
			
		l++;
		}
	 	
		u++;
		      	}
	

	
	double diziduzenlenmisfaiztutarlar[n];
	double dizivergiler[n];
	double dizianaparataksittutarlar2[n];
	double dizinetcikislar[n];
	
	u=0;
	l=0;
	while(u<n){
		
			if (u==dizianaparataksithangitaksitle[l]-1){
			diziduzenlenmisfaiztutarlar[u]=diziduzenlenmistutarlar[u]*faiz;
			dizivergiler[u]=diziduzenlenmistutarlar[u]*faiz*vergi;
			dizianaparataksittutarlar2[u]=dizianaparataksittutarlar[l];
			dizinetcikislar[u]=diziduzenlenmistutarlar[u]*faiz+dizianaparataksittutarlar[l]-diziduzenlenmistutarlar[u]*faiz*vergi;
	
		l++;
		}
		
		
		else{
			diziduzenlenmisfaiztutarlar[u]=diziduzenlenmistutarlar[u]*faiz;
			dizivergiler[u]=diziduzenlenmistutarlar[u]*faiz*vergi;
			dizianaparataksittutarlar2[u]=0;
			dizinetcikislar[u]=diziduzenlenmistutarlar[u]*faiz-diziduzenlenmistutarlar[u]*faiz*vergi;
		}
		u++;
		
	}
	
	double dizi2[n];
	
	double r=2.0001;

	int z=0;
	int g=1;
	while(z<n){
		dizi2[z]=dizinetcikislar[z]/pow(r,g);
		z++;
		g++;
	}
	
	z=0;
	int toplam=0;
	
	while (z<n){
		toplam=toplam+dizi2[z];
		z++;
	}
	
	
	while(abs((netpara-toplam)>0.001)){
		
	r=r-0.00001;
	z=0;
	int g=1;
	while(z<n){
		dizi2[z]=dizinetcikislar[z]/pow(r,g);
		z++;
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
	                                                
	                                                  
	const char i='i';
	
	int sayacduzenlenmisfaiztutarlar[n];
	int f=0; // Burada duzenlenmisfaiztutarlar dizisinin elemanlarýnýn karakter uzunluklarýný bulup sayaca aktarmaya çalýþtým
	while(f<n){
	int bolumduzenlenmisfaiztutarlar[n];
	
	sayacduzenlenmisfaiztutarlar[f]=0;
	bolumduzenlenmisfaiztutarlar[f]=diziduzenlenmisfaiztutarlar[f];
	if(bolumduzenlenmisfaiztutarlar[f]==0) sayacduzenlenmisfaiztutarlar[f]++;
	while(bolumduzenlenmisfaiztutarlar[f]!=0){
		bolumduzenlenmisfaiztutarlar[f]=bolumduzenlenmisfaiztutarlar[f]/10;
		sayacduzenlenmisfaiztutarlar[f]++;
		
	}f++;}
	
	int sayacvergiler[n];
	f=0; // Burada dizivergiler dizisinin elemanlarýnýn karakter uzunluklarýný bulup sayaca aktarmaya çalýþtým
	while(f<n){
	int bolumvergiler[n];
	
	sayacvergiler[f]=0;
	bolumvergiler[f]=dizivergiler[f];
	if(bolumvergiler[f]==0) sayacvergiler[f]++;
	while(bolumvergiler[f]!=0){
		bolumvergiler[f]=bolumvergiler[f]/10;
		sayacvergiler[f]++;
		
	}f++;}
	
	int sayacanaparataksittutarlar2[n];
	f=0; // Burada dizianaparataksittutarlar2 dizisinin elemanlarýnýn karakter uzunluklarýný bulup sayaca aktarmaya çalýþtým
	while(f<n){
	int bolumanaparataksittutarlar2[n];
	
	sayacanaparataksittutarlar2[f]=0;
	bolumanaparataksittutarlar2[f]=dizianaparataksittutarlar2[f];
	if(bolumanaparataksittutarlar2[f]==0) sayacanaparataksittutarlar2[f]++;
	while(bolumanaparataksittutarlar2[f]!=0){
		bolumanaparataksittutarlar2[f]=bolumanaparataksittutarlar2[f]/10;
		sayacanaparataksittutarlar2[f]++;
		
	}f++;}
	
	
	int sayacnetcikislar[n];
	f=0; // Burada dizinetcikislar dizisinin elemanlarýnýn karakter uzunluklarýný bulup sayaca aktarmaya çalýþtým
	while(f<n){
	int bolumnetcikislar[n];
	
	sayacnetcikislar[f]=0;
	bolumnetcikislar[f]=dizinetcikislar[f];
	if(bolumnetcikislar[f]==0) sayacnetcikislar[f]++;
	while(bolumnetcikislar[f]!=0){
		bolumnetcikislar[f]=bolumnetcikislar[f]/10;
		sayacnetcikislar[f]++;
		
	}f++;}
	
	cout<<endl<<endl;
	printf("Taksit No");
	int k=1;
	while(k<5+1){
		if(k/10==0) printf("            %d",k);
		else if (k/10!=0) printf("           %d",k);
		k++;
	}
	cout<<endl;
	printf("—————————");
	k=1;
	while(k<5+1){
		if(k/10==0) printf("   ——————————",k);
		else if (k/10!=0) printf("   ——————————",k);
		k++;
	}
	
	cout<<endl<<endl;
	
	printf("Faiz        ");
	k=0;
	while(k<5) {
		f=0;
		while(f<10-sayacduzenlenmisfaiztutarlar[k]){
			printf(" ");
			f++;
		}
		
		printf("%.0lf   ",diziduzenlenmisfaiztutarlar[k]);
		k++;
	}    
	cout<<endl<<endl;
	
	printf("Vergi       ");
	k=0;
	while(k<5) {
		f=0; 
		while(f<10-sayacvergiler[k]){
			printf(" ");
			f++;
		}
			printf("%.0lf   ",dizivergiler[k]);
		k++;
	} 
	  
	cout<<endl<<endl;
	
	printf("Anapara     ");
	k=0;
	while(k<5) {
		    f=0; 
			while(f<10-sayacanaparataksittutarlar2[k]){
			printf(" ");
			f++;
		}
			printf("%.0lf   ",dizianaparataksittutarlar2[k]);
		k++;
	}  
	
	cout<<endl<<endl;
	
	printf("Net Çýkýþ   ");
	k=0; 
	while(k<5) {
			f=0; 
			while(f<10-sayacnetcikislar[k]){
			printf(" ");
			f++;
		}
			printf("%.0lf   ",dizinetcikislar[k]);
		k++;
	}
	
	cout<<endl<<endl<<endl;
	
	
       
    int p=10;
    k=p-4;
    if(n>=10 && n<1000){
    	
    	while (p<=n){
    
    	
	cout<<endl<<endl;
	
	if(p<=n){
		printf("Taksit No");
	k=p-4;
	while(k<p+1 && k<n+1){
		if(k/10==0) printf("            %d",k);
		else if ((k/10)/10==0) printf("           %d",k);
		else if ((k/10)/10!=0) printf("          %d",k);
		k++;
	}
		cout<<endl;
	printf("—————————");
	k=p-4;
	while(k<p+1 && k<n+1){
		if(k/10==0) printf("   ——————————",k);
		else if ((k/10)/10==0) printf("   ——————————",k);
		else if ((k/10)/10!=0) printf("   ——————————",k);
		k++;
	}
	
	cout<<endl<<endl;
	
	printf("Faiz        ");
	k=p-5;
	while(k<p && k<n) {
		f=0;
		while(f<10-sayacduzenlenmisfaiztutarlar[k]){
			printf(" ");
			f++;
		}
		
		printf("%.0lf   ",diziduzenlenmisfaiztutarlar[k]);
		k++;
	}    
	
	cout<<endl<<endl;
	
	printf("Vergi       ");
	k=p-5;
	while(k<p && k<n) {
		f=0; 
		while(f<10-sayacvergiler[k]){
			printf(" ");
			f++;
		}
			printf("%.0lf   ",dizivergiler[k]);
		k++;
	}   
	
	cout<<endl<<endl;
	
	printf("Anapara     ");
	k=p-5;
	while(k<p && k<n) {
		    f=0; 
			while(f<10-sayacanaparataksittutarlar2[k]){
			printf(" ");
			f++;
		}
			printf("%.0lf   ",dizianaparataksittutarlar2[k]);
		k++;
	}  
	
	cout<<endl<<endl;
	
	printf("Net Çýkýþ   ");
	k=p-5; 
	while(k<p && k<n) {
			f=0; 
			while(f<10-sayacnetcikislar[k]){
			printf(" ");
			f++;
		}
			printf("%.0lf   ",dizinetcikislar[k]);
		k++;
	}
	
	
	}
	
	 p+=5; k=p-4; cout<<endl<<endl;
	}
	}
	
	cout<<endl<<endl;
	k=p-4;
	t=k;
	if(p>=n && n>10){
		
			if (k<n+1) printf("Taksit No");
	k=t;
	while(k<n+1){
		if(k/10==0) printf("            %d",k);
		else if ((k/10)/10==0) printf("           %d",k);
		else if ((k/10)/10!=0) printf("          %d",k);
		k++;
	}
		cout<<endl;
	k=t;
	if(k<n+1) printf("—————————");
	
	while(k<n+1){
		if(k/10==0) printf("   ——————————",k);
		else if ((k/10)/10==0) printf("   ——————————",k);
		else if ((k/10)/10!=0) printf("   ——————————",k);
		k++;
	}
	
	cout<<endl<<endl;
	k=t;
	if(k<n+1) printf("Faiz        ");
	k=t-1;
	while(k<n) {
		f=0;
		while(f<10-sayacduzenlenmisfaiztutarlar[k]){
			printf(" ");
			f++;
		}
		
		printf("%.0lf   ",diziduzenlenmisfaiztutarlar[k]);
		k++;
	}    
	
	cout<<endl<<endl;
	k=t;
	if (k<n+1) printf("Vergi       ");
	k=t-1;
	while(k<n) {
		f=0; 
		while(f<10-sayacvergiler[k]){
			printf(" ");
			f++;
		}
			printf("%.0lf   ",dizivergiler[k]);
		k++;
	}   
	
	cout<<endl<<endl;
	k=t;
	if (k<n+1) printf("Anapara     ");
	k=t-1;
	while(k<n) {
		    f=0; 
			while(f<10-sayacanaparataksittutarlar2[k]){
			printf(" ");
			f++;
		}
			printf("%.0lf   ",dizianaparataksittutarlar2[k]);
		k++;
	}  
	
	cout<<endl<<endl;
	k=t;
	if (k<n+1) printf("Net Çýkýþ   ");
	k=t-1; 
	while(k<n) {
			f=0; 
			while(f<10-sayacnetcikislar[k]){
			printf(" ");
			f++;
		}
			printf("%.0lf   ",dizinetcikislar[k]);
		k++;
	}}
	
	
	cout<<endl<<endl<<endl<<endl;
    
	
	
	
		
	
	
	int sayacnetpara=0;
	
	k=netpara;
	if (k==0){sayacnetpara=1;}
	f=0;
	while(k!=0){
		k=k/10;
		sayacnetpara++;}
	printf("            ");
	k=0; 
	while(k<5) {
			f=0; 
			while(f<10-sayacnetcikislar[k]){
			printf(" ");
			f++;
		}
			printf("%.0lf   ",dizinetcikislar[k]);
		k++;
	}
	cout<<endl;		
	f=0;
	while (f<10-sayacnetpara) {
		printf(" ");
		f++;
	}
	printf("%.0lf= ",netpara);
	
	k=0;
	while(k<5){
		printf("——————————");
		if (k<4) printf(" + ");
		k++;
	}

	printf("                 ");
	f=1;
		while(f<6){
		if(kackez==1 && f<10){
			printf("    (1+i)^%d  ",f);
		}
		else if(kackez==1 && f>=10){
			printf("   (1+i)^%d  ",f);
		}
		else if(kackez>1 && kackez<10 && f<10){
			printf("  (1+i/%d)^%d  ",kackez,f);
		} 
		else if(kackez>1 && kackez<10 && f>=10){
			printf(" (1+i/%d)^%d  ",kackez,f);
		}
		else if(kackez>=10 && f<10){
			printf(" (1+i/%d)^%d  ",kackez,f);
		}
		else if(kackez>=10 && f>=10){
			printf("(1+i/%d)^%d  ",kackez,f);
		}
		f++;
	}
	if (n>5 && n<1000){
		cout<<endl<<endl;
	
	p=10;
	k=p-4;
	while(p<n){
	k=p-4;
	printf("            ");
	k=p-4; 
	while(k-1<p) {
			f=0; 
			while(f<10-sayacnetcikislar[k-1]){
			printf(" ");
			f++;
		}
			printf("%.0lf   ",dizinetcikislar[k-1]);
		k++;
	}	
	cout<<endl;
	k=p-4;
	if (k-1<p) printf("          + ");
		k=p-4;
	while(k-1<p){
		printf("——————————");
		if(k<p) printf(" + ");
		k++;
	}
	cout<<endl;
		printf("           ");
	k=p-4;
	while(k<p+1){
		if(kackez==1 && k<10){
			printf("    (1+i)^%d  ",k);
		}
		else if(kackez==1 && k>=10 && k<100){
			printf("   (1+i)^%d  ",k);
		}
		else if(kackez==1 && k>=100 && k<1000){
			printf("  (1+i)^%d  ",k);
		}
		else if(kackez>1 && kackez<10 && k<10){
			printf("  (1+i/%d)^%d  ",kackez,k);
		} 
		else if(kackez>1 && kackez<10 && k>=10 && k<100){
			printf(" (1+i/%d)^%d  ",kackez,k);
		}
		else if(kackez>1 && kackez<10 && k>=100 && k<1000){
			printf("(1+i/%d)^%d  ",kackez,k);
		}
		else if(kackez>=10 && k<10){
			printf(" (1+i/%d)^%d  ",kackez,k);
		}
		else if(kackez>=10 && k>=10 && k<100){
			printf("(1+i/%d)^%d  ",kackez,k);
		}
		else if(kackez>=10 && k>=100 && k<1000){
			printf("(1+i/%d)^%d  ",kackez,k);
		}
		k++;
	}
		p+=5; k=p-4; cout<<endl<<endl;
	}}
	
	
	if(p>=n){
			while(k<=n){
	k=p-4;
	printf("            ");
	k=p-4; 
	while(k-1<n) {
			f=0; 
			while(f<10-sayacnetcikislar[k-1]){
			printf(" ");
			f++;
		}
			printf("%.0lf   ",dizinetcikislar[k-1]);
		k++;
	}	
	cout<<endl;
	k=p-4;
	if (k-1<n) printf("          + ");
		k=p-4;
	while(k-1<n){
		printf("——————————");
		if(k<n) printf(" + ");
		k++;
	}
	cout<<endl;
		printf("           ");
	k=p-4;
	while(k<n+1){
	if(kackez==1 && k<10){
			printf("    (1+i)^%d  ",k);
		}
		else if(kackez==1 && k>=10 && k<100){
			printf("   (1+i)^%d  ",k);
		}
		else if(kackez==1 && k>=100 && k<1000){
			printf("  (1+i)^%d  ",k);
		}
		else if(kackez>1 && kackez<10 && k<10){
			printf("  (1+i/%d)^%d  ",kackez,k);
		} 
		else if(kackez>1 && kackez<10 && k>=10 && k<100){
			printf(" (1+i/%d)^%d  ",kackez,k);
		}
		else if(kackez>1 && kackez<10 && k>=100 && k<1000){
			printf("(1+i/%d)^%d  ",kackez,k);
		}
		else if(kackez>=10 && k<10){
			printf(" (1+i/%d)^%d  ",kackez,k);
		}
		else if(kackez>=10 && k>=10 && k<100){
			printf("(1+i/%d)^%d  ",kackez,k);
		}
		else if(kackez>=10 && k>=100 && k<1000){
			printf("(1+i/%d)^%d  ",kackez,k);
		}
		k++;
	}
		p+=5; k=p-4; cout<<endl<<endl;
	}
		
	}
		cout<<endl<<endl;
	
	

	
	                                             
	double maliyet=(r-1)*kackez*100;
	
	cout<<endl<<endl<<endl;
	printf("Kredi veya tahvilin yýllýk maliyeti yaklaþýk yüzde %.2lf olarak hesaplanmýþtýr",maliyet); 
	
	cout<<endl<<endl;
	
	system("pause");                                     
	goto basadon;                                                
	                                                  
	return 0; }
	
	
	
	
	
	
