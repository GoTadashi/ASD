#include <stdio.h>

void swap(int *a, int *b) 
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int array[], int size) 
{
	for (int step = 0; step < size - 1; step++) 
	{
		int min_idx = step;
		for (int i = step + 1; i < size; i++) 
		{
			if (array[i] < array[min_idx])
				min_idx = i;
		}
		swap(&array[min_idx], &array[step]);
	}
}

void printArray(int array[], int size) 
{
	for (int i = 0; i < size; ++i) 
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}
int main() 
{
	int data[10], a;
	int size = sizeof(data) / sizeof(data[0]);
	printf("Selection Sorting\n");
	printf("masukkan 10 angka acak untuk diurutkan : ");
	for(a=0; a<=9; a++)
	scanf("%d", &data[a]);
	selectionSort(data, size);
	printf("Array setelah disusun dari kecil ke besar (Acsending):\n");
	printArray(data, size);
}
