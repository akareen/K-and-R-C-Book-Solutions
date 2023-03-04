#include <stdio.h>
#define STACK_SIZE 100

int stack[STACK_SIZE];
int stackPointer = STACK_SIZE - 1;

void push(int num) {
    stackPointer--;
    if (stackPointer < 0) {
        printf("Stack Overflow");
        return;
    }
    stack[stackPointer] = num;
}

int pop() {
    int val = stack[stackPointer];
    stackPointer++;
    return val;
}

void peek() {
    printf("Top of Stack: %d\n", stack[stackPointer]);
}

void swapTopTwo() {
    if (stackPointer == STACK_SIZE - 1) {
        printf("Cannot swap the number of elements is less than 2");
    }
    else {
        int temp = stack[stackPointer];
        stack[stackPointer] = stack[stackPointer + 1];
        stack[stackPointer + 1] = temp;
    }
}

void clear() {
    stackPointer = STACK_SIZE -1;
}