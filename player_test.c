#include <stdio.h>
#include "farnarkle.h"

int main(){

    int hidden_sequence[N_TILES] = {0};
    int guess[N_TILES] = {0};
    if(USER_INPUT){
        printf("Enter hidden sequence: ");
        read_tiles(hidden_sequence);
    } else {
        create_random_tiles(hidden_sequence);
    }
    int previous_guesses[MAX_TURNS][N_TILES] = {{0}};
    int farnarkles[MAX_TURNS] = {0};
    int arkles[MAX_TURNS] = {0};

    print_tiles(hidden_sequence);

    for(int i = 0; 1; i++){


        printf("Guess for turn %d: ", i+1);


        farnarkle_player(i, previous_guesses, farnarkles, arkles, guess);
        print_tiles(guess);

        int f = count_farnarkles(hidden_sequence, guess);
        printf("%d", f);
        printf(" farnarkles ");
        int a = count_arkles(hidden_sequence, guess);
        printf("%d", a);
        printf(" arkles\n");

        for(int j = 0; j < N_TILES; j++){
            previous_guesses[i][j] = guess[j];
        }
        farnarkles[i] = f;
        arkles[i] = a;

        if (f == 4){
            break;
        }

    }
    printf("You win\n");

    return 0;
}
