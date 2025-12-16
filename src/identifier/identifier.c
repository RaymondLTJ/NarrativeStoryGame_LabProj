#include "identifier/identifier.h"
#include <stdio.h>
#include <string.h>

void identifyPlayer(char *player) {
    if (strlen(player) > 20) {
        printf("Karakter lebih dari 20!\n");
    } else {
        printf("Halo, %s!\n", player);
    }
}

