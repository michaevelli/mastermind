#include "farnarkle.h"

// return number of arkles
int count_arkles(int sequence1[N_TILES], int sequence2[N_TILES]) {
    int tallyf = count_farnarkles(sequence1, sequence2);;
    int tallya = 0;

    //clone sequence2
    int sequence2c[N_TILES];
    for(int i = 0; i < N_TILES; i++){
        sequence2c[i] = sequence2[i];
    }

    //count all similarities, mark 0 to sequence to prevent doublecounting
    for(int i = 0; i < N_TILES; i++){
        for(int j = 0; j < N_TILES; j++){
            if(sequence1[i] == sequence2c[j]){
                sequence2c[j] = 0;
                tallya += 1;
                break;
            }
        }
    }

    return tallya-tallyf;
}

// return number of farnarkles
int count_farnarkles(int sequence1[N_TILES], int sequence2[N_TILES]) {

    int tally = 0;

    for(int i = 0; i < N_TILES; i++){

        if(sequence1[i] == sequence2[i]){
            tally += 1;
        }

    }

    return tally;
}