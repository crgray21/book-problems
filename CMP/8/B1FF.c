#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    int biff[26] = {[0] = 4, [1] = 8, [4] = 3, ['I' - 'A'] = 1, ['O' - 'A'] = 0, ['S' - 'A'] = 5};

    printf("Enter a message: ");
    
    while((ch = getchar()) != '\n') {
        if (ch >= 'A' && ch <= 'z') {
            ch = toupper(ch);
            if (biff[ch - 'A']) {
                printf("%d", biff[ch - 'A']);
            } else if (ch == 'O') {
                printf("%d", 0);
            } else {
                printf("%c", ch);
            }
        } else {
            printf("%c", ch);
        }
    }

    printf("!!!!!!!!!!!!\n");

    return 0;

}
