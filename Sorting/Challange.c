#include <stdio.h>

void bubble_sort(int array[], int size)
{
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
  	printf("\n\n");
}

void exchange_sort(int data[], int size)
{
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
  	printf("\n\n");
}

void main()
{
	int data[]={23,65,30,8,33,24,76,7};
	int size = sizeof(data) / sizeof(data[0]);
	printf("Bubble Sorting\n");
	bubble_sort(data, size);
	printf("Exchange Sorting\n");
	exchange_sort(data, size);	
}
