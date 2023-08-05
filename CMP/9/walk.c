#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_walk(char walk[][*]);
void print_array(char walk[][*]);

void generate_random_walk(char walk[10][10]) {
    short idx;
    short dir[4] = {1, 2, 3, 4};
    int no_spot = 0;
    int i = 0; int j = 0;

    // init starting spot
    walk[i][j] = 'A';
    
    for (char ch = 'B'; ch <= 'Z'; ++ch) {
        while(1) {
            if (!(dir[0] || dir[1] || dir[2] || dir[3])) {
                no_spot = 1;
                break;
            }

            idx = rand() % 4; 

            //check left
            if (idx == 0) {
                if (dir[0] && j > 0 && walk[i][j - 1] == '.'){
                    j--;
                    break;
                } else {
                    dir[0] = 0;
                }
            }

            if (idx == 1) {
                if (dir[1] && i > 0 && walk[i - 1][j] == '.'){
                    i--;
                    break;
                } else {
                    dir[1] = 0;
                }
            }

            if (idx == 2) {
                if (dir[2] && j < 9  && walk[i][j + 1] == '.'){
                    j++;
                    break;
                } else {
                    dir[2] = 0;
                }
            }

            if (idx == 3) {
                if (dir[3] && i < 9 && walk[i + 1][j] == '.'){
                    i++;
                    break;
                } else {
                    dir[3] = 0;
                }
            }
        }

        if (no_spot) {
            printf("No spots available to place a character.\n");
            break;
        }

        // write a character to the new location in our walk
        walk[i][j] = ch;
        
        //reset our directions
        for (int i = 0; i < 4; ++i) dir[i] = i + 1;
    } 
}


void print_array(char walk[10][10]) {
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            printf("%c ", walk[i][j]);
        }
        printf("\n");
    }
}


int main(void) {
    char walk[10][10];

    srand((unsigned) time(NULL));

    // init all array values to '.'
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            walk[i][j] = '.';
        }
    }

   generate_random_walk(walk);
   print_array(walk);

    return 0;
}
