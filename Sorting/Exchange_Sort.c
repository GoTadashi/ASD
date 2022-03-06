#include <stdio.h>

void main()
{
	int data[10], a;
	int size = sizeof(data) / sizeof(data[0]);
	printf("masukkan 10 angka acak untuk diurutkan : ");
	for(a=0; a<=9; a++)
	scanf("%d", &data[a]);
	for (int i=0;i<size-1;i++)
 	{
 		for (int j=(i+1);j<size;j++)
 		{
 			if (data[i]>data[j])
 			{
 				int sementara = data[i];
				data[i] = data[j];
				data[j] = sementara;
 			}
 		}
 	}
 	for (int i = 0; i < size; ++i) 
	{
    	printf("%d  ", data[i]);
  	}
}
