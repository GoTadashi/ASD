#include <stdio.h>

void insertion_sort(int data[], int size)
{
	int temp;
	for(int i=1;i<size;i++)
	{
		temp = data[i];
		int j = i-1;
		while(data[j]>temp && j>=0)
		{
			data[j+1] = data[j];
			j--;
		}
		data[j+1] = temp;
	}
	for (int i = 0; i < size; ++i) 
	{
    	printf("%d  ", data[i]);
  	}
}

void main()
{
	int data[10], a;
	int size = sizeof(data) / sizeof(data[0]);
	printf("Insertion Sorting\n");
	printf("masukkan 10 angka acak untuk diurutkan : ");
	for(a=0; a<=9; a++)
	scanf("%d", &data[a]);
	insertion_sort(data, size);
}
