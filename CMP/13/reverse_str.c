#include <stdio.h>

void reverse(char *msg);

int main(void) {
    char sentence[100];
    char ch, term, *p;
    int state;

    state = 0;
    p = sentence;

    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);

    reverse(sentence);

    printf("Reversal of sentence: ");
    puts(sentence);

    return 0;
}


void reverse(char *msg) {
    if (!(*msg)) return;

    char *c = msg;
    char tmp;

    while(*(msg + 1))
        msg++;

    while (c < msg) {
        tmp = *c;
        *c = *msg;
        *msg = tmp;
        c++;
        msg--;
    }
}
