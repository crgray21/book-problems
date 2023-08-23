#include <stdio.h>

double compute_average_word_length(const char *sentence);


int main(void) {
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);
    compute_average_word_length(sentence); 

    return 0;
}


double compute_average_word_length(const char *sentence) {
    int letter_cnt = 0, num_words = 0, state = 0;
    double avg;

    while (*sentence) {
        if (*sentence == ' ' && state == 1) {
            state = 0;
        } else if (*sentence != ' ' && state == 0) {
            state = 1;
            num_words++;
            letter_cnt++;
        } else if (*sentence != ' ' && state == 1) {
            letter_cnt++;
        }
        sentence++;
    }

    // decrement 1 from letter_cnt due to '\n' being counted
    letter_cnt--;
    avg = (float) (letter_cnt) / num_words;
    printf("word count: %15d\nletter_cnt: %15d\navg word length: %10.1f\n", num_words, letter_cnt, avg);
    
    return avg; 
}
