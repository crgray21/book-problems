#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);


int roll_dice() {
    int d1, d2;

    d1 = rand() % 6 + 1;
    d2 = rand() % 6 + 1;

    return d1 + d2;
}


bool play_game() {
    int roll = 0;
    int point = 0;

    point = roll = roll_dice();
    printf("You rolled: %d\n", roll);

    if (roll == 7 || roll == 11) return 1;
    if (roll == 2 || roll == 3 || roll == 12) return 0;
    
    printf("Your point is %d\n", point);

    while (1) {
        roll = roll_dice();
        printf("You rolled: %d\n", roll);

        if (roll == point) {
            roll = 1;
            break;
        }

        if (roll == 7) {
            roll = 0;
            break;
        } 
    }

    return roll;
}


int main(void) {
    bool play;
    int wins, losses, tmp;
    wins = losses = 0;

    srand((unsigned) time(NULL));

    printf("Would you like to play a game of craps (1 for yes)? ");
    scanf("%d", &tmp);
    play = tmp;

    while (play) {
        if (play_game()){
            printf("You won!\n");  
            wins++;
        } else {
            printf("You lost...\n");
            losses++;
        }

        printf("\nWins: %d\tLosses: %d\n\n\n", wins, losses);
        printf("Would you like to play again (1 for yes)? ");
        scanf("%d", &tmp);
        play = tmp;
    }

    printf("\nThanks for playing!\n");

    return 0;
}
