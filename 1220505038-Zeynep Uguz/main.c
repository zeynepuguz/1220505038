#include <stdio.h>
#include <stdlib.h>

void kucukeleman(int *dizi,int boyut) // fonksiyonun kendisi i�in 1 tekrar 
{
  int kucuk=dizi[0]; // k���k de�i�keni i�in 1 kez �al��acakt�r.
  int i; // i de�i�keni i�in 1 kez �al��acakt�r.
  for(i=0;i<boyut;i++)  // 'i < boyut' -> (boyut+1) kez �al��acakt�r. ��nk� son kez �art� sorgulatmak i�in geri d�necektir ; 'i++' -> boyut kadar �al��acakt�r. => 2n+1 
    {
	if(dizi[i]<kucuk)  //D�ng� boyut kadar d�nece�i i�in if blo�u boyut kadar �al��acakt�r. => n
    {
	 kucuk=dizi[i]; // En k�t� ihtimali d���n�rsek ve ilk durumda if blo�unun i�ine girmeyece�inden emin oldu�umuz i�in (boyut-1) kadar �al��acakt�r. => n-1
	}
   }
	printf("Dizinin en kucuk elemani : %d\n",kucuk);// 1 kez �al��acakt�r.
}

 // boyut = n => Y�r�tme Zaman� : T(n)= 1+1+1+(2n+1)+n+n-1+1 = 4n+4 

int main()
{
	int boyut; 
	int i; 
	
	printf("Dizinin eleman sayisini giriniz:"); 
	scanf("%d",&boyut); 

	int sayilar[boyut]; // sayilar[] dizisinin ka� elemanl� oldu�unun klavyeden girilen boyut say�s�na ba�l� oldu�unu g�stermek istedim.

	for(i=0;i<boyut;i++) 
	{
	    printf("Dizinin %d. elemani : ",i+1); 
		scanf("%d",&sayilar[i]); //sayilar[] dizisinin elemanlar�n� kullan�c�n�n klavyeden girmesini sa�lad�m.
		
		if(sayilar[i]<0)
		{
			sayilar[i]*=-1;
		}
	}
	kucukeleman(sayilar,boyut); 

	return 0;
}




















