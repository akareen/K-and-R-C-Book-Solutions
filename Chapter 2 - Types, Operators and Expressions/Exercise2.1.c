#include <stdio.h>

long maxRange(long numOfBits, int isSigned);

int main() {
    
    printf("Unsigned Char:  %12d  -%12ld\n", 0, maxRange(8, 0));
    long signed8bit = maxRange(8, 1);
    printf("Signed Char:    %12ld  -%12ld\n\n", -signed8bit, signed8bit);

    printf("Unsigned Short: %12d  -%12ld\n", 0, maxRange(16, 0));
    long signed16bit = maxRange(16, 1);
    printf("Signed Short:   %12ld  -%12ld\n\n", -signed16bit, signed16bit);

    long signed32bit = maxRange(32, 1);
    printf("Unsigned Int:   %12d  -%12ld\n", 0, maxRange(32, 0));
    printf("Signed Int:     %12ld  -%12ld\n\n", -signed32bit, signed32bit);

    printf("Unsigned Long:  %12d  -%12ld\n", 0, maxRange(32, 0));
    printf("Signed Long:    %12ld  -%12ld\n", -signed32bit, signed32bit);
}

long maxRange(long numOfBits, int isSigned) {
    long total = 0;
    long powTwo = 1;
    if (isSigned)
        numOfBits = numOfBits - 1;
    for (int i = 1; i <= numOfBits; i++) {
        total = total + powTwo;
        powTwo = powTwo * 2;
    }
    return total;
}