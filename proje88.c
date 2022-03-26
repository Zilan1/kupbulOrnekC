#include <stdio.h>
#include <stdlib.h>
    
    int kupbul(int sayi)
    {
    	int sonuc=sayi*sayi*sayi;
    	return sonuc;
	}
    
    
int main() {
	
	int s;
	
	printf("Sayi Girin: ");
	scanf("%d",&s);
	
	kupbul(s);
	
	printf("\nSonuc: %d",kupbul(s));
	
	
	return 0;
}
