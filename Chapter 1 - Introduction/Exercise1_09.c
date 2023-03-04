#include <stdio.h>
   /* copy input to output; 1st version  */
int main() {
    int currentChar;
    int previousChar;
    currentChar = getchar();
    while (currentChar != EOF) {
        if (currentChar == ' ' && previousChar != ' ')
            putchar(currentChar);
        previousChar = currentChar;
        currentChar = getchar();
    }
}