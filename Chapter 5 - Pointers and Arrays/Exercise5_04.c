#include <stdio.h>

int strend(char *s, char *t);

int main() {
    char s[] = "Hello world";
    char t1[] = "world";
    char t2[] = "word";
    printf("%d\n", strend(s, t1)); // should print 1
    printf("%d\n", strend(s, t2)); // should print 0
    return 0;
}

int strend(char *s, char *t) {
    int slen = 0;
    int tlen = 0;
    while (*s) {
        slen++;
        s++;
    }
    while (*t) {
        tlen++;
        t++;
    }
    if (tlen > slen) {
        return 0;
    }
    while (tlen > 0) {
        if (*(s - 1) != *(t - 1)) {
            return 0;
        }
        s--;
        t--;
        tlen--;
    }
    return 1;
}
