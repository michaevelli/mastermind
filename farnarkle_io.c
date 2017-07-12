#include <stdio.h>
#include "farnarkle.h"

// read N_TILES tiles into array tiles
// return 1 if successful, 0 otherwise
int read_tiles(int tiles[N_TILES]) {

    for(int i = 0; i < N_TILES; i++){
        tiles[i] = 0;
    }

    int count = 0;
    int x = 0;
    int i = 0;

    while(count < N_TILES){
        x = scanf("%d", &tiles[i]);
        if(x != 1){
            return 0;;
        }
        if(tiles[i] < 1 || tiles[i] > MAX_TILE){
            return 0;
        }
        count++;
        i++;
    }

    return 1;
}

// print tiles on a single line
void print_tiles(int tiles[N_TILES]) {

    for(int i = 0; i < N_TILES; i++){
        printf("%d", tiles[i]);
        if(i < N_TILES - 1){
            printf(" ");
        }
    }
    printf("\n");

}

