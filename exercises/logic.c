#include <stdio.h>

int main(void)
{
    int age;

    printf("Enter age: ");

    if (scanf("%d", &age) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (age >= 13 && age <= 19)
    {
        printf("Teenager\n");
    }

    if (age < 13 || age > 19)
    {
        printf("Not a teenager\n");
    }

    return 0;
}
