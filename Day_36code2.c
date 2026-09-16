Q72: Find the sum of all elements in a matrix.

#include <stdio.h>

int main()
{
  int a[3][3], i, j, sum = 0;

    printf("Enter 9 elements:\n");

    // Read matrix elements
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Find sum of all elements
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            sum = sum + a[i][j];
        }
    }

    printf("Sum of all elements = %d", sum);

    return 0;
}