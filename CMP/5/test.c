#include <stdio.h>

int main (void) {
    int i = 7; int j = 8; int k = 9;

    printf("%d \n", (i = j) || (j = k));
    printf("%d %d %d\n", i, j, k);


    i = 1; j = 1; k = 1;

    printf("%d \n", ++i || ++j && ++k);
    printf("%d %d %d\n", i, j, k);

    
    int age = 15;

    printf("%d\n", 13 <= age && age <= 19);

    
    i = 1;
    switch (i % 3) {
        case 0: printf("zero");
        case 1: printf("one");
        case 2: printf("two");
    }

    int a, b, c, d, l1, l2, s1, s2;
    a = 5; b = 10; c = 2; d = 17;

    if (a > b) {
        l1 = a;
        s1 = b;
    }
    else {
        l1 = b;
        s1 = a;
    }

    if (c > d) {
        l2 = c;
        s2 = d;
    } else {
        l2 = d;
        s2 = c;
    }

    if (l2 > l1) {
        l1 = l2;
    }

    if (s2 < s1) {
        s1 = s2;
    }

    printf("\n%d %d\n", l1, s1);


    return 0;
    
}
