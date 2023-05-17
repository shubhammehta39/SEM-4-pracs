# include<stdio.h>
#include<conio.h>

# define MAX 5

void merge(int, int);
void mergearray(int, int, int, int);

int arr_sort[MAX];


int main()
{
    int i;
     printf("\nEnter %d Elements for Sorting\n", MAX);
    for (i = 0; i < MAX; i++)
        scanf("%d", &arr_sort[i]);

    printf("\nYour Data   :");
    for (i = 0; i < MAX; i++)
    {
        printf("\t%d", arr_sort[i]);
    }
    merge(0,MAX-1);
    printf("\n\nSorted Data :");
    for (i = 0; i < MAX; i++)
    {
        printf("\t%d", arr_sort[i]);
    }
    getch();
}
void merge(int i,int j)
{
    int m;
    if(i<j)
    {
        m=(i+j)/2;
        merge(i,m);
        merge(m+1,j);
        mergearray(i,m,m+1,j);
    }
}
void mergearray(int a, int b, int c, int d)
{
int i=a,j=c,k=0;
int t[50];

while(i<=b && j<=d)
{
     if (arr_sort[i] < arr_sort[j])
            t[k++] = arr_sort[i++];
     else
            t[k++] = arr_sort[j++];
}
    while (i <= b)
        t[k++] = arr_sort[i++];

    while (j <= d)
        t[k++] = arr_sort[j++];

    for (i = a, j = 0; i <= d; i++, j++)
        arr_sort[i] = t[j];
}
