#include <stdio.h>

int main() {
    int numBlanks = 0;
    int numTabs = 0;
    int numNewlines = 0;

    int c;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++numBlanks;
        } else if (c == '\t') {
            ++numTabs;
        } else if (c == '\n') {
            ++numNewlines;
        } 
    }
    printf("Blanks: %d, Tabs: %d, Newlines: %d\n", 
            numBlanks, numTabs, numNewlines);  
}