#include <stdio.h>

void integerToBase(int number, char string_repr[], int base) {
    if (base > 36)
        printf("The base provided is too high the maximum is Base 36");
    else if (base < 2)
        printf("The base provided is too low the minimum is Base 2");
    else {
        int i = 0;
        int sign = number;
        do {
            string_repr[i++] = digitToRepresentation(abs(number % base));
        } while ((number /= base) != 0);
        if (sign < 0)
            string_repr[i++] = '-';
        string_repr[i] = '\0';
        reverseString(string_repr);
    }
}

char digitToRepresentation(int digit) {
    if (digit <= 9)
        return digit;
    return 'A' + (digit - 10);
}

void reverseString(char s[]) {
    int len = 0;
    for (int i = 0; s[i] != '\0'; i++)
        len++;
    for (int i = 0; i < len/2; i++) {
        char temp = s[i];
        s[i] = s[len-i];
        s[len-i] = temp;
    }
}