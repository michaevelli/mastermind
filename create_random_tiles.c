#include <stdlib.h>
#include <time.h>
#include "farnarkle.h"

// set tiles to pseudo-random values
void create_random_tiles(int tiles[N_TILES]) {
    int i = 0;
    srand(time(NULL));

    while (i < N_TILES) {
        tiles[i] = rand() % MAX_TILE + 1;
        i = i + 1;
    }
}

