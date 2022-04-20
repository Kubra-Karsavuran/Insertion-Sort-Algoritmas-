#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int x=0;
	printf("istenilen Dizi Boyutunu Giriniz:\n");
	scanf("%d", &x);
	
	int A[x];
	srand(time(0));
	int i;
	int j;
	int key;
	
	printf("\nDizinin Orjinal Hali:\n\n");
	
	for(j=0;j<x;j++)
	{
		A[j]=rand()%100;
		printf("Dizimiz:%d\n", A[j]);
	}
	
	for(j=1;j<x;j++)
	{
	    key=A[j];
		i=j-1;
		
		while(i>=0 && A[i]>key)
		{
		   A[i+1]=A[i];
		   A[i]=key;
		   i=i-1;
		}	
		
	}
	
	printf("\nSiraya Sokulmus Hali:\n");
	
	for(j=0;j<x;j++)
	{
		printf("\nDizimiz:%d\t", A[j]);
		
	}
}














