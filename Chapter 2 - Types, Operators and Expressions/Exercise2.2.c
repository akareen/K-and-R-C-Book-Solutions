#include <stdio.h>

int main() {
    int lim = 1000;
    char array[lim];
    for (int i = 0; i < lim-1; i++) {
        int c = getchar();
        if (c == '\n')
            break;
        if (c == EOF)
            break;
        array[i] = c;
    }
}