#include <stdio.h>
#define MAXLINE 1000

int main() {
    char line[MAXLINE];
    while (my_getline(line, MAXLINE) > 0) {
        reverse(line);
        printf("%s", line);
    }
    return 0;
}

void reverse(char array[]) {
    //calculate line length exclude newline
    int lineLength = 0;
    while (array[lineLength] != '\n' || array[lineLength] != '\0') {
        lineLength++;
    }
    //reverse line
    for (int i = 0; i < lineLength / 2; i++) {
        char temp = array[i];
        array[i] = array[lineLength - i - 1];
        array[lineLength - i - 1] = temp;
    }
}