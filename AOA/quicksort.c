#include <stdio.h>
#include <conio.h>
int quicksort(int arr[20], int first, int last)
{
    int i, j, pivot, temp;
    if (first < last)
    {

        pivot = first;
        i = first;
        j = last;

        while (i < j)
        {
            while (arr[i] < arr[pivot] && i < last)
            {
                i++;
            }
            while (arr[j] > arr[pivot])
            {
                j--;
            }
            if (i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;
        quicksort(arr, first, j - 1);
        quicksort(arr, j + 1, last);
        
    }
}
int main()
{
    int i, j, n, arr[20];
    printf("enter no. of elements :");
    scanf("%d", &n);
    printf("enter elements :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    quicksort(arr, 0, n - 1);
    for (i = 0; i < n; i++)
    {

        printf("elements in order are %d :", arr[i]);
    }
    return 0;
}