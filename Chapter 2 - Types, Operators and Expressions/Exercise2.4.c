#include <stdio.h>
#include <string.h>

void squeeze(char source[], char remove[]);
int squeezeHashTimed(char source[], char remove[]);
int squeezeLoopTimed(char source[], char remove[]);

int main() {
    char test[] = "fbsidhfbsdlifbiqiji4253617rnxnfkdslph18237rja[";
    char remv[] = "jgsbsdbawhp9498hnehb32bfebsngojdmas-=";
    int hashTimed = squeezeHashTimed(test, remv);
    char test1[] = "fbsidhfbsdlifbiqiji4253617rnxnfkdslph18237rja[";
    char remv1[] = "jgsbsdbawhp9498hnehb32bfebsngojdmas-=";
    int loopTimed = squeezeLoopTimed(test1, remv1);
    printf("Hash operations: %d, Loop operations: %d\n", hashTimed, loopTimed);
}

void squeeze(char source[], char remove[]) {
    int all_characters [256];
    for (int i = 0; i < 256; i++)
        all_characters[i] = 0;
    for (int i = 0; remove[i] != '\0'; i++) {
        all_characters[remove[i]] = 1;
    }
    int setIndex = 0;
    for (int getIndex = 0; source[getIndex] != '\0'; getIndex++) {
        if (!all_characters[source[getIndex]])
            source[setIndex++] = source[getIndex];
    }
    source[setIndex] = '\0';
}

//number of operations test
int squeezeHashTimed(char source[], char remove[]) {
    int numOperations = 0;
    int all_characters [256];
    for (int i = 0; i < 256; i++) {
        all_characters[i] = 0;
        numOperations++;
    }
        
    for (int i = 0; remove[i] != '\0'; i++) {
        all_characters[remove[i]] = 1;
        numOperations++;
    }
    int setIndex = 0;
    for (int getIndex = 0; source[getIndex] != '\0'; getIndex++) {
        numOperations++;
        if (!all_characters[source[getIndex]]) {
            source[setIndex++] = source[getIndex];
            numOperations++;
        }
    }
    source[setIndex] = '\0';
    return numOperations;
}

int squeezeLoopTimed(char source[], char remove[]) {
    int numOperations = 0;
    int setIndex = 0;
    for (int getIndex = 0; source[getIndex] != '\0'; getIndex++) {
        numOperations++;
        int swap = 1;
        for (int i = 0; remove[i] != '\0'; i++) {
            numOperations++;
            if (source[getIndex] == remove[i]) {
                numOperations++;
                swap = 0;
                break;
            }
        }
        if (swap) {
            source[setIndex++] = source[getIndex];
            numOperations++;
        }
    }
    source[setIndex] = '\0';
    return numOperations;
}