//Program to count blanks, tabs and newlines
#include <stdio.h>

int main() {
    long count = 0;
    int current_char = getchar();
    while (current_char != EOF) {
        if (current_char == '\t' || current_char == '\n' || current_char == ' ')
            count++;
        current_char = getchar();
    }
    printf("The total number of blanks, tabs and newlines is: %ld\n", count);
}