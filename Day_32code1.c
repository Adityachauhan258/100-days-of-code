Q63: Merge two arrays.

#include <stdio.h>

int main()
{
  int a[5], b[5], c[10];
  int i, j = 0;

    printf("Enter 5 elements of first array:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter 5 elements of second array:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }

    // Merge first array
    for(i = 0; i < 5; i++)
    {
        c[j] = a[i];
        j++;
    }

    // Merge second array
    for(i = 0; i < 5; i++)
    {
        c[j] = b[i];
        j++;
    }

    printf("Merged array:\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}