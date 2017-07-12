//name: michael
//date: 20170327
//play

#include <stdio.h>
#include "farnarkle.h"

int main(void) {
    int hidden_sequence[N_TILES];
    int guess[N_TILES];

    create_random_tiles(hidden_sequence);

    for(int i = 1; 1; i++){

        printf("Enter guess for turn %d: ", i);
        read_tiles(guess);
        int f = count_farnarkles(hidden_sequence, guess);
        printf("%d", f);
        printf(" farnarkles ");
        printf("%d", count_arkles(hidden_sequence, guess));
        printf(" arkles\n");

        if (f == 4){
            break;
        }

    }
    printf("You win\n");
}

