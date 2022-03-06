#include <stdio.h>

void main()
{
	int array[10], a;
	int size = sizeof(array) / sizeof(array[0]);
	printf("Bubble Sorting\n");
	printf("masukkan 10 angka acak untuk diurutkan : ");
	for(a=0; a<=9; a++)
	scanf("%d", &array[a]);
	for(int i=1;i<size-1;i++)
 	{
 		for(int j=size-1;j>=i;j--)
 		{
 			if(array[j]<array[j-1])
			{
				int sementara = array[j];
				array[j] = array[j-1];
				array[j-1] = sementara;
			}
 		}
 	}
 	for (int i = 0; i < size; ++i) 
	{
    	printf("%d  ", array[i]);
  	}
}
