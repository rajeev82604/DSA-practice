#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow!\n");
        exit(1);
    }
    stack[++top] = value;
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow!\n");
        exit(1);
    }
    return stack[top--];
}

int evaluatePostfix(char *expression) {
    top = -1;

    for (int i = 0; expression[i] != '\0'; i++) {
        if (isdigit(expression[i])) {
            push(expression[i] - '0');
        } else {
            int op2 = pop();
            int op1 = pop();
            int res;

            switch (expression[i]) {
                case '+':
                    res = op1 + op2;
                    break;
                case '-':
                    res = op1 - op2;
                    break;
                case '*':
                    res = op1 * op2;
                    break;
                case '/':
                    res = op1 / op2;
                    break;
                default:
                    printf("Invalid operator: %c\n", expression[i]);
                    exit(1);
            }

            push(res);
        }
    }

    return pop();
}

int main() {
    char expression[MAX_SIZE];
    printf("Enter a postfix expression: ");
    fgets(expression, sizeof(expression), stdin);

    int result = evaluatePostfix(expression);
    printf("Evaluated value: %d\n", result);

    return 0;
}
