#include <stdio.h>
#include <string.h>


int main(void) {
    char word[20], min[20], max[20];

    printf("Enter word: ");
    scanf("%s", word);

    while(strlen(word) != 4) {
        if (*word == '\0')
            continue;
        if (*min == '\0') {
            strcpy(min, word);
            strcpy(max, word);
            continue;
        }
        if (strcmp(word, min) < 0)
            strcpy(min, word);
        else if (strcmp(word, max) > 0)
            strcpy(max, word);

        printf("Enter word: ");
        scanf("%s", word);
    }

    printf("\n");
    printf("Smallest word: %s\n", min);
    printf("Largest word: %s\n", max);
    
}

