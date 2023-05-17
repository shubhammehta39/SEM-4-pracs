#include <stdio.h>
#define MAX 50
int x[MAX];
int  n, m ;
int adj[MAX][MAX];
void nvalue(int k)
{
    int i,j;
    while (1)
    {
        x[k] = (x[k] + 1) % (m + 1);
        if (x[k] == 0)
        {

            return;
        }

        for (i = 0; i < n; i++)
        {
            if (adj[i][j] != 0 && x[i] == x[k])
            {

                break;
            }
        }

        if (i == n)
            return;
    }
}
void ncolour(int k)
{
    int i;
    while (1)
    {
        nvalue(k);

        if (x[k] == 0)
        {
            return;
        }
        if (k == n)
        {
            for (i = 0; i < n; i++)
            {
                printf("%d ", x[i]);
            }
            printf("\n");
            break;
        }
        else
        {
            ncolour(k + 1);
        }
    }
}
int main()
{
    int i,j;
    printf("enter no. of elements :");
    scanf("%d", &n);
    // printf("enter matrix :");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &adj[i][j]);
        }
    }
    printf("enter no. of colours :");
    scanf("%d", &m);

    ncolour(0);
}