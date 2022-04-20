#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct node
{
	int data;
	node *kiri;
	node *kanan;
};

void tambah(node **root, int dataku)
{
    if((*root) == NULL)
    {
    	node *baru;
        baru = new node;
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

void preOrder(node *root)
{
    if(root != NULL)
	{
        printf("%d ", root->data);
        preOrder(root->kiri);
        preOrder(root->kanan);
	}
}

void inOrder(node *root)
{
    if(root != NULL)
	{
        inOrder(root->kiri);
        printf("%d ", root->data);
        inOrder(root->kanan);
    }
}

void postOrder(node *root)
{
    if(root != NULL)
	{
        postOrder(root->kiri);
        postOrder(root->kanan);
        printf("%d ", root->data);
    }
}
/*
void hapusdata(node **root, int dataku)
{
	if((*root) != NULL)
    {
    	node *baru;
        baru = new node;
        baru->data = dataku;
        baru->kiri = NULL;
        baru->kanan = NULL;
        (*root) = baru;
        (*root)->kiri = NULL;
        (*root)->kanan = NULL;
        printf("Data berhasil dibersihkan!\n");
    }
    else
        printf("Data masih kosong!\n");
}
*/
void hapusdata(struct node **root, int data)
{
    if (*root == NULL)
        return;
    if (strcmp((*root)->data, data) < 0)
        hapusdata(&(*root)->kiri, data);
    else if (strcmp((*root)->dataku, data) > 0)
        hapusdata(&(*root)->kanan, data);
    else
    {
        if ((*root)->kiri == NULL && (*root)->kanan == NULL)
        {
            free((*root)->data);
            free(*root);
            *root = NULL;
        }
        else if ((*root)->kiri == NULL)
        {
            struct node *temp = *root;
            *root = (*root)->kanan;
            free(temp->data);
            free(temp);
        }
        else if ((*root)->kanan == NULL)
        {
            struct node *temp = *root;
            *root = (*root)->kiri;
            free(temp->data);
            free(temp);
        }
        else
        {
            struct node *temp = (*root)->kanan;
            while (temp->kiri != NULL)
                temp = temp->kiri;
            char *temp_word = (*root)->data;
            (*root)->data = temp->data;
            temp->data = temp_word;
            hapusdata(&(*root)->kanan, temp_word);
        }
    }
}
int main()
{
    int pil, data;
    node *tree;
    tree = NULL;

	do
	{
        system("cls"); //bersihkan layar
        printf("\tPROGRAM TREE Bahasa C");
        printf("\n\t=====================");
        printf("\nMENU");
        printf("\n----\n");
        printf("1. Input Data\n");
        printf("2. Lihat Pre-order\n");
        printf("3. Lihat In-order\n");
        printf("4. Lihat Post-order\n");
        printf("5. Hapus Data\n");
        printf("6. Keluar\n");
        printf("Pilihan kamu? = ");
        scanf("%d", &pil);
        switch(pil)
        {
            case 1 :
            	printf("\nINPUT : ");
                printf("\n-------");
                printf("\nData baru : ");
                scanf("%d", &data);
                tambah(&tree, data);
                break;
            case 2 :
                printf("\nOUTPUT PRE ORDER : ");
                printf("\n------------------\n");
                if(tree!=NULL)
                //panggil fungsi untuk mencetak data secara preOrder
                	preOrder(tree);
                else
                    printf("Masih kosong!");
                break;
            case 3 :
                printf("\nOUTPUT IN ORDER : ");
                printf("\n-----------------\n");
                if(tree!=NULL)
                    //panggil fungsi untuk mencetak data secara preOrder
                    inOrder(tree);
                else
                    printf("Masih kosong!");
                break;
            case 4 :
                printf("\nOUTPUT POST ORDER : ");
                printf("\n------------------\n");
                if(tree!=NULL)
                    //panggil fungsi untuk mencetak data secara postOrder
                    postOrder(tree);
                else
                    printf("Masih kosong!");
                break;
            case 5:
            	hapusdata(&tree, data);
            	break;
        }
            getch();
	}
    while(pil!=5);
}
