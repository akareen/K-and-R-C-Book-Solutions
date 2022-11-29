#include <stdio.h>

int main() {
    int characterOccurence [128];
    for (int i = 0; i < 128; i++) {
        characterOccurence[i] = 0;
    }
    int c = getchar();
    while (c != EOF) {
        characterOccurence[c]++;
        c = getchar();
    }

    for (int i = 0; i < 128; i++) {
        int occurencesOfChar = characterOccurence[i];
        if (occurencesOfChar > 0) {
            putchar(i);
            printf("  ");
            for (int j = 0; j <= occurencesOfChar; j++) {
                printf("*");
            }
            printf("\n");
        }
    }

}