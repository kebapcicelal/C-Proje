#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "turkish");
	int fiyat=0,secim,saat,menu,ekstra,giris_hakki=3;	
	char  kullanici[10],sifre[10],username[]="admin",password[]="1234";
	

	printf("----------------------- �NTERNET KAFE YE HO�GELD�N�Z -----------------------\n");
	printf("\n --------------------------------- MEN� ---------------------------------\n");
	printf("\n ---------- 1 - Giri� Yap | Herhangi bir tu� - Sistemden ��k�� ------------\n");
	scanf("%d",&menu);
	if(menu==1){
		while(giris_hakki>0){			
			printf("\n ------------------------- Yetkili Giri�i Yap�n -------------------------\n");
			printf("			     (%d Hakk�n�z Var)\n",giris_hakki);
			giris_hakki--;
			printf("\n Kullan�c� Ad� :");
			scanf("%s",&kullanici);
			printf("\n �ifre :");
			scanf("%s",&sifre);
			if (strcmp(kullanici, username) ==0 && strcmp(sifre, password) ==0) {	
				printf("\n Kullanmak �stedi�in Bilgisayar� Se�\n");
				printf("\n 1 - Y�ksek Kalite Bilgisayar | 2 - Orta Kalite Bilgisayar | 3 - D���k Kalite Bilgisayar\n");
				scanf("%d",&secim);
				switch(secim){
					case 1:			
						fiyat+=60;
						printf("Saat ba��na %d TL �deyeceksin \n",fiyat);
						printf("Ka� saat kullanacaks�n (4 SAAT VE �ZER� Y�ZDE 10 �ND�R�M) :");
						scanf("%d",&saat);
						if(saat>=4){
							fiyat*=saat;
							fiyat=fiyat*9/10;
							fiyat+= ekstra_fonksiyon();	
				 			printf("�ndirimli Fiyat : %d TL ",fiyat);				 			
						}
						else{
							fiyat*=saat;
							fiyat+= ekstra_fonksiyon();	
				 			printf("Fiyat : %d TL",fiyat);
						}
						break;	
						

					case 2: 
						fiyat+=50;
						printf("Saat ba��na %d TL �deyeceksin \n",fiyat);
						printf("Ka� saat kullanacaks�n (4 SAAT VE �ZER� Y�ZDE 10 �ND�R�M) :");
						scanf("%d",&saat);
						if(saat>=4){
							fiyat*=saat;
							fiyat=fiyat*9/10;
							fiyat+= ekstra_fonksiyon();	
				 			printf("�ndirimli Fiyat : %d TL",fiyat);
						}
						else{
							fiyat*=saat;
							fiyat+= ekstra_fonksiyon();	
				 			printf("Fiyat : %d TL",fiyat);
						}											
			 			break;
			 			
					case 3:			
						fiyat+=40;
						printf("Saat ba��na %d TL �deyeceksin \n",fiyat);
						printf("Ka� saat kullanacaks�n (4 SAAT VE �ZER� Y�ZDE 10 �ND�R�M) :");
						scanf("%d",&saat);
						if(saat>=4){
							fiyat*=saat;
							fiyat=fiyat*9/10;
							fiyat+= ekstra_fonksiyon();	
				 			printf("�ndirimli Fiyat : %d TL",fiyat);
						}
						else{
							fiyat*=saat;
							fiyat+= ekstra_fonksiyon();	
				 			printf("Fiyat : %d TL",fiyat);
						}					
			 			break;

					default:
						printf("Yanl�� De�er Girdiniz");
						break;
					
				}
			break;			
			}
			else
				printf("\n YANLI� K.ADI/��FRE \n");
				
		}
					
	}	
	else
		printf("Giri� Yapmad�n�z.");
}
int ekstra_fonksiyon(){
	int ekstra,fiyat=0;
	char daha=' ';
	while(1){
		printf("\n------------------------------ EKSTRALAR ------------------------------\n");
		printf("\n 1 = TOST(50TL)  2 = SU(10TL)  3 = KOLA/FANTA(40TL)  Herhangi bir tu� = ALMA :");
		scanf("%d",&ekstra);
		if(ekstra==1){
			fiyat+=50;	
		}
		else if(ekstra==2){
			fiyat+=10;
	
		}
		else if(ekstra==3){
			fiyat+=40;		
		}
		else{
			printf("Ekstra Almad�n�z ====> ");
			break;
		}
		printf("Daha fazla ister misin? (E/H):");
		scanf("%s",&daha);
		if(daha=='e' || daha=='E')
			continue;
		else
			break;
	}
	return fiyat;
}









