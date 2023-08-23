#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool are_anagrams(const char *word1, const char *word2);


int main(void) {
    char s1[30], s2[30];
    bool is_anagram = 0;

    printf("Enter first word: ");
    scanf("%s", s1);
     
    printf("Enter second word: ");
    scanf("%s", s2);

    is_anagram = are_anagrams(s1, s2);

    if (is_anagram) {
        printf("The words are anagrams.\n");
    } else {
        printf("The words are not anagrams\n");
    }

    return 0;

}


bool are_anagrams(const char *word1, const char *word2) {
    char letters[26] = {0};

    while(*word1) {
        if (isalpha(*word1))
            letters[tolower(*word1) - 'a']++;
        word1++;
    }

    while(*word2) {
        if (isalpha(*word2))
            letters[tolower(*word2) - 'a']--;
        word2++;
    }

    for (int i = 0; i < ((int) (sizeof(letters) / sizeof(letters[0]))); i++) {
       if (letters[i] != 0) {
           return false;
       }
    }

    return true;
}
