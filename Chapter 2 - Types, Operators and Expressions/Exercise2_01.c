#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Maximum value of a signed char: %d\n", SCHAR_MAX);
    printf("Minimum value of a signed char: %d\n", SCHAR_MIN);
    printf("Maximum value of an unsigned char: %d\n", UCHAR_MAX);
    printf("Maximum value of a signed short: %d\n", SHRT_MAX);
    printf("Minimum value of a signed short: %d\n", SHRT_MIN);
    printf("Maximum value of an unsigned short: %d\n", USHRT_MAX);
    printf("Maximum value of a signed int: %d\n", INT_MAX);
    printf("Minimum value of a signed int: %d\n", INT_MIN);
    printf("Maximum value of an unsigned int: %u\n", UINT_MAX);
    printf("Maximum value of a signed long: %ld\n", LONG_MAX);
    printf("Minimum value of a signed long: %ld\n", LONG_MIN);
    printf("Maximum value of an unsigned long: %lu\n", ULONG_MAX);
}