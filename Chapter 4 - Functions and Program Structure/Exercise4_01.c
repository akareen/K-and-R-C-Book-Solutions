#include <stdio.h>

int main() {

}

int strindex(char s[], char t) {
    int rightMostIndex = -1;
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] == t)
            rightMostIndex = i;
    return rightMostIndex;
}