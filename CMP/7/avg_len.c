#include <stdio.h>

int main(void) {
    char ch; int word_cnt; int letter_cnt; float avg; int is_word = 0;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n') {
        if (ch == ' ' && is_word) {
            is_word = 0;
        } else if (ch != ' ' && !(is_word)) {
            is_word = 1;
            word_cnt++;
            letter_cnt++;
        } else if (ch != ' ' && is_word) {
            letter_cnt++;
        }
    }

    avg = (float) letter_cnt / word_cnt;
    printf("word count: %15d\nletter_cnt: %15d\navg word length: %10.1f\n", word_cnt, letter_cnt, avg);

    return 0;

}
