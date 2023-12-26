#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 100

char stack[MAX_SIZE];
int top = -1;

void push(char oper) {
    if (top == MAX_SIZE - 1) {
        printf("Stack Full!\n");
        exit(1);
    }
    stack[++top] = oper;
}

char pop() {
    if (top == -1) {
        printf("Stack Empty!\n");
        exit(1);
    }
    return stack[top--];
}

int isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^';
}

int precedence(char ch) {
    switch (ch) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
    }
    return -1;
}

void infixToPostfix(char *infix, char *postfix) {
    int i, j;
    j = 0;

    for (i = 0; infix[i] != '\0'; i++) {
        char ch = infix[i];

        if (isalnum(ch)) {
            postfix[j++] = ch;
        } else if (ch == '(') {
            push(ch);
        } else if (ch == ')') {
            while (top != -1 && stack[top] != '(') {
                postfix[j++] = pop();
            }
            if (top == -1 || stack[top] != '(') {
                printf("Invalid Expression!\n");
                exit(1);
            }
            pop(); // Discard the '('
        } else if (isOperator(ch)) {
            while (top != -1 && precedence(ch) <= precedence(stack[top])) {
                postfix[j++] = pop();
            }
            push(ch);
        }
    }

    while (top != -1) {
        if (stack[top] == '(') {
            printf("Invalid Expression!\n");
            exit(1);
        }
        postfix[j++] = pop();
    }

    postfix[j] = '\0'; // Add null terminator to the postfix expression
}

int main() {
    char infix[MAX_SIZE];
    char postfix[MAX_SIZE];

    printf("Enter the infix expression: ");
    fgets(infix, sizeof(infix), stdin);

    infixToPostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);

    return 0;
}
