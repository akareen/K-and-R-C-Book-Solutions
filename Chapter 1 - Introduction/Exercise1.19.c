#include <stdio.h>
#define MAXLINE 1000

void reverse(char line[]);
int readline(char line[], int limit);

int main() {
    //read one line at a time and reverse
    char line[MAXLINE];
    int code = readline(line, MAXLINE);
    while (code != -1) {
        reverse(line);
        printf("%s", line);
        code = readline(line, MAXLINE);
    }
    return 0;
}

void reverse(char line[]) {
    int i = 0;
    int j = 0;
    while (line[i] != '\0') {
        i++;
    }
    i--;
    while (i > j) {
        char temp = line[i];
        line[i] = line[j];
        line[j] = temp;
        i--;
        j++;
    }
}

//reads a line into s
int readline(char s[], int limit) {
    int c, i;
    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

