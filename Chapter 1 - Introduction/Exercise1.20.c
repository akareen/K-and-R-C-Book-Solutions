#include <stdio.h>
#define TABSIZE 4
#define MAXLINE 1000

int readline(char line[], int limit);
void replaceTabs(char oldLine[], char newLine[], int limit);


int main() {
    char oldLine[MAXLINE];
    char newLine[MAXLINE];
    int code = readline(oldLine, MAXLINE);
    while (code != -1) {
        replaceTabs(oldLine, newLine, MAXLINE);
        printf("%s", newLine);
        code = readline(oldLine, MAXLINE);
    }
    return 0;
}


int readLine(char line[], int limit) {
    for (int i = 0; i < limit; i++) {
        int c = getchar();
        if (c == EOF)
            return -1;
        if (c == '\n') {
            line[i] = c;
            return 1;
        }
        line[i] = c;
    }
    return 1;
}

void replaceTabs(char oldLine[], char newLine[], int limit) {
    int i = 0;
    int j = 0;
    while (oldLine[i] != '\0') {
        if (oldLine[i] == '\t') {
            for (int k = 0; k < TABSIZE; k++) {
                newLine[j] = ' ';
                j++;
            }
        }
        else {
            newLine[j] = oldLine[i];
            j++;
        }
        i++;
    }
    newLine[j] = '\0';
}