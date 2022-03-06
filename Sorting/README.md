## Sorting Exercise

  Pengurutan (Sorting) adalah proses pengurutan data yang sebelumnya disusun secara acak sehingga tersusun secara teratur menurut aturan tertentu. Tujuan dari sorting sesuai dengan namanya yaitu untuk mengurutkan data acak yang bertipe numerik maupun karakter. Pengurutan ini dapat dilakukan secara ascending dan  descending.
  Metode yang dapat dilakukan dalam sorting ada banyak, namun pada repo ini akan digunakan 4 macam metode, yaitu Bubble Sort, Exchange Sort, Insertion Sort, dan Selection Sort.

+ [Challange](https://github.com/GoTadashi/ASD/blob/main/Sorting/Challange.c)
  - Pada pertemuan ASD tanggal 22 Februari lalu, dosen saya memberikan challange membuat program sorting sesuai soal yang diberikan dan saya mendapatkan bagian Bubble dan Exchange sorting.
  - Berikut tampilan output program dari code Challange
    
    <img width="350" alt="image" src="https://user-images.githubusercontent.com/98724538/156935567-6931005c-c091-4bee-a2fa-a0857717f541.png">
  - Dari data yang dimiliki (23,65,30,8,33,24,76,7), kita diminta untuk mengurutkan data tersebut dari kecil ke besar (ascending).
+ [Bubble Method](https://github.com/GoTadashi/ASD/blob/main/Sorting/Bubble_Sort.c)
  - Bubble Sort merupakan metode sorting yang dianggap paling mudah.
  - Bubble Sort mengurutkan data dengan cara membandingkan elemen sekarang dengan elemen berikutnya. Jika elemen sekarang lebih besar dari elemen berikutnya maka kedua elemen tersebut ditukar, jika pengurutan ascending. Jika elemen sekarang lebih kecil dari elemen berikutnya, maka kedua elemen tersebut ditukar, jika pengurutan
descending.
  - Bubble sort berhenti jika seluruh array telah diperiksa dan tidak ada pertukaran lagi yang bisa dilakukan, serta tercapai perurutan yang telah
diinginkan.
  - Berikut tampilan output program dari code Bubble Sort
  
    <img width="470" alt="image" src="https://user-images.githubusercontent.com/98724538/156938121-5c827d8c-ea1d-4af0-8713-f33a3d1161ce.png">

+ [Selection Method](https://github.com/GoTadashi/ASD/blob/main/Sorting/Selection_Sort.c)
  - Selection Sort merupakan kombinasi antara sorting dan searching.
  - Untuk setiap proses, akan dicari elemen-elemen yang belum diurutkan yang memiliki nilai terkecil atau terbesar akan dipertukarkan ke posisi yang tepat di dalam array.
  - Selama proses, pembandingan dan pengubahan hanya dilakukan pada indeks pembanding saja, pertukaran data secara fisik terjadi pada akhir proses.
  - Berikut tampilan output program dari code Selection Sort
    
    <img width="441" alt="image" src="https://user-images.githubusercontent.com/98724538/156938223-6c1d62da-2be7-48c3-865d-14b16bdf6dbb.png">


+ [Insertion Method](https://github.com/GoTadashi/ASD/blob/main/Sorting/Insertion_Sort.c)
  - Metode ini mirip dengan cara orang mengurutkan kartu, selembar demi selembar kartu diambil dan disisipkan (insert) ke tempat yang seharusnya.
  - Pada penyisipan elemen, maka elemen-elemen lain akan bergeser ke belakang.
  - Berikut tampilan output program dari code Insertion Sort
    
    <img width="478" alt="image" src="https://user-images.githubusercontent.com/98724538/156938177-8c98f432-ecb6-4e95-80aa-a755af74e337.png">

#### SUMBER
+ Materi Kuliah Algoritma dan Struktur Data tanggal 22/02/2021
+ https://www.programiz.com/dsa/bubble-sort
