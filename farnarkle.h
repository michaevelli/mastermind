#define N_TILES 4         //number of tiles per code
#define MAX_TILE 8        //number of different possible tiles
#define USER_INPUT 0      //for use for bot. 0 for automatically generated code, 1 for user provided code
#define MAX_TURNS 1000

int read_tiles(int tiles[N_TILES]);
void print_tiles(int tiles[N_TILES]);
int count_farnarkles(int sequence1[N_TILES], int sequence2[N_TILES]);
int count_arkles(int sequence1[N_TILES], int sequence2[N_TILES]);
void create_random_tiles(int tiles[N_TILES]);
void farnarkle_player(int turn, int previous_guesses[MAX_TURNS][N_TILES], int farnarkles[MAX_TURNS], int arkles[MAX_TURNS], int guess[N_TILES]);

