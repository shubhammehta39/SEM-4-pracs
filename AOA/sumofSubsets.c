#include <stdio.h>

#define MAX 100
int n, m;
int arr[MAX];
int x[MAX];

int sumofSubsets(int k, int s, int r)
{
    int i;
    x[k] = 1;
    if (s + arr[k] == m)
    {
        for (i = 0; i < n; i++)
        {
            printf("%d ", x[i]);
        }
        printf("\n");
    }
    else if (s + arr[k] + arr[k + 1] <= m)
    {
        sumofSubsets(k + 1, s + arr[k], r - arr[k]);
    }

    if (s + arr[k + 1] <= m && s + r - arr[k] >= m)
    {
        sumofSubsets(k + 1, s, r - arr[k]);
    }
}
int main()
{
    int i;
    int t = 0;
    printf("enter no. of elements : ");
    scanf("%d", &n);
    printf("enter the elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        t += arr[i];
        x[i] = 0;
    }
    printf("enter sum : ");
    scanf("%d", &m);
    sumofSubsets(0, 0, t);
}