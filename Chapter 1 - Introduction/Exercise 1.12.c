#include <stdio.h>
#define IN  0
#define OUT 1

int main() {
    int line [100];
    int size = 0;
    for (int i = 0; i < 100; i++)
        line[i] = 0;
    
    int c = getchar();
    int index = 0;
    int state = IN;
    while (c != EOF) {
        if (c == ' ' || c == '\n' || c == '\t' || c == '\n') {
            if (state == IN) {
                line[index] = '\n';
                index++;
            }
            state = OUT;
        }   
        else {
            state = IN;
            line[index] = c;
            index++;
        }
        c = getchar();
    }
    for (int i = 0; i < index; i++)
        putchar(line[i]);
    putchar('\n');
}