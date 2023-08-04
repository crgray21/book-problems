#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    char path[10][10];
    short idx;
    short dir[4] = {1, 2, 3, 4};
    int no_spot = 0;

    srand((unsigned) time(NULL));

    // init all array values to '.'
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            path[i][j] = '.';
        }
    }

    // init starting spot
    int i = 0; int j = 0;
    path[i][j] = 'A';
    
    for (char ch = 'B'; ch <= 'Z'; ++ch) {
        while(1) {
            if (!(dir[0] || dir[1] || dir[2] || dir[3])) {
                no_spot = 1;
                break;
            }

            idx = rand() % 4; 

            //check left
            if (idx == 0) {
                if (dir[0] && j > 0 && path[i][j - 1] == '.'){
                    j--;
                    break;
                } else {
                    dir[0] = 0;
                }
            }

            if (idx == 1) {
                if (dir[1] && i > 0 && path[i - 1][j] == '.'){
                    i--;
                    break;
                } else {
                    dir[1] = 0;
                }
            }

            if (idx == 2) {
                if (dir[2] && j < 9  && path[i][j + 1] == '.'){
                    j++;
                    break;
                } else {
                    dir[2] = 0;
                }
            }

            if (idx == 3) {
                if (dir[3] && i < 9 && path[i + 1][j] == '.'){
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

        // write a character to the new location in our path
        path[i][j] = ch;
        
        //reset our directions
        for (int i = 0; i < 4; ++i) dir[i] = i + 1;
    } 
    

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            printf("%c ", path[i][j]);
        }
        printf("\n");
    }

    return 0;
}
