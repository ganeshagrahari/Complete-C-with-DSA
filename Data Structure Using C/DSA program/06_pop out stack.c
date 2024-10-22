#include <stdio.h>

#define MAX_SIZE 100

int stack[MAX_SIZE]; // Array to store elements
int top = -1; // Index of the top element

// Function to push an element onto the stack

void push(int element) {
    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow: Cannot push element %d, stack is full\n", element);
        return;
    }
    stack[++top] = element;
    printf("Pushed %d into the stack\n", element);
}

// Function to pop an element from the stack
int pop() {
    if (top == -1) {
        printf("Stack Underflow: Cannot pop element, stack is empty\n");
        return -1; // Returning -1 indicating stack underflow
    }
    printf("Popped %d from the stack\n", stack[top]);
    return stack[top--]; // Decrement top after returning the element
}

int main() {
    // Pushing elements onto the stack
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    // Popping elements from the stack
    printf("\nPopping elements from the stack:\n");
    while (top != -1) {
        pop();
    }

    return 0;
}
