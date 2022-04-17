#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
 
struct node *head;

void awal(){
	struct node *ptr;
	int item;
	ptr = (struct node *) malloc(sizeof(struct node *));
	if(ptr == NULL){
		printf("\n Overflow");
	}
	else {
		printf("masukkan data : \n");
		scanf("%d", &item);
		ptr->data = item;
		ptr->next = head;
		head = ptr;
		printf("data berhasil tersimpan di NODE awal!\n");
	}
}

void akhir(){
	struct node *ptr, *temp;
	int item;
	ptr = (struct node *) malloc(sizeof(struct node *));
	if(ptr == NULL)
	{
		printf("\n Overflow");
	}
	else {
		printf("masukkan data : ");
		scanf("%d", &item);
		ptr->data = item;
		if(head == NULL){
			ptr->next = NULL;
			head = ptr;
			printf("data berhasil tersimpan di NODE awal!\n");
		}
		else{
			temp = head;
			while(temp -> next != NULL){
				temp = temp->next;
			}
			temp->next = ptr;
			ptr->next = NULL;
			printf("Data berhasil disimpan di NODE akhir!\n");
		}
	}
}

void sembarang(){
    int i,loc,item;
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\n overflow");
    }
    else
    {
        printf("masukkan data :");
        scanf("%d", &item);
        ptr->data = item;
        printf("mau simpan di lokasi mana?");
        scanf("%d", &loc);
        temp = head;
        for(i=0;i<loc;i++)
        {
            temp = temp->next;
            if(temp == NULL){
                printf("tidak dapat disimpan\n");
                return;
            }
        }
    }
    ptr->next = temp->next;
    temp->next = ptr;
    printf("\n NODE berhasil disimpan!\n");
}

void lihat(){
	struct node *ptr;
	ptr = head;
	if(ptr == NULL){
		printf("tidak ada data!!!\n");
	}
	else{
		printf("cetak data....");
		while(ptr!=NULL)
		{
			printf("%d", ptr->data);
			ptr = ptr->next;
		}
	}
}

int main (){
	int pilihan = 0;
	while(pilihan != 5) //5 itu untuk explicit
	{
		printf("==========================================\n");
		printf(" ******* Menu Latihan Linked List *******\n");
		printf("==========================================\n");
		printf("\n1. Input data di NODE awal \n");
		printf("2. Input data di Node akhir\n");
		printf("3. Input data di NODE sembarang\n");
		printf("4. Lihat data dalam Linked List\n");
		printf("5. Keluar");
		printf("\n"); scanf("%d", &pilihan);
		
		switch(pilihan)
		{
			case 1:
				awal();
				break;
				
			case 2:
				akhir();
				break;
			
			case 3:
				sembarang();
				break;
				
			case 4:
				lihat();
				printf("\n");
				break;
				
			case 5:
				exit(0);
				break;
				
			default:
			printf("masukan pilihan");
				
		}
	}
}
