#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t value = 255;

    printf("Before: %u\n", value);

    value++;

    printf("After: %u\n", value);

    return 0;
}
