#include <stdio.h>

int main(void) {
    char sentence[100];
    char ch, term, *p;
    int state;

    state = 0;
    p = sentence;

    printf("Enter a sentence: ");

    for (int i = 0; i < 100; i++) {
        scanf("%c", &ch);
        if (ch !=  '.' && ch != '?' && ch != '!') {
            sentence[i] = ch;
            p++;
        } else {
            sentence[i] = ch;
            term = ch;
            break;
        }
    }

    printf("Reversal of sentence: ");

    for (p = p - 1; p >= sentence; p--) {
        if (p == sentence && sentence[0] != ' ') {
            for (char* j = sentence; *j != ' '; j++) {
                printf("%c", *j);
            }
        } else if (*p == ' ' && state) {
            for (char *j = p + 1; *j != term && *j != ' '; j++) {
                printf("%c", *j);
            }
            printf(" ");
            state = 0;
        } else if (*p != ' ') {
            state = 1;
        }
    }

    printf("%c\n", term);

    return 0;

}
