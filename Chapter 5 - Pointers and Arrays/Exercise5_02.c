#include <stdio.h>
#define BUFSIZE 100

char buf[BUFSIZE];  /* buffer for ungetch */
int bufp = 0;       /* next free position in buf */

int getch(void);
void ungetch(int);
float getfloat(float *pn);

float getfloat(float *pn) {
    int c, sign;
    while (isspace(c = getch())); /* skip white space */
    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c);  /* it is not a number */
        return 0; 
    }
    sign = (c == '-') ? -1 : 1; /* if negative make it so otherwise not */
    
    for (*pn = 0; isdigit(c) && c != '.'; c = getch())
        *pn = 10 * *pn + (c - '0');
    
    if (c == '.') {
        c = getch();
        float multiplier = 0.1;
        while (isdigit(c)) {
            *pn = *pn + (c * multiplier);
            multiplier /= 10;
            c = getch();
        }
    }
    *pn *= sign; /* update to negative or positive */ 
    if (c != EOF)
        ungetch(c);
    return c;
}

int getch(void) { /* get a (possibly pushed-back) character */
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) { /* push character back on input */
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}