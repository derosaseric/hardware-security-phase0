#include <stdio.h>

int square(int number)
{
    return number * number;
}

int is_even(int number)
{
    if (number % 2 == 0)
    {
        return 1;
    }

    return 0;
}

int main(void)
{
    int value = 6;
    int result = square(value);

    if (is_even(value))
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }

    printf("%d squared is %d\n", value, result);

    return 0;
}
