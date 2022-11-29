#include <stdio.h>


int main() {
    //initialises a multi dimensional array storing each line of input
    //starts with a default null character of '\0' to show it has not been filled
    char lineInput[1000][1000];
    for (int i = 0; i < 1000; i++)
        lineInput[i][0] = '\0';
    
    int c;
    int currentLine = 0;
    int positionInLine = 0;   
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            lineInput[currentLine][positionInLine] = c;
            currentLine++;
        }
        else {
            lineInput[currentLine][positionInLine] = c;
            positionInLine++;
        }
    }

    for (int i = 0; i <= currentLine; i++) {
        int j = 0;
        int currentChar = lineInput[i][j];
        while (currentChar != '\0') {
            putchar(currentChar);
            j++;
            currentChar = lineInput[i][j];
        }
        putchar('\n');
    }
    return 0;
}