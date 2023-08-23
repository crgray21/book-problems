#include <stdio.h>

void encrypt(char *msg, int shift);


int main(void) {
    char msg[80];
    int shift;

    printf("Enter message to be encrypted: ");
    fgets(msg, 80, stdin);

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    encrypt(msg, shift);

    printf("Encrypted message: ");
    puts(msg);
    printf("\n");

    return 0;
}


void encrypt(char *msg, int shift) {
    while (*msg) {
        if (*msg >= 'A' &&  *msg <= 'Z') {
            *msg = ((*msg - 'A') + shift) % 26 + 'A';
        } else if (*msg >= 'a' && *msg <= 'z') {
            *msg = ((*msg - 'a') + shift) % 26 + 'a';
        }
        msg++;
    }
}
