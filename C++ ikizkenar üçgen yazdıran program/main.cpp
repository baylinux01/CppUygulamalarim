#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	basadon:
	system("cls");
	int row;
	printf("Lütfen çizdirmek istediðiniz ikizkenar üçgenin\nyüksekliðini yýldýz biriminden giriniz\n");
	scanf("%d",&row);
	system("cls");
	for(int i=1;i<=row;i++){
		
		for(int j=row;j>i;j--){
		printf(" ");           }
		
	for(int k=0;k<i*2-1;k++){
		printf("*");         }
		
	    printf("\n");
				
	                                        }
	    system("pause");
	    goto basadon;
	
	
	return 0;
                                                       }
