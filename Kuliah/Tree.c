#include<stdio.h>
#include<stdlib.h>


struct Node{
      int data;
      Node *kiri;
      Node *kanan;
};

void tambah(Node **root, int dataku)
{
      if((*root) == NULL)
      {
            Node *baru;
            baru = new Node;
            baru->data = dataku;
            baru->kiri = NULL;
            baru->kanan = NULL;
            (*root) = baru;
            (*root)->kiri = NULL;
            (*root)->kanan = NULL;
            printf("Data bertambah!");
      }
      //jika data yang akan dimasukkan lebih kecil daripada elemen root, maka akan diletakkan di node sebelah kiri.
      else if(dataku<(*root)->data)
            tambah(&(*root)->kiri, dataku);
     //jika data yang akan dimasukkan lebih besar daripada elemen root, maka akan diletakkan di node sebelah kanan
      else if(dataku>(*root)->data)
            tambah(&(*root)->kanan, dataku);
     //jika saat dicek data yang akan dimasukkan memiliki nilai yang sama dengan data pada root
      else if(dataku == (*root)->data)
            printf("Data sudah ada!");
}

int main()
{
	
	int pil, data;
	struct node *tree;
	do
	{
		system("cls");
		printf(" ================\n");
		printf("  #Program TREE#\n");
		printf(" ================\n");
		printf("\n       Menu\n");
		printf("\n 1. Input Data\n");
		printf(" 2. Preorder\n");
		printf(" 3. Postorder\n");
		printf(" 4. Inorder\n");
		printf(" 5. Keluar\n");
		printf(" Pilihan? ");
		scanf("%d", &pil);
		
		switch(pil)
		{
			case 1:
				printf("/n INPUT\n");
				printf("========\n");
				printf(" Data Baru : ");
				scanf("%d", &data);
				tambah(&tree, data);
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
		}
	}while(pil!=5);
}
