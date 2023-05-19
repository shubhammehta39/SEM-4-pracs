//char stuff
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("Enter number of frames: ");
    scanf("%d", &n);
    char arr[100][100], word[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", word);
        strcpy(arr[i], word);
        char l[100];
        sprintf(l, "%ld", strlen(arr[i])+1);
        strcat(l,word);
        strcpy(arr[i], l);
    }
    for (int i = 0; i < n; i++)
        printf("%s", arr[i]);

    return 0;
}