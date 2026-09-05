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

    if (number < 0 || number > 255)
    {
        printf("Error, input is not within range!\n");
        return 1;
    }

    printf("\nDecimal: %d\n", number);
    printf("Hexadecimal: 0x%X\n", number);
    printf("Binary: ");

    for (int bit = 7; bit >= 0; bit--)
    {
        printf("%d", (number >> bit) & 1);
    }
    printf("\n");

    return 0;
}
