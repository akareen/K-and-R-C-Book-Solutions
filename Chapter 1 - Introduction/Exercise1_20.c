#include <stdio.h>
#define TABSTOP 8

int main() {

}

void detab(char line[]) {
    int i = 0;
    while (line[i] != '\0') {
        if (line[i] == '\t') {
            int spaces = TABSTOP - (i % TABSTOP);
            for (int j = 0; j < spaces; j++) {
                line[i + j] = ' ';
            }
        }
        i++;
    }
}