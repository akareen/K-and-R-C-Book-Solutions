# include <stdio.h>

float convertFarenheitToCelcius(float fahr) {
    return (5.0 * (fahr - 32) / 9);
}

int main() {
    int lower = 0;
    int upper = 300;
    int step = 20;
    float fahr = lower;

    while (fahr <= upper) {
        printf("%6.0f \t\t%6.1f\n", fahr, convertFarenheitToCelcius(fahr));
        fahr = fahr + step;
    }
    return 0;
}
