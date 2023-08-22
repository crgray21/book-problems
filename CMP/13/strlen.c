// some functions for calculating the length of a string

#include <stddef.h>

size_t strlen1(const char *s);
size_t strlen2(const char *s);
size_t strlen3(const char *s);

int main(void) {
    return 0;
}


size_t strlen1(const char *s) {
    size_t n;

    for (n = 0; *s != '\0'; s++)
        n++;
    return n;
}


size_t strlen2(const char *s) {
    size_t n = 0;

    while (*s++)
        n++;
    return n;
}


// this version ends up being faster because it doesn't have to increment n inside the while loop
size_t strlen3(const char *s) {
    const char *p = s;

    while (*s)
        s++;
    return s - p;
}
