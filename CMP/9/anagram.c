#include <stdio.h>
#include <ctype.h>

void read_word(int counts[26]);
void equal_array(int counts[26], int counts2[26]);


void read_word(int counts[26]) {

}


void equal_array(int counts1[26], int counts2[26]) {

}


int main(void) {
    char letters[26] = {0};
    char ch;
    int is_anagram = 1;

    printf("Enter first word: ");
     
    while ((ch = getchar()) != '\n') {
        ch = tolower(ch);
        if (isalpha(ch)) {
            letters[ch - 'a']++;
        }
    }


    printf("Enter second word: ");

    while ((ch = getchar()) != '\n') {
        ch = tolower(ch);
        if (isalpha(ch)) {
            letters[ch - 'a']--;
        }
    }


    for (int i = 0; i < ((int) (sizeof(letters) / sizeof(letters[0]))); i++) {
       if (letters[i] != 0) {
           is_anagram = 0;
           break;
       }
    }

    if (is_anagram) {
        printf("The words are anagrams.\n");
    } else {
        printf("The words are not anagrams\n");
    }

    return 0;

}
