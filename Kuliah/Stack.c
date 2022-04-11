#include <stdio.h>
#include <stdlib.h> //exit
#include <string.h> //strcpy
#include <conio.h> //getch
#define MAX_STACK 5

typedef struct 
{
	int top;
	char data [5][5];
}STACK;

STACK tumpuk;

void inisialisasi()
{
	
	tumpuk.top = -1;	
}

int isfull()
{
	if (tumpuk.top == MAX_STACK -1)
		return 1;
	
	else
		return 0;
}

int isempty()
{
	if (tumpuk.top == -1)
		return 1;
	else 
		return 0;
}

void push(char d[5])
{
	tumpuk.top++;
	strcpy (tumpuk.data[tumpuk.top], d);
}

void pop()
{
	printf ("Daata yang diambil = %s\n", tumpuk.data[tumpuk.top]);
	tumpuk.top--;
}

void printstack()
{
	int i;
	for (i=tumpuk.top;i>=0;i--)
	{
		printf ("Data : %s\n", tumpuk.data[i]);
		printf ("\n");
	}
}

void clean()
{
	tumpuk.top = -1;
}

int main()
{
	int pil;
	inisialisasi();
	char dt[5];
	do
	{
		printf ("===== STACK =====\n");
		printf ("1. Push\n");
		printf ("2. POP\n");
		printf ("3. Print isi Array Stack!\n");
		printf ("4. Hapus isi Array Stack!\n");
		printf ("5. Quit\n");
		printf ("Choose : ");
		scanf ("%d", &pil);
	
		switch (pil)
		{
			case 1: if (isfull() != 1)
			{
				printf ("Data yg di input = ");
				scanf ("%s", dt);
				printf ("\n");
				push (dt);
			}
			else 
				printf ("stack full!\n");
			break;
			
			case 2: if (isempty() != 1)
						pop();
					else 
						printf ("Stack masih kosong!\n");
						printf ("\n");
			break;
			
			case 3: if (isempty() != 1)
						printstack();
					else
						printf ("No Data!\n");
			break;
			
			case 4: clean();
					printf ("Data telah dihapus!\n");
					printf ("\n");
			break;
		}	
		getch;
	}
	while (pil != 5);
	printf ("QUIT BOIS!\n");
	getch;
}

