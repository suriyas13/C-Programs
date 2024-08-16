#include <stdio.h>
#include <math.h>

int main()
{
    int n, length = 0, temp, arm = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    temp = n;

    // Calculate the number of digits in the number
    while (temp != 0)
    {
        length++;
        temp /= 10;
    }

    // Calculate the Armstrong number
    temp = n; // Reset temp to the original number
    while (temp != 0)
    {
        int digit = temp % 10;
        arm += pow(digit, length);
        temp /= 10;
    }
    printf

        // Check if the number is an Armstrong number
        if (arm == n)
    {
        printf("The number is an Armstrong number\n");
    }
    else
    {
        printf("The number is not an Armstrong number\n");
    }

    return 0;
}
