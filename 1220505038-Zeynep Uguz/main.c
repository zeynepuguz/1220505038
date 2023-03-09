#include <stdio.h>
#include <stdlib.h>

void kucukeleman(int *dizi,int boyut) // fonksiyonun kendisi için 1 tekrar 
{
  int kucuk=dizi[0]; // küçük deðiþkeni için 1 kez çalýþacaktýr.
  int i; // i deðiþkeni için 1 kez çalýþacaktýr.
  for(i=0;i<boyut;i++)  // 'i < boyut' -> (boyut+1) kez çalýþacaktýr. Çünkü son kez þartý sorgulatmak için geri dönecektir ; 'i++' -> boyut kadar çalýþacaktýr. => 2n+1 
    {
	if(dizi[i]<kucuk)  //Döngü boyut kadar döneceði için if bloðu boyut kadar çalýþacaktýr. => n
    {
	 kucuk=dizi[i]; // En kötü ihtimali düþünürsek ve ilk durumda if bloðunun içine girmeyeceðinden emin olduðumuz için (boyut-1) kadar çalýþacaktýr. => n-1
	}
   }
	printf("Dizinin en kucuk elemani : %d\n",kucuk);// 1 kez çalýþacaktýr.
}

 // boyut = n => Yürütme Zamaný : T(n)= 1+1+1+(2n+1)+n+n-1+1 = 4n+4 

int main()
{
	int boyut; 
	int i; 
	
	printf("Dizinin eleman sayisini giriniz:"); 
	scanf("%d",&boyut); 

	int sayilar[boyut]; // sayilar[] dizisinin kaç elemanlý olduðunun klavyeden girilen boyut sayýsýna baðlý olduðunu göstermek istedim.

	for(i=0;i<boyut;i++) 
	{
	    printf("Dizinin %d. elemani : ",i+1); 
		scanf("%d",&sayilar[i]); //sayilar[] dizisinin elemanlarýný kullanýcýnýn klavyeden girmesini saðladým.
		
		if(sayilar[i]<0)
		{
			sayilar[i]*=-1;
		}
	}
	kucukeleman(sayilar,boyut); 

	return 0;
}




















