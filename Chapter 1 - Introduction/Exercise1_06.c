#include <stdio.h>

int main() {
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    putchar(1);
    return 0;
}