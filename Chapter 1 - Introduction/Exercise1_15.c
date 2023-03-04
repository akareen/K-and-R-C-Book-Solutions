#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

int fahrToCelcius(int fahr);

int main() {
    printf("%3s %6s\n", "F", "C");
    for (int fahr = LOWER; fahr <= UPPER; fahr += STEP) {
        printf("%3d %6.1f\n", fahr, fahrToCelcius(fahr));
    }
}

int fahrToCelcius(int fahr) {
    return 5 * (fahr - 32) / 9;
}