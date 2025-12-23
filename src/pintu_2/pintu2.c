#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
    #define CLEAR "cls"
#else
    #define CLEAR "clear"
#endif


void jeda_dan_hapus() {
    printf("\nTekan Enter untuk melanjutkan...");
    getchar(); 
    getchar(); 
    system(CLEAR);
}



void bubbleSort(int arr[], int n){
    for(int i = 0; i < n -1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void narasi2_1(){  
    printf("Kamu memasuki ruangan batu yang dipenuhi ukiran simbol kuno.\n");
    printf("Di hadapanmu terdapat lima lempeng batu, masing-masing memancarkan cahaya redup.\n");
    printf("Di atas setiap lempeng tertulis sebuah pertanyaan pertanyaan sederhana.\n");
    printf("Sebuah suara bergema di kepalamu:\n\n");
    printf("“Jawaban adalah kunci. Urutan adalah jalan.”\n");
    printf("“Susun hasilnya dari yang TERKECIL hingga TERBESAR untuk melanjutkan.”\n\n");
    printf("1. 7^2 - 7\n2. Angka jika digabungkan menjadi huruf B\n3. Angka Keberuntungan\n4. (23 + 10 - 22) * (2^3)\n5. 62537^0\n\n");
    printf("\x1B[3m");
    printf("Note: pastikan setelah setiap jawaban diakhiri dengan spasi\n");
    printf("\x1B[0m");
    printf("Urutkan : ");
    

}

void narasi2_2(){
    printf("Kamu memasuki ruangan yang dipenuhi dengan buku.\n");
    printf("Saat kamu berada ditengah ruangan beberapa buku menyala dan muncul tulisan didinding.\n\n");
    printf("Hanya 1 buku yang dapat membawamu lanjut ke pintu berikutnya. pilihlah.\n\n");
    printf("43.Pengantar Aritmatika Dasar.\n41.Logika dan Paradoks Kuno\n18.Identitas Matematika Sederhana\n67.Geometri Ruang dan Dimensi\n1.Statistika untuk Pemula\n\n");
    printf("\x1B[3m");
    printf("Aku bukan tentang menghitung banyaknya,\nbukan pula tentang bentuk atau peluang.\nAku menyederhanakan yang rumit,\nmenyatukan ruas kiri dan kanan menjadi sama\n\n");
    printf("\x1B[0m");
}

void narasi2_3(){
    printf("Kamu memasuki ruangan kosong.\n");
    printf("Lalu tiba tiba tulisan muncul di dinding...\n\n");
    printf("inilah tantangan terakhirmu, gabungkan 2 jawaban di pintu sebelumnya menjadi 1 list yang tersusun\n");
    printf("\x1B[3m");
    printf("Note: pastikan setelah setiap jawaban diakhiri dengan spasi\n");
    printf("\x1B[0m");
    printf("Jawabanmu: ");
}


int pintu2_1(){
    int arr[5] = {42, 13, 7, 88, 1};
    int arrsize = sizeof(arr) / sizeof(arr[0]);
    int jawaban[5];
    int benar = 1;
    narasi2_1();

    bubbleSort(arr, arrsize);

    for(int i = 0; i < 5; i++){
        scanf("%d", &jawaban[i]);
    }
    for(int i = 0; i < 5; i++){
        if(jawaban[i] != arr[i]){
            benar = 0;
            break;
        }
    }
    if(benar){
        printf("Selamat silahkan lanjutkan ke pintu selanjutnya");
        return 1;
    }else{
        printf("Kamu salah dan semua menjadi gelap...");
        return 0;
    }

}

int linearSearch(int arr[], int n, int target){
    for(int i = 0; i < n; i++){
        if(arr[i] == target)
            return i;
    }
    return -1;
}

int pintu2_2(){
    int books[5] = {43, 18, 41, 67, 1};
    int  booklen = 5;
    int target =  18;
    int pilihan;
    narasi2_2();
    printf("Pilih 1 Buku: ");
    scanf("%d", &pilihan);

    if(linearSearch(books, booklen, pilihan) != -1 && pilihan == target){
        printf("Saat kamu tarik buku tersebut, tiba tiba pintu didepanmu terbuka...\n");
        return 1;
    }else if (linearSearch(books, booklen, pilihan) != -1 && pilihan != target){
        printf("Setelah kamu menarik buku tersebut bayangan hitam mulai menyerang mu dan semuanya menjadi gelap...\n");
        return 0;
    }else{
        printf("Kamu memilih buku yang bukan seharusnya dipilih kamu terkena kutukan dan semuanya menjadi gelap...");
        return 0;
    }

}

int pintu2_3(){
    int arr[6] = {1, 7, 13, 18, 42, 88};
    int jawaban[6];
    int benar = 1;
    narasi2_3();
    for(int i = 0; i < 6; i++){
        scanf("%d", &jawaban[i]);
    }
    for(int i = 0; i < 6; i++){
            if(jawaban[i] != arr[i]){
            benar = 0;
            break;
        }
    }
    if(benar){
        printf("Selamat kamu benar! pintu didepanmu mulai terbuka...");
        return 1;
    }else{
        printf("Kamu salah semuanya menjadi gelap...");
        return 0;
    }

}

int main(){
   
    while (1) {
        system(CLEAR);

        int hasil2_1 = pintu2_1();
        if (hasil2_1 == 0) {
            jeda_dan_hapus();
            continue; 
        }

        jeda_dan_hapus();

        int hasil2_2 = pintu2_2();
        if (hasil2_2 == 0) {
            jeda_dan_hapus();
            continue; 
        }

        jeda_dan_hapus();

        int hasil2_3 = pintu2_3();
        if (hasil2_3 == 0) {
            jeda_dan_hapus();
            continue; 
        }

        
        jeda_dan_hapus();
        //lanjut pintu berikutnya
        break;
    }


    return 0;
}

