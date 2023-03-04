#include <stdio.h>
#define TABSTOP 4

int main() {

}

void entab(char line[]) {
    int i = 0;
    while (line[i] != '\0') {
        if (line[i] == ' ') {
            int spaces = 1;
            while (line[i + spaces] == ' ') {
                spaces++;
            }
            if (spaces >= TABSTOP) {
                line[i] = '\t';
                for (int j = 1; j < spaces; j++) {
                    line[i + j] = ' ';
                }
            }
        }
        i++;
    }
}