#include <stdio.h>

int main() {
    int c;
    c = getchar();
    printf("%d\n", getchar());
    while (c != EOF) {
        putchar(c);
        c = getchar();
        printf("%d\n", getchar());
    }
}