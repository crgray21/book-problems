#include <stdio.h>

int main(void) {
    char sentence[100];
    char ch, term;
    int cnt, state;

    cnt = state = 0;

    printf("Enter a sentence: ");

    for (int i = 0; i < 100; i++) {
        scanf("%c", &ch);
        if (ch !=  '.' && ch != '?' && ch != '!') {
            sentence[i] = ch;
            cnt++;
        } else {
            term = ch;
            break;
        }
    }

    printf("Reversal of sentence: ");

    for (int i = cnt - 1; i >= 0; i--) {
        if (i == 0 && sentence[i] != ' ') {
            for (int j = 0; sentence[j] != ' '; j++) {
                printf("%c", sentence[j]);
            }
        }

        if ((sentence[i] == ' ' && state)) {
            for (int j = i + 1; sentence[j] != term && sentence[j] != ' '; j++) {
                printf("%c", sentence[j]);
            }
            printf(" ");
            state = 0;
        } else if (sentence[i] != ' ') {
            state = 1;
        }
    }

    printf("%c\n", term);

    return 0;

}
