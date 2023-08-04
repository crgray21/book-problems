#include <stdio.h>

#define SIZE ((int) sizeof(quiz_scores[0]) / sizeof(quiz_scores[0][0]))

int main(void) {
    int quiz_scores[5][5];
    int student_total, total, curr_score, max_score, min_score; 

    max_score = 0;
    min_score = 100;

    for (int i = 0; i < 5; ++i) {
        printf("Enter row %d: ", i + 1);
        scanf("%d %d %d %d %d", &quiz_scores[i][0], 
                                &quiz_scores[i][1],
                                &quiz_scores[i][2],
                                &quiz_scores[i][3],
                                &quiz_scores[i][4]
             );
    }

    printf("\nStudent Statistics\n");

    for (int row = 0; row < SIZE; ++row) {
        for (int col = 0; col < SIZE; ++col) {
            total += quiz_scores[row][col];
        }
        printf("Total for student %d: %d\n", row + 1, total);
        printf("Average score: %.2f\n\n", (float)total / SIZE);
        total = 0;
    }


    printf("\nQuiz Statistics\n");

    for (int row = 0; row < SIZE; ++row) {
        for (int col = 0; col < SIZE; ++col) {
            curr_score = quiz_scores[col][row];
            if (curr_score < min_score) min_score = curr_score;
            if (curr_score > max_score) max_score = curr_score;
            total += curr_score;
        }
        printf("Average score for quiz %d: %.2f\n", row + 1, (float) total / SIZE);
        printf("Max Score: %d\n", max_score);
        printf("Min Score: %d\n\n", min_score);
        total = max_score = 0;
        min_score = 100;
    }

    return 0;
}
