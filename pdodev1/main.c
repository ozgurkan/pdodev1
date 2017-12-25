#include<stdio.h>
#include "kutuphane.h"
#define uzunluk 1000
int MetinUzunlukBul(char a[]){
int i=0;
  while(a[i]!='\0'){
	 i=i+1;
	}
return i;	
}


int main(void){

	char Metin1[uzunluk],Metin2[uzunluk];
	int Metin1Uzunluk=0,Metin2Uzunluk=0;
	printf("1.kelimeyi giriniz:");
	scanf("%s",Metin1);
	printf("2.kelimeyi giriniz:");
	scanf("%s",Metin2);

	Metin1Uzunluk=MetinUzunlukBul(Metin1);
	Metin2Uzunluk=MetinUzunlukBul(Metin2);

	printf("%d  %d \n",Metin1Uzunluk,Metin2Uzunluk);
return 0;	
}
