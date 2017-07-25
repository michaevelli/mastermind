## Mastermind

Mastermind created in C (https://en.wikipedia.org/wiki/Mastermind_(board_game))
Utilises numbers 1, 2, ... N instead of colours. "Farnarkles" mean same colour and position and "arkles" mean same colour but out of position.

UNSW COMP1511 17s1 lab05

## Usage
To play the game
<pre>
$ <b>gcc count.c create_random_tiles.c farnarkle_io.c play_farnarkle.c -o mastermind</b>
$ <b>./mastermind</b>
Enter guess for turn 1: <b>1 2 3 4</b>
0 farnarkles 1 arkles
Enter guess for turn 2: <b>4 5 6 7</b>
4 farnarkles 0 arkles
You win
</pre>
To use the bot
<pre>
$ <b>gcc count.c create_random_tiles.c farnarkle_io.c farnarkle_player.c player_test.c -o mastermind_bot -lm</b>
$ <b>./mastermind_bot</b>
1 2 3 4
Guess for turn 1: 1 1 8 8
1 farnarkle 0 arkles
Guess for turn 2: 1 2 3 4
4 Farnarkles 0 arkles
You win
</pre>

## Installation

Compile with `gcc count.c create_random_tiles.c farnarkle_io.c play_farnarkle.c -o mastermind` to play the game  
Compile with `gcc count.c create_random_tiles.c farnarkle_io.c farnarkle_player.c player_test.c -o mastermind_bot -lm` to use the bot to play the game.

farnarkle.h contains several definitions which can be modified

## Contributing

Do as you wish, I suppose

## License

MIT