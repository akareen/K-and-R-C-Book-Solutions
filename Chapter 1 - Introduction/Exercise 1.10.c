#include <stdio.h>

int main() {
    int line [100];
    int size = 0;
    for (int i = 0; i < 100; i++)
        line[i] = 0;
    
    int c = getchar();
    int index = 0;
    while (c != EOF) {
        if (c == '\t' || c == '\n' || c == '\\') {
            if (c == '\t') {
                line[index] = '\\';
                line[index + 1] = 't';
            }
            if (c == '\n') {
                line[index] = '\\';
                line[index + 1] = 'n';
            }
            if (c == '\\') {
                line[index] = '\\';
                line[index + 1] = '\\';
            }
            index++;
        }
        else {
            line[index] = c;
        }
        index++;
        c = getchar();
    }
    for (int i = 0; i < index; i++)
        putchar(line[i]);
    putchar('\n');
}