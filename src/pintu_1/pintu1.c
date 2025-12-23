#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
int input_valid(int min, int max){
    int x;
    while (1){
        scanf("%d", &x);
        if (x >= min && x <= max) return x;
        printf("Pilihan tidak valid. Coba lagi: ");
    }
}

void narasi1_1(){
    printf("\n=== RUANGAN 1 : DADU TAKDIR ===\n\n");
    printf("Kamu melangkah ke dalam ruangan yang sunyi.\n");
    printf("Udara terasa berat, seolah ruangan ini menahan napas.\n\n");

    printf("Di tengah lantai, sebuah dadu batu raksasa melayang perlahan.\n");
    printf("Saat kamu mendekat, dadu itu jatuh dengan dentuman keras.\n\n");

    printf("Tulisan samar muncul di dinding:\n");
    printf("\"Lempar dadu dan serahkan nasibmu...\"\n\n");

    printf("1. Lempar dadu\n");
    printf("2. Mundur\n");
    printf("Pilihanmu: ");

}

void narasi1_2(){
    printf("\n=== RUANGAN 2 : PETI MISTERIUS ===\n\n");
    printf("Tiga peti berdiri sejajar di hadapanmu.\n");
    printf("Bentuknya sama. Ukurannya sama.\n");
    printf("Namun... perasaanmu berkata sebaliknya.\n\n");

    printf("Tulisan di dinding bergetar:\n");
    printf("\"Instingmu lebih berharga dari logika.\"\n\n");

    printf("1. Buka peti kiri\n");
    printf("2. Buka peti tengah\n");
    printf("3. Buka peti kanan\n");
    printf("Pilihanmu: ");

}

void narasi1_3(){
    printf("\n=== RUANGAN 3 : LEMPARAN TERAKHIR ===\n\n");
    printf("Ruangan terakhir terasa lebih tenang...\n");
    printf("Terlalu tenang.\n\n");

    printf("Sebuah koin emas melayang di udara.\n");
    printf("Cahaya memantul di permukaannya.\n\n");

    printf("Tulisan terakhir muncul:\n");
    printf("\"Satu pilihan. Satu kesempatan.\"\n\n");

    printf("1. Heads\n");
    printf("2. Tails\n");
    printf("Pilihanmu: ");

}




int pintu1_1(){
    narasi1_1();
    int jawaban = input_valid(1, 2);

    if(jawaban == 2){
        printf("Kamu memilih untuk mundur\n");
        return 0;
    }
    
    int hasil = rand() % 6 + 1;

    if(hasil != 1 && hasil != 6){
        printf("Kamu Roll %d\n", hasil);
        printf("Kamu berhasil! Silahkan lanjut ke pintu selanjutnya.\n");
        printf("\x1B[3m");
        printf("Pintu di depan mu terbuka.\n\n");
        printf("\x1B[0m");
        return 1;
    }else {
        printf("Kamu Roll %d\n", hasil);
        printf("Kamu gagal.\n");
        printf("\x1B[3m");
        printf("Ruangan mulai runtuh dan kamu terbangun diruangan sebelumnya.");
        printf("\x1B[0m");
        return 0;
    }
}



int pintu1_2(){
    narasi1_2();
    int jawaban = input_valid(1, 3);



    if (jawaban == 2) {
        printf("Peti ini berisi kunci emas\n");
        printf("Selamat! Gunakan kunci yang ada di dalam peti untuk lanjut ke pintu selanjutnya!\n");
        printf("Kamu membuka pintu selanjutnya dan memasuki ruangan tersebut\n");
        return 1;
    } 
    else{
        printf("Peti ini adalah mimic\n");
        printf("Mimic membunuhmu dan kamu terbangun di ruangan awal\n");
        return 0;
    } 



}




int pintu1_3(){
    narasi1_3();    

    int hasil = rand() % 2 + 1;
    

    int jawaban = input_valid(1, 2);
    
    printf("\nKoin berputar di udara dan jatuh ke telapak tanganmu...\n");
    printf("Hasilnya adalah: %s\n", (hasil == 1) ? "Heads" : "Tails");


    if (jawaban == hasil) {
                printf("Selamat! Instingmu tajam. Kamu berhasil melewati rintangan terakhir!\n");
                return 1; 
    } else {
                printf("Sayang sekali, pilihanmu salah. Ruangan menjadi gelap...\n");
                return 0; 
    }

}
    




int main(){
    srand(time(NULL));
    while (1) {
        system(CLEAR);

        int hasil_pintu1 = pintu1_1();
        if (hasil_pintu1 == 0) {
            jeda_dan_hapus();
            continue; 
        }

        jeda_dan_hapus();

        int hasil_pintu2 = pintu1_2();
        if (hasil_pintu2 == 0) {
            jeda_dan_hapus();
            continue; 
        }

        jeda_dan_hapus();

        int hasil_pintu3 = pintu1_3();
        if (hasil_pintu3 == 0) {
            jeda_dan_hapus();
            continue; 
        }

        
        jeda_dan_hapus();
        //lanjut ke pintu selanjutnya
        break;
    }

    return 0;
}
