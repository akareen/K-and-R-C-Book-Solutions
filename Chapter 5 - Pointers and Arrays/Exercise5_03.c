#include <stdio.h>

void my_strcat(char *source, char *target);

int main(void) {
    char source[] = "Hello";
    char target[] = "World";
    my_strcat(source, target);
    printf("%s\n", source);
}


void my_strcat(char *source, char *target) {
    for (; *source != '\0'; source++);
    for (; *target != '\0'; target++, source++) {
        *source = *target;
    }
    *source = '\0';
}