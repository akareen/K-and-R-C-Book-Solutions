#include <ctype.h>
#include <stdio.h>

double atof(char s[]) {
    double val, power, exp;
    int i, sign, exp_sign;

    for (i = 0; isspace(s[i]); i++)  // Skip white space
        ;

    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;

    for (val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');

    if (s[i] == '.')
        i++;

    for (power = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }

    if (s[i] == 'e' || s[i] == 'E') {
        i++;

        exp_sign = (s[i] == '-') ? -1 : 1;
        if (s[i] == '+' || s[i] == '-')
            i++;

        for (exp = 0.0; isdigit(s[i]); i++)
            exp = 10.0 * exp + (s[i] - '0');

        exp *= exp_sign;
        power *= pow(10.0, exp);
    }

    return sign * val / power;
}

int main() {
    char s1[] = "123.45";
    char s2[] = "123.45e-6";
    char s3[] = "123.45E+6";

    printf("%s = %f\n", s1, atof(s1));
    printf("%s = %f\n", s2, atof(s2));
    printf("%s = %f\n", s3, atof(s3));

    return 0;
}
