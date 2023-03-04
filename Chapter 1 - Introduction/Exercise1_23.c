#include <stdio.h>
#define MAX_LINE_LENGTH 200 * 200

char original_c_program[MAX_LINE_LENGTH];
char comnment_removed_c_program[MAX_LINE_LENGTH];

void remove_comments_from_program(char c_program[], char new_c_program[]);

int main() {

}

void remove_comments_from_program(char c_program[], char new_c_program[]) {
    int i = 0;
    int j = 0;

    while (c_program[i + 1] != '\0') {
        if (c_program[i] == '\\' && c_program[i + 1] == '\\') {
            while (c_program[i] != '\n' || c_program[i] != '\0')
                i++;
        }
        if (c_program[i] == '\\' && c_program[i + 1] == '*') {
            while ((c_program[i] != '*' && c_program[i + 1] != '\\') 
                    && c_program[i] != '\0')
                i++;
        }
        if (c_program[i] == '\0') {
            new_c_program[j] = '\0';
            return;
        }
        new_c_program[j] = c_program[i];
        i++;
        j++;
    }
}

