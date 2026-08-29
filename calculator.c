#include <stdio.h>

int main(){
    int num1;
    int num2;
    char op;

    printf("Enter an Integer Value: ");
    scanf("%d", &num1);

    printf("Enter an Integer Value: ");
    scanf("%d", &num2);
    getchar();
    printf("What do you want to do (+,-,*,/): ");
    scanf("%c", &op);

    if (op=='+') {
        printf("Sum of %d and %d = %d\n", num1, num2,(num1 + num2));
    }
    else if (op=='-') {
        printf("Substraction of %d and %d = %d\n", num1, num2,(num1 - num2));
    }
    else if (op=='*') {
        printf("Multiplication of %d and %d = %d\n", num1, num2,(num1 * num2));
    }
    else if (op=='/') {
        printf("Division of %d and %d = %d\n", num1, num2,(num1 / num2));
    }
    else {
        printf("Invalid Context\n");
    }
    return 0;
}

