Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>

  int main()
{
    int num, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num != 0)
    {
        digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }

    if(original == sum)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not an Armstrong Number");
    }

    return 0;
}