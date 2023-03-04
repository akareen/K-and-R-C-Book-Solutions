#include <stdio.h>

int main() {
    float lower = -20;
    float upper = 100;
    float step  = 5;

    float celcius = lower;
    printf("%3s %6s\n", "C", "F");
    while (celcius <= upper) {
        float fahr = celcius * 9 / 5 + 32;
        printf("%3.0f %6.1f\n", celcius, fahr);
        celcius += step;
    } 
}