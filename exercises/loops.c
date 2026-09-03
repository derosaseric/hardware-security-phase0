#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            printf("i = %d\n", i);
        }
    }

    int count = 5;

    while (count > 0)
    {
        printf("Countdown: %d\n", count);
        count--;
    }

    printf("Done!\n");

    return 0;
}
