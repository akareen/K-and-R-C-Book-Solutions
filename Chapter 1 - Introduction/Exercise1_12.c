#include <stdio.h>
//print input one word per line
int main() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            putchar('\n');
        } else {
            putchar(c);
        }
    }
    return 0;
}