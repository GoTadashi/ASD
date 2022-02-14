#include <stdio.h>

void main ()
{
	int n, i, cari, jumlah = 0, data [10];
	printf ("Berapa data yg di input? ");
	scanf ("%d",&n);
	printf ("Masukan %d Integer(s) \n",n);
	for (i=0 ; i <n ; i++)
		scanf ("%d",&data[i]);
		
	printf ("Cari angka berapa? ");
	scanf ("%d",&cari);
	for (i=0 ; i <n ; i++)
	{
		if (data[i]==cari) //cek apakah data yang dicari ada di dalam array
		{
			printf ("Angka %d Ketemu ges dan tersimpan di lokasi [%d]\n", cari,i+1);
			jumlah++; //Angka data yang ditemukan lebih dari 1
		}
	}
		/*if (i==n) 
			printf ("Angka %d Tidak ditemukan", cari);*/
		if (jumlah == 0)
			printf ("Angka %d Tidak ditemukan", cari);
		else 
			printf ("Angka %d KETEMU Sebanyakn %d kali dalam array", cari, jumlah);
}
