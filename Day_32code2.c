Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main()
{
  long long n;
  int digit, i, maxDigit = 0, maxCount = 0;
  int count[10] = {0};

    printf("Enter a number: ");
    scanf("%lld", &n);

    // Count occurrence of each digit
    while(n > 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    // Find the digit with maximum occurrence
    for(i = 0; i < 10; i++)
    {
        if(count[i] > maxCount)
        {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Most frequent digit = %d\n", maxDigit);
    printf("Number of times = %d", maxCount);

    return 0;
}