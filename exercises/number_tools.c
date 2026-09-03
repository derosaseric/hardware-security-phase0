#include <stdio.h>

int is_even(int number)
{
    if (number % 2 == 0)
    {
        return 1;
    }

    return 0;
}

int square(int number)
{
    return number * number;
}

void print_sign(int number)
{
    if (number >= 0)
    {
        printf("Sign: Positive\n");
    }
    else
    {
        printf("Sign: Negative\n");
    }
}

int main(void)
{
    int user_number;

    printf("Enter an intger: ");
    if (scanf("%d", &user_number) != 1)
    {
        printf("Invalid input!\n");
        return 1;
    }

    printf("\nNumber: %d\n", user_number);

    print_sign(user_number);

    if (is_even(user_number))
    {
        printf("Parity: Even\n");
    }
    else
    {
        printf("Parity: Odd\n");
    }

    if (user_number > 100)
    {
        printf("Greater than 100: Yes\n");
    }
    else
    {
        printf("Greater than 100: No\n");
    }

    printf("Square: %d\n", square(user_number));

    return 0;
}
