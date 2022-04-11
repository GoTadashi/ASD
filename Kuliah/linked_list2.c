#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node* next;
};

struct node *head;

void brain()
{
	//untuk isi node awal
	struct node *pointer;
	int item;
	pointer = (struct node *) malloc(sizeof(struct node *));
	if(pointer == NULL)
	{
		printf("\n OVERFLOW");
	}
	else
	{
		printf(" Masukkan data : ");
		scanf("%d", &item);
		pointer->data = item;
		pointer->next = head;
		head = pointer;
		printf("\n Data berhasil disimpan di NODE awal!\n");
	}
}

void bott()
{
	//untuk isi node akhir
	struct node *pointer, *temp;
	int item;
	pointer = (struct node *) malloc(sizeof(struct node *));
	if(pointer == NULL)
	{
		printf("\n OVERFLOW");
	}
	else
	{
		printf(" Masukkan data : ");
		scanf("%d", &item);
		pointer->data = item;
		if(head == NULL)
		{
			pointer->next = NULL;
			head = pointer;
			printf("\n Data berhasil disimpan di NODE akhir!\n");
		}
		else
		{
			temp = head;
			while(temp -> next != NULL)
			{
				temp = temp->next;
			}
			temp->next = pointer;
			pointer->next = NULL;
			printf("\n Data berhasil disimpan di NODE akhir!\n");
		}
	}
}

void mid()
{
	//untuk isi node sisipan
	int i, loc, item;
	struct node *pointer, *temp;
	pointer = (struct node *) malloc(sizeof(struct node *));
	if(pointer == NULL)
	{
		printf("\n OVERFLOW");
	}
	else
	{
		printf(" Masukkan data : ");
		scanf("%d", &item);
		pointer->data = item;
		printf(" Mau simpan di lokasi mana : ");
		scanf("%d", &loc);
		temp = head;
		for(i = 0; i < loc; i++)
		{
			temp = temp->next;
			if(temp = NULL)
			{
				printf("\n Data tidak dapat tersimpan");
				return;
			}
		}
		pointer->next = temp->next;
		temp->next = pointer;
		printf("\n NODE berhasil disimpan");
	}
}

void look_dad()
{
	//untuk melihat isi dari linked-list
	struct node *pointer;
	pointer = head;
	if(pointer == NULL)
	{
		printf(" Tidak ada data! \n");
	}
	else
	{
		printf(" Cetak data...\n");
		while(pointer != NULL)
		{
			printf(" %d\n", pointer->data);
			pointer = pointer->next;
		}
	}
}

int main()
{
	int choice = 0;
	while(choice != 5) //5 itu untuk exiplicit
	{
		printf("\n *****Menu Latihan Linked List*****\n");
		printf(" ==================================\n");
		printf("\n 1. Input data di NODE awal\n 2. Input data di NODE akhir\n 3. Insert data di NODE sembarang\n 4. Lihat data dalam linked list\n 5. Keluar!\n");
		printf("\n Pilihanmu? "); scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				brain();
			break;
			case 2:
				bott();
			break;
			case 3:
				mid();
			break;
			case 4:
				look_dad();
			break;
			case 5:
				exit(0);
			break;
			default:
				printf("Masukno Pilihanmu...");
		};
	}
}
