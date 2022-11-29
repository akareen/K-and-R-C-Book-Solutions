# include <stdio.h>
# define MAXLINE 1000

int getLine(char line[], int maxline);

int main() {
    char line[MAXLINE];
    char allLines[MAXLINE][MAXLINE];
    int currentLine = 0;

    for (int i = 0; i < MAXLINE; i++) {
        int code = getLine(line, MAXLINE);
        if (code == 0)
            break;
        else {
            for (int j = 0; j < MAXLINE; j++) {
                allLines[currentLine][j] = line[j];
            }
            currentLine++;
        }
    }
    for (int i = 0; i < currentLine; i++) {
        int j = 0;
        int currentChar = allLines[i][j];
        while (currentChar != '\0') {
            putchar(currentChar);
            j++;
            currentChar = allLines[i][j];
        }
        putchar('\n');
    }

    return 0;
    
}

int getLine(char line[], int maxline) {
    int encounteredValid = 0;
    int posInLine = 0;
    for (int i = 0; i < maxline; i++) {
        int c = getchar();
        if (c == EOF)
            return -1;
        if (c != ' ' && c != '\t' && c != '\n') {
            encounteredValid = 1;
            line[posInLine] = c;
            posInLine++;
        }
        else if (encounteredValid == 1) {
            line[posInLine] = '\0';
            return 1;
        }
    }
}