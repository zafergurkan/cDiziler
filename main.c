#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	//iki sütun ve satırdan oluşan çok boyutlu bir dizi tanımlandı.
	int dizi[2][2];

	//dizilere elaman ataması yapıldı.
	dizi[0][0]=10;
	dizi[0][1]=20;
	dizi[1][0]=30;
	dizi[1][1]=40;

	
	//Diziler ekrana yazdırıldı.
	printf("%d",dizi[0][0]);
	printf("   ");
	printf("%d\n",dizi[0][1]);
	
	printf("%d",dizi[1][0]);
	printf("   ");
	printf("%d\n",dizi[1][1]);
	return 0;
}
