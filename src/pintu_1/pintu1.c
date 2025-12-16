#include "pintu_1/pintu1.h"
#include <stdio.h>

void pintuUtama1(int door){
    while(1){
        printf("Kamu memilih pintu utama %d\n", door);
        printf("Pilih pintu pertanyaan:\n");
        printf("1. Pintu 1.1\n");
        printf("2. Pintu 1.2\n");
        printf("3. Pintu 1.3\n");
        printf("0. Kembali\n\n");

        int subdoor;
        scanf("%d", &subdoor);

        if (subdoor == 0) {
            break;
        }

        switch (subdoor){
            case 1:
                printf("\nRoom 1.1\n\n");
                pintu1_1();
                break;
            case 2:
                printf("\nRoom 1.2\n\n");
                pintu1_2();
                break;
            case 3:
                printf("\nRoom 1.3\n\n");
                pintu1_3();
                break;
            default:
                printf("\nPintu tidak ada!\n\n");
        }
    }
}

int pintu1_1(){
    printf("1+1 = ?\n\n");
    int jawaban;
    printf("Jawabanmu: ");
    scanf("%d", &jawaban);

    if(jawaban == 2){
        printf("\nBENAR\n\n");
        return 1;
    } else {
        printf("\nSALAH\n\n");
        return 0;
    }
}

int pintu1_2(){
    printf("Nanti diganti\n");
    return 0;
}

int pintu1_3(){
    printf("Nanti diganti1\n");
    return 0;
}

