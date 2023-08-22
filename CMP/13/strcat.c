// a strcat implementation

char* strcat1(char *s1, const char *s2);
char* strcat2(char *s1, const char *s2);

int main(void) {
    return 0;
}


char* strcat1(char *s1, const char *s2) {
    char *p = s1;

    while (*p != '\0')
        p++;
    while (*s2 != '\0') {
        *p = *s2;
        p++;
        s2++;
    }
    *p = '\0';
    return s1;
}


char* strcat2(char *s1, const char *s2) {
    char *p = s1;

    while (*p)
        p++;
    while ((*p++ = *s2++))    // the value copied into *p is the value that the while loops uses to test for truth
        ;
    return s1;
}
