#include <stdio.h>

int main(void) {
    char sentence[600];
    char words[30][20];
    char ch, term;
    int cnt, state, limit;

    cnt = state = limit = 0;

    printf("Enter a sentence: ");
    fgets(sentence, 600, stdin);

    for (int i = 0; sentence[i]; i++) {
        if (sentence[i] == '.' || sentence[i] == '?' || sentence[i] == '!') {
            term = sentence[i];
            words[cnt][limit] = '\0';
            break;
        }
        if (sentence[i] == ' ' && state == 1) {
            state = 0;
            words[cnt][limit] = '\0';
            cnt++;
            limit = 0;
        } else if (sentence[i] != ' ' && state == 0) {
            state = 1;
            words[cnt][limit] = sentence[i]; 
            limit++;
        } else if (sentence[i] != ' ' && state == 1) {
            if (limit >= 19) continue;
            words[cnt][limit] = sentence[i];
            limit++;
        }
    }

    printf("Reversal of sentence: ");
    for (int i = cnt; i >= 0; i--) {
        if (i == 0) printf("%s", words[i]);
        else printf("%s ", words[i]);
    }
    printf("%c\n", term);

    return 0;

}
