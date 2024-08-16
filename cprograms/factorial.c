#include <stdio.h>
int main()
{
    int n, i = 1, fact = 1;
    printf("Enter a number:");
    scanf("%d", &n);
    if (n >= 0)
    {
        while (i <= n)
        {
            fact = fact * i;
            i++;
        }
        printf("Factorial:%d", fact);
    }
    else
    {
        printf("Negative number");
    }
}
