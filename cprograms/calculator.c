#include <stdio.h>
int main()
{
    int a, b;
    char oper;
    printf("Enter a number 1:");
    scanf("%d", &a);
    printf("Enter a number 2:");
    scanf("%d", &b);
    printf("Enter the operator:");
    scanf(" %c", &oper);
    switch (oper)
    {
    case '+':
        printf("A+B=%d", a + b);
        break;
    case '-':
        printf("A-B=%d", a - b);
        break;
    case '*':
        printf("A*B=%d", a * b);
        break;
    case '/':
        printf("A*B=%d", a / b);
        break;
    case '%':
        printf("A%B=%d", a % b);
        break;

    default:
        printf("Enter valid operator");
        break;
    }
}