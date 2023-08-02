#include <stdio.h>

int main (void) {
    int amount;
    int cnt = 0;

    int bills[4] = {20, 10, 5, 1};
    int bill_cnt[4] = {0, 0, 0, 0};

    size_t c = (int)(sizeof(bills) / sizeof(bills[0]));
    
    printf("How many dollars do you want? ");
    scanf("%d", &amount);

    while ( amount != 0.0 && cnt != c) {
       if (amount - bills[cnt] >= 0) {
           amount =  amount - bills[cnt];
           bill_cnt[cnt]++;
       } else {
           cnt++;
       }
    }

    for (int i = 0; i < c; i++) {
        printf("$%-2d bills: %d\n", bills[i], bill_cnt[i]);
    }
}
