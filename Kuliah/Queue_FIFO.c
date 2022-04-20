#include <stdio.h>
#define MAX 5

typedef struct{
	int data[MAX];
	int head;
	int tail;
} queue;

queue antrian;

void awal()
{
	antrian.head=antrian.tail=-1;
}

int kosong()
{
	if(antrian.tail==-1)
		return 1;
	else
		return 0;
}

int penuh()
{
	if(antrian.tail==MAX-1)
		return 1;
	else
		return 0;
}

int enqueue(int data)
{
	if(kosong()==1)
	{
		antrian.head=antrian.tail=0;
		antrian.data[antrian.tail]=data;
		printf(" %d MASUK!\n", antrian.data[antrian.tail]);
		void tampil();
		{
			int i;
			if(kosong()==0)
			{
				for(i=antrian.head; i<=antrian.tail; i++)
				{
					printf(" %d\n", antrian.data[i]);
				}
			}
			else
				printf("\n isi antrian kosong\n");
		}
	}
	else if(penuh()==0)
	{
		antrian.tail++;
		antrian.data[antrian.tail]=data;
		printf(" %d MASUK!\n", antrian.data[antrian.tail]);
	}
}

int dequeue()
{
	int i;
	int antri = antrian.data[antrian.head];
	for(i = antrian.head; i <= antrian.tail; i++)
	{
		antrian.data[i] = antrian.data[i+1];
	}
	antrian.tail--;
	return antri;
}

void Tampil()
{
	int i;
    if (kosong()==0)
    {
        for(i=antrian.head;i<=antrian.tail;i++)
        {
            printf(" %d ", antrian.data[i]);
        }
        printf("\n");
    }
    else
        printf("Tidak ada data dalam antrian!\n");
}

int hapus()
{
	antrian.head=antrian.tail=-1;
	printf(" data sudah dibersihkan\n");
}

int main()
{
	int pilihan, data;
	awal();
	do
		{
		printf("\n 1. Enqueue (masuk 1 data)");
		printf("\n 2. Dequeue (keluar 1 data)");
		printf("\n 3. Lihat isi antrian");
		printf("\n 4. Hapus isi antrian");
		printf("\n 5. Keluar");
		printf("\n Pilihan anda? ");
		scanf("%d", &pilihan);	
		
		switch(pilihan)
		{
			case 1:
				printf(" data = ");
				scanf("%d", &data);
				enqueue(data);
				break;
			case 2:
				printf("\n data yang keluar: %d\n", dequeue());
				break;
			case 3:
				Tampil();
				break;
			case 4:
				hapus(); //bisa juga lgsng ditulis "awal()"
				break;
		}
	}while(pilihan!=5);
}
