#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main() {

}

void squeeze(char s1[], char s2[]) {
    int j = 0;
    for (int i = 0; s1[i] != '\0'; i++) {
        int match = 0;
        for (int k = 0; s2[k] != '\0'; k++) {
            if (s1[i] == s2[k]) {
                match = 1;
                break;
            }
        }
        if (match)
            s1[j++] = s1[i];
    }
    s1[j] = '\0';
}