#include <stdio.h>
#include <string.h>

int any(char sourceString[], char searchString[]);

int main() {

}

int any(char sourceString[], char searchString[]) {
    //creates a boolean array 0 = char[i] not in searchString, 1 = is in
    int all_characters [256];
    for (int i = 0; i < 256; i++)
        all_characters[i] = 0;
    for (int i = 0; searchString[i] != '\0'; i++) {
        all_characters[searchString[i]] = 1;
    }
    for (int i = 0; sourceString[i] != '\0'; i++) {
        if (all_characters[sourceString[i]])
            return i;
    }
    return -1;
}