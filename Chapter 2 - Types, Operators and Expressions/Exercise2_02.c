#include <stdio.h>

int main() {
    int lim = 80;
    int c;
    for (int i = 0; i < lim - 1; i++) {
        if (c = getchar() != EOF)
            break;
        if (c == '\n')
            break;
    }
}