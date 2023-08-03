#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    printf("Enter a sentence: ");

    while((ch = getchar()) != '\n') {
        ch = toupper(ch);
        switch(ch) {
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
    }

    printf("The numbers of vowels in the sentence: a->%d e->%d i->%d o->%d u->%d total->%d\n", a, e ,i ,o, u, a+e+i+o+u);
    
    return 0;
}
