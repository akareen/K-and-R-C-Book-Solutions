#include <stdio.h>
#define IN 1
#define OUT 0

int main() {
    int numLines = 0;
    int numWords = 0;
    int numChars = 0;

    int state = OUT;
    int c;
    while ((c = getchar()) != EOF) {
        numChars++;
        if (c == '\n') {
            numLines++;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } 
        else if (state == OUT) {
            state = IN;
            numWords++;
        }
    }
    printf("Lines: %d, Words: %d, Characters: %d\n", 
            numLines, numWords, numChars);
}