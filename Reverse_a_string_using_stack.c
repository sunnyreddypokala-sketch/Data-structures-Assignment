#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Push
void push(char ch) {
    stack[++top] = ch;
}

// Pop
char pop() {
    return stack[top--];
}

int main() {
    char str[100];
    int i;

    printf("Enter string ");
    scanf("%s", str);

    // Push all characters
    for(i = 0; str[i] != '\0'; i++) {
        push(str[i]);
    }

    printf("Reversed string ");
    // Pop all characters
    while(top != -1) {
        printf("%c", pop());
    }

    return 0;
}