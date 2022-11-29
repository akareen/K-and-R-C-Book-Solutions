#include <stdio.h>
#define IN  0
#define OUT 1

int main() {
    int lengthsOfWords [100];
    int state = IN;
    int index = 0;
    int c = getchar();
    int wordsize = 0;
    int largestWord = 0;

    while (c != EOF) {
        c = getchar();
        if (c == ' ' || c == '\n' || c == '\t' || c == '\n') {
            if (state == IN) {
                lengthsOfWords[index] = wordsize;
                index++;
                if (wordsize > largestWord)
                    largestWord = wordsize;
                wordsize = 0;
            }
            state = OUT;
        }   
        else {
            state = IN;
            wordsize++;
        }
    }
    printf("\n");

    for (int i = largestWord + 2; i > 0; i--) {
        for (int j = 0; j <= index; j++) {
            if (lengthsOfWords[j] >= i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

}