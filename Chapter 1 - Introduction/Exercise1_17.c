#include <stdio.h>
#define MAXLINE 1000

int my_getline(char line[], int limit);

int main() {
    int currentLineLength;
    char currentLine[MAXLINE];

    while ((currentLineLength = my_getline(currentLine, MAXLINE)) > 0) {
        if (currentLineLength > 80)
            printf("Current line: %s", currentLine);
    }
    return 0;
}

int my_getline(char line[], int limit) {
    int currentCharacter, i;
    for (i = 0; i < limit; i++) {
        currentCharacter = getchar();
        if (currentCharacter == EOF) 
            break;
        if (currentCharacter == '\n') {
            line[i] = currentCharacter;
            i++;
            break;
        }
        line[i] = currentCharacter;
    }
    line[i] = '\0';
    return i;
}