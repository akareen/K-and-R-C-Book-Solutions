//Program that reads the line and changes more than 1 space to 1 space
#include <stdio.h>

int main() {
    int line [100];
    int size = 0;
    for (int i = 0; i < 100; i++)
        line[i] = 0;
    
    int c = getchar();
    int index = 0;
    int spaceCount = 0;
    while (c != '\n') {
        if (c == ' ') {
            if (spaceCount == 0) {
                line[index] = c;
                index++;
            }
            spaceCount++;
        }
        else {
            spaceCount = 0;
            line[index] = c;
            index++;
        }
        c = getchar();
    }
    for (int i = 0; i < index; i++)
        putchar(line[i]);
    putchar('\n');
}