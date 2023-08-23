#include <stdio.h>
#include <ctype.h>

int compute_scrabble_value(const char *w, const int scrabble_pts[]);

int main(void) {
    char word[30];
    int sum = 0;
    int scrabble_pts[128];

    scrabble_pts['A'] = scrabble_pts['E'] = scrabble_pts['I'] = scrabble_pts['L'] = 
    scrabble_pts['N'] = scrabble_pts['O'] = scrabble_pts['R'] = scrabble_pts['S'] = 
    scrabble_pts['T'] = scrabble_pts['U'] = 1;

    scrabble_pts['D'] = scrabble_pts['G'] = 2;
    scrabble_pts['B'] = scrabble_pts['C'] = scrabble_pts['M'] = scrabble_pts['P'] = 3;

    scrabble_pts['F'] = scrabble_pts['H'] = scrabble_pts['V'] = scrabble_pts['W'] =
    scrabble_pts['Y'] = 4;

    scrabble_pts['K'] = 5;
    scrabble_pts['J'] = scrabble_pts['X'] = 8;
    scrabble_pts['Q'] = scrabble_pts['Z'] = 10;

    printf("Enter a word: ");
    scanf("%s", word); 
    sum = compute_scrabble_value(word, scrabble_pts);
    printf("Scrabble value: %d\n", sum);

    return 0;
}

int compute_scrabble_value(const char *word, const int scrabble_pts[]) {
    int i, sum = 0;

    while (*word) {
        i = toupper(*word);
        sum += scrabble_pts[i];
        word++;
    }

    return sum;
}
