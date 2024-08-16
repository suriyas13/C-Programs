#include <stdio.h>
int main()
{
    int f1 = 0, f2 = 1, f3, n, i = 2;
    printf("Enter the range:");
    scanf("%d", &n);
    printf("%d\t%d\t", f1, f2);
    do
    {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        printf("%d\t", f3);
        i++;
    } while (i < n);
}