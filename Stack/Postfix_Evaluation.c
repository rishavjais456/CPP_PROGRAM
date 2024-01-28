#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 100

int stack[max];
char postfix[max];
int top = -1;

void push(int c) {
    if (top == max - 1) {
        printf("Overflow\n");
        exit(0);
    }
    top++;
    stack[top] = c;
}

int pop() {
    if (top == -1) {
        printf("Underflow\n");
        exit(0);
    }
    return stack[top--];
}

int post_evaluate() {
    int a, b;
    for (int i = 0; i < strlen(postfix); i++) {
        if (postfix[i] >= '0' && postfix[i] <= '9') {
            push(postfix[i] - '0');
        } else {
            a = pop();
            b = pop();
            switch (postfix[i]) {
                case '/':
                    push(b / a);
                    break;
                case '+':
                    push(a + b);
                    break;
                case '-':
                    push(b - a);
                    break;
                case '*':
                    push(a * b);
                    break;
            }
        }
    }
    return pop();
}

int main() {
    printf("Enter the postfix expression:\n");

  scanf("%[^\n]s",postfix);

    // fgets add '\n' at the end of input string

    int result = post_evaluate();
    printf("Result: %d\n", result);
    return 0;
}
