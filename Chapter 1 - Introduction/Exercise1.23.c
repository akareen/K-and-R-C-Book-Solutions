#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);
void removeComments(char line[], char newLine[]);
int isComment(char line[], int pos);

int main() {
    char line[MAXLINE];
    char newLine[MAXLINE];
    int code = getLine(line, MAXLINE);
    while (code != -1) {
        removeComments(line, newLine);
        printf("%s", newLine);
        code = getLine(line, MAXLINE);
    }
    return 0;
}

int getLine(char line[], int maxline) {
    for (int i = 0; i < maxline; i++) {
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

void removeComments(char line[], char newLine[]) {
    int i = 0;
    int j = 0;
    while (line[i] != '\0') {
        if (isComment(line, i)) {
            i += 2;
            while (line[i] != '*' || line[i + 1] != '/') {
                i++;
            }
            i += 2;
        }
        else {
            newLine[j] = line[i];
            i++;
            j++;
        }
    }
    newLine[j] = '\0';
}

int isComment(char line[], int pos) {
    if (line[pos] == '/' && line[pos + 1] == '*')
        return 1;
    return 0;
}
