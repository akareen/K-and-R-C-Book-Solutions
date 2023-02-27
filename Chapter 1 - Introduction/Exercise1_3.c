#include <stdio.h>

int main() {
    float lower = 0;
    float upper = 300;
    float step = 20;

    float fahr = lower;
    printf("%3s %6s\n", "F", "C");
    while (fahr <= upper) {
        float celcius = 5 * (fahr - 32) / 9;
        printf("%3.0f %6.1f\n", fahr, celcius);
        fahr += step;
    }
}