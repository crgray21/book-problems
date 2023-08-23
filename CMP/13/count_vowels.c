#include <stdio.h>
#include <string.h>
#include <ctype.h>

int compute_vowel_count(const char* sentence);

int main(void) {
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);
    compute_vowel_count(sentence); 

    return 0;
}


int compute_vowel_count(const char *sentence) {
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    while(*sentence) {
        switch(toupper(*sentence)) {
            case 'A': a += 1;
                      break;
            case 'E': e += 1;
                      break;
            case 'I': i += 1;
                      break;
            case 'O': o += 1;
                      break;
            case 'U': u += 1;
                      break;
        }
        sentence++;
    }

    printf("The numbers of vowels in the sentence: a->%d e->%d i->%d o->%d u->%d total->%d\n", a, e ,i ,o, u, a+e+i+o+u);

    return a + e + i + o + u;
}
