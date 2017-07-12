#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "farnarkle.h"


void farnarkle_player(int turn, int previous_guesses[MAX_TURNS][N_TILES], int farnarkles[MAX_TURNS], int arkles[MAX_TURNS], int guess[N_TILES]) {

    srand(time(NULL));
    int maxposs = (int)pow(MAX_TILE, N_TILES);

    //xxyy on first turn
    if(turn == 0){
        for(int i = 0; i < N_TILES/2; i++){
            guess[i] = 1;
        }
        for(int i = N_TILES/2; i < N_TILES; i++){
            guess[i] = MAX_TILE;
        }

    } else {

        //create array of all possible codes
        int poss[maxposs][N_TILES];
        for(int i = 0; i < maxposs; i++){
            for(int j = 0; j < N_TILES; j++){
                poss[i][j] = 0;
            }
        }

        for(int i = 0; i < maxposs; i++){
            for (int j = 0; j < N_TILES; j++){
                poss[i][j] = ((int)(i)/((int)pow(MAX_TILE, N_TILES-j-1)))%(MAX_TILE)+1;
            }
        }

        int try[N_TILES] = {0}; //previous guess to simulate
        int test[N_TILES] = {0}; //possible guess to simulate

        //simulate previous guesses to eliminate possibilities from array
        for(int i = 0; i < turn; i++){
            //assign previous guess to try
            for(int q = 0; q < N_TILES; q++){
                try[q] = previous_guesses[i][q];
            }

            for(int j = 0; j < maxposs; j++){
                //assign possibility to test
                for(int q = 0; q < N_TILES; q++){
                    test[q] = poss[j][q];
                }
                //if trytest does not return same farnarkle/arkle value, then the possibilty tested cannot be
                    if(count_farnarkles(test, try) != farnarkles[i]
                            || count_arkles(test, try) != arkles[i]){
                        //mark possibility as impossible
                        for(int k = 0; k < N_TILES; k++){
                            poss[j][k] = 0;
                        }
                    }
            }
        }

        int i = 0;
        i = rand()%maxposs;
        //choose eligible random entry
        while(poss[i][0] == 0){
            i = rand()%maxposs;
        }
        for(int j = 0; j < N_TILES; j++){
            guess[j] = poss[i][j];
        }

    }
}