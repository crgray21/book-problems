#include <stdio.h>

int main (void) {
    printf("%6d, %4d\n", 85, 1040);
    printf("%12.5e\n", 30.253);
    printf("%.4f\n", 83.162);
    printf("%-6.2g\n", .0000009979);

    printf("%-8.1e\n", 12976.234);
    printf("%10.6e\n", 420.6969696969);
    printf("%-8.3f\n", 420.6969696969);
    printf("%6f\n", 420.6969696969);

    int i, j;
    float x, y;

//    scanf("%d%f%d", &i, &x, &j);
    printf("%d\n", i);
    printf("%f\n", x);
    printf("%d\n", j);

    scanf("%f%d%f", &x, &i, &y);
    printf("%f\n", x);
    printf("%d\n", i);
    printf("%f\n", y);
    return 0;
}
