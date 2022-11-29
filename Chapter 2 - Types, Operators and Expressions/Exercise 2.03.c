#include <stdio.h>
#include <string.h>

long htoi(char array[]);
int hexaDigitToDecimal(char hexaDigit);


int main() {
    printf("%ld\n",htoi("0x2c9b"));
}

long htoi(char array[]) {
    long total = 0;
    long power = 1; // hexadecimal raises to power of 16, starts at 16^0
    for (int i = strlen(array) - 1; i >= 0; i--) {
        char currentChar = array[i];
        if (currentChar == 'x' || currentChar == 'X')
            break;
        total += (hexaDigitToDecimal(currentChar) * power);
        power = power * 16;
        
    }
    return total;
}

int hexaDigitToDecimal(char hexaDigit) {
    if (hexaDigit >= '0' && hexaDigit <= '9')
        return hexaDigit - '0';
    if (hexaDigit >= 'a' && hexaDigit <= 'f')
        return 10 + (hexaDigit - 'a');
    if (hexaDigit >= 'A' && hexaDigit <= 'F')
        return 10 + (hexaDigit - 'A');
    return -1;
}