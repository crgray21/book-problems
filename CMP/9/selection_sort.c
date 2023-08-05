#include <stdio.h>

#define MAX 10

void selection_sort(int n, int[]);

int main(void) {
    int sorted[MAX] = {0};
    

    printf("Please enter a series of numbers: ");
    for(int i = 0; i < MAX; i++) {
        scanf("%d", &sorted[i]);
    }

    selection_sort(MAX, sorted);

    for (int i = 0; i < MAX; i++) {
        printf("%d ", sorted[i]);
    }
    
    printf("\n");

    return 0;
}

void selection_sort(int n, int sorted[n]) {

    if (n <= 1) return;

    int tmp;
    for (int i = 0; i < n-1; i++) {
        if (sorted[i] > sorted[n-1]) {
            tmp = sorted[i];
            sorted[i] = sorted[n-1];
            sorted[n-1] = tmp;
        }
    }

    selection_sort(n-1, sorted);
}
