#include <stdio.h>
#define MAXLINE 1000 // maximum input line length

int my_getline(char line[], int maxline);
void remove_trailing_blanks_tabs(char line[]);

int main() {
    char line[MAXLINE]; // current input line
    int len; // length of current input line

    while ((len = getline(line, MAXLINE)) > 0) {
        remove_trailing_blanks_tabs(line);

        // delete entirely blank lines
        if (len > 1) {
            printf("%s", line);
        }
    }
    return 0;
}

// getline: read a line into s, return length
int getline(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

// remove_trailing_blanks_tabs: remove trailing blanks and tabs from s
void remove_trailing_blanks_tabs(char s[]) {
    int i;

    for (i = 0; s[i] != '\n'; ++i) {
        ; // find end of line
    }

    --i; // back off from '\n'

    while (i >= 0 && (s[i] == ' ' || s[i] == '\t')) {
        --i; // remove trailing blanks and tabs
    }

    if (i >= 0) {
        ++i;
        s[i] = '\n'; // put newline character back
        ++i;
        s[i] = '\0'; // add null character
    }
}
