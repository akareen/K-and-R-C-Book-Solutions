#include <stdio.h>
#define MAXLINE 1000

int my_getline(char line[], int limit);

int main() {
    int currentLineLength;
    int minLineLength;
    char currentLine[MAXLINE];

    printf("Type the line length you want to see: ");
    scanf("%d", &minLineLength);

    while ((currentLineLength = my_getline(currentLine, MAXLINE)) > 0) {
        if (currentLineLength > minLineLength)
            printf("Length of current line: %d, Current line: %s",
            currentLineLength, currentLine);
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