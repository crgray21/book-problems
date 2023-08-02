#include <stdio.h>

int main (void) {
    int prefix, gid, pub, itemNum, crc;

    printf("Enter ISBN: ");
    scanf("%d - %d - %d - %d - %d", &prefix, &gid, &pub, &itemNum, &crc);

    printf("GSI prefix: %d\n", prefix);
    printf("Group Identifier: %d\n", gid);
    printf("Publisher Code: %d\n", pub);
    printf("Item number: %d\n", itemNum);
    printf("Check digit: %d\n", crc);

    return 0;
}
