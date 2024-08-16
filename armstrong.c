#include <stdio.h>
#include <math.h>
int power(int digit, int len)
{
    int ans = 1;
    for (int i = 1; i <= len; i++)
    {
        ans *= digit;
    }
    return ans;
}
int main()
{
    int n, length = 0, temp1, temp2, arm = 0, ret;
    printf("Enter a number:");
    scanf("%d", &n);
    temp1 = n;
    temp2 = n;
    while (temp1 > 0)
    {
        length++;
        temp1 = temp1 / 10;
    }
    while (temp2 > 0)
    {
        int digit = temp2 % 10;
        ret = power(digit, length);
        arm = arm + ret;
        temp2 /= 10;
    }
    printf("%d\n", length);
    printf("%d\n", arm);
    if (arm == n)
    {
        printf("THe num is armstrong");
    }
    else
    {
        printf("The num is not armstrong");
    }
}