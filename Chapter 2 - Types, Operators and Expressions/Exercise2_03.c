#include <stdio.h>, <ctype.h>

int htoi(char s[]);

int main() {
    char s[] = "0x1A";
    printf("%d", htoi(s));
}

int htoi(char s[]) {
    int multiplier = 1;
    int total = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'x' || s[i] == 'X')
            continue;
        int hex_value = hex_to_int(s[i]);
        if (hex_value == -1)
            return -1;
        total += hex_value * multiplier;
        multiplier *= 16;
    }
    return total;
}

int hex_to_int(char c) {
    if (isdigit(c))
        return c - '0';
    else if (islower(c))
        return c - 'a' + 10;
    else if (isupper(c))
        return c - 'A' + 10;
    else
        return -1;
}

