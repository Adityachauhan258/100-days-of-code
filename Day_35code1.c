Q69: Find the second largest element in an array.

#include <stdio.h>

int main()
{
  int a[5], i;
  int largest, second;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    // Initialize largest and second largest
    if(a[0] > a[1])
    {
        largest = a[0];
        second = a[1];
    }
    else
    {
        largest = a[1];
        second = a[0];
    }

    // Find second largest
    for(i = 2; i < 5; i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    printf("Second largest element = %d", second);

    return 0;
}