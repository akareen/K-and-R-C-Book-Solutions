#include <stdio.h>

int main() {
    int c;
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
        if (c == EOF)
            printf("The end of file value is: %d\n", c);
    }
}