#include <stdio.h>
#include <math.h>
#include <string.h>
#include "pintu_1/pintu1.h"
#include "pintu_2/pintu2.h"
#include "pintu_3/pintu3.h"
#include "identifier/identifier.h"

int main(){
	while (1){
	//header
	printf ("====================\n");
	printf ("    Nama Game\n");
	printf ("====================\n\n");
	
	printf ("1. Enter\n");
	printf ("2. Exit\n\n");
	int starter;
	scanf ("%d", &starter);
		
	switch (starter){
		case 1:
			printf ("\nSelamat datang di |nama proyek|\n");
			printf ("Pertama, kenalkan dirimu (maks 20 kata)\n\n");
			
			//identify nama karakter
			char nama[100]; scanf (" %[^\n]", nama);	
			identifyPlayer(nama);
			
			//narasi1, pilih ruangan 1-3
			printf ("\ncontohcontoh\n\n");
			printf ("1. Pintu 1 \n");
			printf ("2. Pintu 2 \n");
			printf ("3. Pintu 3 \n\n");
			int pintumasuk;
			scanf ("%d", &pintumasuk);
			printf("\n");
			pintuUtama1(pintumasuk);
			
			printf ("\ncontohtnoh\n");
			int pintu2;
			scanf ("%d", &pintu2);
			
			break;
		case 2:
			printf ("Selamat tinggal\n");
			return 0;
			break;
		default:
			printf ("Salah input hehe\n\n");
		}
	}
	return 0;
}
