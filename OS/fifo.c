#include <stdio.h>
int main()
{
    int incoming[] = {1, 2, 3, 4, 3, 2, 2, 5, 6, 6, 3, 1, 7};
    int pagefault = 0, frames = 3, temp[frames], pages, s, m, n;
    pages = sizeof(incoming) / sizeof(incoming[0]);
    printf("Incoming \t Frame 1 \t Frame 2 \t Frame 3");
    for (m = 0; m < frames; m++)
    {
        temp[m] = -1;
    }
    for (m = 0; m < pages; m++)
    {
        s = 0;
        for (n = 0; n < frames; n++)
        {
            if (incoming[m] == temp[n])
            {
                s++;
                pagefault--;
            }
        }
        pagefault++;
        if ((pagefault <= frames) && s == 0)
        {
            temp[m] = incoming[m];
        }
        else if (s == 0)
        {
            temp[(pagefault - 1) % frames] = incoming[m];
        }
        printf("\n");
        printf("%d\t\t\t", incoming[m]);

        for (n = 0; n < frames; n++)
        {
            if (temp[n] != -1)
                printf(" %d\t\t\t", temp[n]);
            else
                printf(" - \t\t\t");
        }
    }
    printf("\nTotal Page Faults:\t%d\n", pagefault);
}