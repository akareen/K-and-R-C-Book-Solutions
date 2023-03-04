#include <stdio.h>

int * countCharacters();
void printCharacterOccurence(int characterOccurence[]);

int main() {
    int * characterOccurence = countCharacters();
    printCharacterOccurence(characterOccurence);
    return 0;
}

int * countCharacters() {
    static int characterOccurence[128];
    int c;
    while ((c = getchar()) != EOF) {
        characterOccurence[c]++;
    }
    return characterOccurence;
}

void printCharacterOccurence(int characterOccurence[]) {
    for (int i = 0; i < 128; i++) {
        printf("%c: %4d\n", i, characterOccurence[i]);
    }
}

