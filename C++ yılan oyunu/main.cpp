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

char tuslar[256];
char sahne[51][71];
int width=71;
int height=51;
COORD coord= {0,0};
int i=0;
int j=0;
bool gameover=false;
int sx=35;
int sy=21;
char button;

int mx;
int my;
int uzunluk=1;


 
 struct yilan
{
 public:
 	char karakter;
 	char yon;
 	int x;
 	int y;
 	
 	
 	
 	
};

yilan yilanparcasi[10000];



void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void sinirlariciz()
{
	i=0;
	while(i<height)
	{ 
	  j=0;
	  while(j<width)
	  {
	  	if(i==0|| i==height-1) printf("-");
	  	else if (j==0 && i!=0 && i!=height-1) printf("|");
		else if (j==width-1 && i!=0 && i!=height-1) printf("|");
	  	else printf(" ");
	  	j++;
	  }
	  printf("\n");
	  i++;
	}
}

void randommeyveyeriata()
{
	srand(time(NULL));
	mx=3+rand()%65;
	my=3+rand()%45;
	gotoxy(mx,my); 
	printf("M");
	
	
	
}

void yilanolustur()
{
    
	yilanparcasi[0].x=35;
    yilanparcasi[0].y=21;
    yilanparcasi[0].yon='r';
    	
}

void yilaniyerlestir()
{
	for(i=0;i<=uzunluk;i++)
		    {
		  	 
		  	 if(yilanparcasi[i].yon=='u') { gotoxy(yilanparcasi[i].x,yilanparcasi[i].y); printf("^"); }
	         if(yilanparcasi[i].yon=='d') { gotoxy(yilanparcasi[i].x,yilanparcasi[i].y); printf("V"); }
	         if(yilanparcasi[i].yon=='r') { gotoxy(yilanparcasi[i].x,yilanparcasi[i].y); printf(">"); }
	         if(yilanparcasi[i].yon=='l') { gotoxy(yilanparcasi[i].x,yilanparcasi[i].y); printf("<"); }
		    }
		    
}

void yilaninsinirlardangecmesinisagla()
{          for(i=0;i<=uzunluk;i++)
{
	       if (yilanparcasi[i].x<3)        {  yilanparcasi[i].x=width-3;}       
		   if (yilanparcasi[i].y<3)        {  yilanparcasi[i].y=height-3;}      
		   if (yilanparcasi[i].x>width-3)  {  yilanparcasi[i].x=3;}    
		   if (yilanparcasi[i].y>height-3) {  yilanparcasi[i].y=3;}   
	
}
	       
}

void gameoverkontrolet()
{
	for(i=5;i<=uzunluk;i++)
			{
				if(yilanparcasi[0].x==yilanparcasi[i].x && yilanparcasi[0].y==yilanparcasi[i].y) gameover=true;
			}
}


void ozellikleriyilanparcalarinaaktar()
{
	for(i=uzunluk;i>=1;i--)
	         {
	    	   yilanparcasi[i].x=yilanparcasi[i-1].x;
	    	   yilanparcasi[i].y=yilanparcasi[i-1].y;
	    	   yilanparcasi[i].yon=yilanparcasi[i-1].yon;
		     }
}

void meyveyenmisseyenileveuzunluguarttir()
{
	for(i=0;i<=uzunluk;i++)
	{
		if(yilanparcasi[0].x==mx && yilanparcasi[0].y==my) { randommeyveyeriata();uzunluk+=10; }
		else if(yilanparcasi[i].x==mx && yilanparcasi[0].y==my) { randommeyveyeriata(); }
		break;
	}
	
}

void tuskontrolettusabasilmissahangisibak()
{
	if(kbhit) button= getch();
}


void yilaninbasinayonata()
{
	        if(button=='w' && yilanparcasi[0].yon!='d') { yilanparcasi[0].yon='u'; }
    		else if (button=='s'&& yilanparcasi[0].yon!='u') { yilanparcasi[0].yon='d'; }
    		else if (button=='d'&& yilanparcasi[0].yon!='l') { yilanparcasi[0].yon='r'; }
    		else if (button=='a'&& yilanparcasi[0].yon!='r') { yilanparcasi[0].yon='l'; }
    		else if (button=='w'&& yilanparcasi[0].yon=='d') { yilanparcasi[0].yon='d'; }
    		else if (button=='s'&& yilanparcasi[0].yon=='u') { yilanparcasi[0].yon='u'; }
    		else if (button=='d'&& yilanparcasi[0].yon=='l') { yilanparcasi[0].yon='l'; }
    		else if (button=='a'&& yilanparcasi[0].yon=='r') { yilanparcasi[0].yon='r'; }
    	
}

void yilanituslayurut()
{
	        if(button=='w' && yilanparcasi[0].yon!='d') { yilanparcasi[0].y--;  }
    		else if (button=='s'&& yilanparcasi[0].yon!='u') {yilanparcasi[0].y++;  }
    		else if (button=='d'&& yilanparcasi[0].yon!='l') {yilanparcasi[0].x++;  }
    		else if (button=='a'&& yilanparcasi[0].yon!='r') {yilanparcasi[0].x--;  }
    		else if (button=='w'&& yilanparcasi[0].yon=='d') {yilanparcasi[0].y++;  }
    		else if (button=='s'&& yilanparcasi[0].yon=='u') {yilanparcasi[0].y--;  }
    		else if (button=='d'&& yilanparcasi[0].yon=='l') {yilanparcasi[0].x--;  }
    		else if (button=='a'&& yilanparcasi[0].yon=='r') {yilanparcasi[0].x++;  }
    		
}


void klavyeoku(char tuslar[])
{
	for(int x=0;x<256;x++)
	tuslar[x]=(char) (GetAsyncKeyState(x) >> 8);
}

void klavyekontrol()
{
	klavyeoku(tuslar);
	if(tuslar['W']!=0) button='w';
	if(tuslar['S']!=0) button='s';
	if(tuslar['D']!=0) button='d';
	if(tuslar['A']!=0) button='a';
	
}

yilanparcalarininyonlerinitemizle()
{
	for(i=0;i<=uzunluk;i++)
	{
		
		yilanparcasi[i].yon=' ';
	}
}

void set_cursor()
{
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = false;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}
void yenidenoyna()
{
	set_cursor();
	uzunluk=1;
	gotoxy(0,0);
	sinirlariciz();
	
	randommeyveyeriata();
	 yilanolustur();
	 
	 yilaniyerlestir();
   	 system("pause>0"); 
		     
		     if (button=='w'|| button=='a' || button=='s' || button=='d') 
			 {  for(i=0;i<=uzunluk;i++)
			 {
			 	gotoxy(yilanparcasi[i].x,yilanparcasi[i].y); printf(" ");
			 }
			 
			 }
	
	gameover=false;
		
   	    
	while(gameover==false)
	{
		
		
    	gotoxy(yilanparcasi[uzunluk].x,yilanparcasi[uzunluk].y); 
   	    printf(" ");
   	   
   	    yilaninbasinayonata();
   	    yilanituslayurut();
		
	    
	    ozellikleriyilanparcalarinaaktar();
	    yilaninsinirlardangecmesinisagla();
		yilaniyerlestir();
		
		klavyekontrol();
		
		Sleep(80);
		meyveyenmisseyenileveuzunluguarttir();
		gameoverkontrolet();
		
	}
	
	yilanparcalarininyonlerinitemizle();
	yenidenoyna();
	
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Turkish");
	
	
	set_cursor();
	uzunluk=1;
	gotoxy(0,0);
	sinirlariciz();
	
	randommeyveyeriata();
	 yilanolustur();
	 
	 yilaniyerlestir();
   	 system("pause>0"); 
		     
		     if (button=='w'|| button=='a' || button=='s' || button=='d') 
			 {  for(i=0;i<=uzunluk;i++)
			 {
			 	gotoxy(yilanparcasi[i].x,yilanparcasi[i].y); printf(" ");
			 }
			 
			 }
	
	gameover=false;
		
   	    
	while(gameover==false)
	{
		
		
    	gotoxy(yilanparcasi[uzunluk].x,yilanparcasi[uzunluk].y); 
   	    printf(" ");
   	   
   	    yilaninbasinayonata();
   	    yilanituslayurut();
		
	    
	    ozellikleriyilanparcalarinaaktar();
	    yilaninsinirlardangecmesinisagla();
		yilaniyerlestir();
		
		klavyekontrol();
		
		Sleep(80);
		meyveyenmisseyenileveuzunluguarttir();
		gameoverkontrolet();
		
	}
	
	yilanparcalarininyonlerinitemizle();
	yenidenoyna();
	
	

	return 0;
}
