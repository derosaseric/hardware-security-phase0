#include <stdio.h>

int main(void)
{
    int age = 36;
    char grade = 'A';
    float voltage = 3.3f;
    double measurement = 12.3456789;

    printf("Age: %d\n", age);
    printf("Grade: %c\n", grade);
    printf("Voltage: %.2f V\n", voltage);
    printf("Measurement: %.7f\n", measurement);

    printf("\nMemory sizes:\n");

    printf("char:  %zu byte(s)\n", sizeof(char));
    printf("short:  %zu byte(s)\n", sizeof(short));
    printf("int:  %zu byte(s)\n", sizeof(int));
    printf("long:  %zu byte(s)\n", sizeof(long));
    printf("float:  %zu byte(s)\n", sizeof(float));
    printf("double:  %zu byte(s)\n", sizeof(double));

    return 0;
}
