#include <stdio.h>
#include <string.h>

#define MAXLEN 100

void reverse(char s[]) {
    int i, j;
    char c;
    for (i = 0, j = strlen(s)-1; i<j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

void itoa(int n, char s[]) {
    int i, sign;
    long long int ln = n; // Use a long long to store the absolute value of n

    if ((sign = ln) < 0)  // Record sign
        ln = -ln;          // Make n positive

    i = 0;
    do {
        s[i++] = ln % 10 + '0';
    } while ((ln /= 10) > 0);  // Generate digits in reverse order

    if (sign < 0)
        s[i++] = '-';

    s[i] = '\0';
    reverse(s);
}

int main() {
    int n = -2147483647 - 1;
    char s[MAXLEN];

    itoa(n, s);
    printf("n = %d\n", n);
    printf("s = %s\n", s);

    return 0;
}
