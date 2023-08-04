#include <stdio.h>

int main(void) {
    char msg[80];
    int shift;

    printf("Enter message to be encrypted: ");
    
    for (int i = 0; i < 80; i++) {
        scanf("%c", &msg[i]);
        if (msg[i] == '\n') {
            break;
        }
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    for (int i = 0; i < 80 && msg[i] != '\n'; i++) {
        if (msg[i] >= 'A' && msg[i] <= 'Z') {
            msg[i] = ((msg[i] - 'A') + shift) % 26 + 'A';
        } else if (msg[i] >= 'a' && msg[i] <= 'z') {
            msg[i] = ((msg[i] - 'a') + shift) % 26 + 'a';
        }
    }

    printf("Encrypted message: ");

    for (int i = 0; i < 80 && msg[i] != '\n'; i++) {
        printf("%c", msg[i]);
    }

    printf("\n");

    return 0;

}
