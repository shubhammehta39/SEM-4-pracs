#include <stdio.h>

int main()
{
    int i, j, n, a[100], position, swap;
    printf("enter no.  of elements :");
    scanf("%d", &n);
    printf("enter elements :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    position = i;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[position] > a[j])
            {
                // a[position] = a[j];
                position = j;
            }
        }
        if (position != i)
        {
            swap = a[i];
            a[i] = a[position];
            a[position] = swap;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf(" sequence is : %d", a[i]);
        printf("\n");
    }
}