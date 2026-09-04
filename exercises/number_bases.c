#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter an integer: ");

    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input!\n");
        return 1;
    }

    printf("\nDecimal: %d\n", number);
    printf("Hexadecimal: 0x%X\n", number);

    return 0;
}
