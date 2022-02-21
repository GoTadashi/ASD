#include <stdio.h>

void bubble_sort()
{
	for(int i=1;i<n;i++)
 	{
 		for(int j=n-1;j>=i;j--)
 		{
 			if(data[j]<data[j-1]) tukar(j,j-1);
 		}
 	}
}

void exchange_sort()
{
	for (int i=0;i<n-1;i++)
 	{
 		for (int j=(i+1);j<n;j++)
 		{
 			if (data[i]<data[j]) tukar(i,j);
 		}
 	}
}

void main()
{
	
}
