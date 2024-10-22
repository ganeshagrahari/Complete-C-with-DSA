#include <stdio.h>

#define MAX_SIZE 6

int stack[MAX_SIZE]; // Array to store elements
int top = -1; // Index of the top element bcs indexing is started from 0

// Function to push an element onto the stack

void push(int element) {
    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow: Cannot push element %d, stack is full\n", element);
        return;
    }
    stack[++top] = element;
    printf("Pushed %d into the stack\n", element);
}


int main() {
    // Pushing elements onto the stack
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(100);

    return 0;
}
