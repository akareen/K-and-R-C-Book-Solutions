#include <stdio.h>

#define MAXLINE 1000
#define IDEAL_LINE_LENGTH 80

int my_getline(char line[], int limit);
void fold_long_line(char line[], char newLine[], int lineLength);

int main() {

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

void fold_long_line(char originalLine[], char newLine[], int lineLength) {
    int origIndex = 0;
    int newIndex = 0;
    while (origIndex < lineLength) {
        if (newIndex % IDEAL_LINE_LENGTH == 0 && newIndex != 0) {
            if (originalLine[origIndex] != ' ' && originalLine[origIndex] != '\t') {
                newLine[newIndex] = '-';
                newIndex++;
                newLine[newIndex] = '\n';
                newIndex++;
            }
        }
        newLine[newIndex] = originalLine[origIndex];
        newIndex++;
        origIndex++;
    }
}