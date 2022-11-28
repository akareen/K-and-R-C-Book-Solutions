# include <stdio.h>
# define MAXLINE 1000

//programs that checks c program for syntax errors such as unmatched parentheses brackets and braces
//also checks for quotes and comments

int getLine(char line[], int maxline);
int isComment(char line[], int pos);
int isQuote(char line[], int pos);
void removeComments(char line[], char newLine[]);
void removeQuotes(char line[], char newLine[]);
void removeCommentsAndQuotes(char line[], char newLine[]);
int isBracket(char c);
int isParenthesis(char c);
int isBrace(char c);


int main() {
    char line[MAXLINE];
    char newLine[MAXLINE];
    int code = getLine(line, MAXLINE);
    while (code != -1) {
        removeCommentsAndQuotes(line, newLine);
        int i = 0;
        int bracketCount = 0;
        int parenthesisCount = 0;
        int braceCount = 0;
        while (newLine[i] != '\0') {
            if (isBracket(newLine[i]))
                bracketCount++;
            else if (isParenthesis(newLine[i]))
                parenthesisCount++;
            else if (isBrace(newLine[i]))
                braceCount++;
            i++;
        }
        if (bracketCount != 0)
            printf("Error: Unmatched brackets\n");
        if (parenthesisCount != 0)
            printf("Error: Unmatched parentheses\n");
        if (braceCount != 0)
            printf("Error: Unmatched braces\n");
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

void removeCommentsAndQuotes(char line[], char newLine[]) {
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
        else if (isQuote(line, i)) {
            newLine[j] = line[i];
            i++;
            j++;
            while (line[i] != '"') {
                newLine[j] = line[i];
                i++;
                j++;
            }
            newLine[j] = line[i];
            i++;
            j++;
        }
        else {
            newLine[j] = line[i];
            i++;
            j++;
        }
    }
    newLine[j] = '\0';
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

void removeQuotes(char line[], char newLine[]) {
    int i = 0;
    int j = 0;
    while (line[i] != '\0') {
        if (isQuote(line, i)) {
            newLine[j] = line[i];
            i++;
            j++;
            while (line[i] != '"') {
                newLine[j] = line[i];
                i++;
                j++;
            }
            newLine[j] = line[i];
            i++;
            j++;
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

int isQuote(char line[], int pos) {
    if (line[pos] == '"')
        return 1;
    return 0;
}

int isBracket(char c) {
    if (c == '[' || c == ']')
        return 1;
    return 0;
}

int isParenthesis(char c) {
    if (c == '(' || c == ')')
        return 1;
    return 0;
}

int isBrace(char c) {
    if (c == '{' || c == '}')
        return 1;
    return 0;
}

