Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main()
{
  int num, first, last, temp, divisor = 1, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    temp = num;

    while(temp >= 10)
    {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    first = temp;

    result = num - (first * divisor) - last;
    result = result + (last * divisor) + first;

    printf("Number after swapping = %d", result);

    return 0;
}