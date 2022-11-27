#include <stdio.h>

int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Farenheit-Celsius Table\n\n");
    printf("Celsius\t\tFarenheit\n");
    celsius = lower;
    while (celsius <= upper) {
        fahr = (celsius * 1.8) + 32;
        printf("%6.0f \t\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}