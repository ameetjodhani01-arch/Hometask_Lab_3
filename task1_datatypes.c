#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int age = 20;
    float temperature = 36.5f;
    double pi = 3.141592653589;
    char grade = 'A';
    bool isStudent = true;

    printf("Integer value: %d, Size: %zu bytes\n", age, sizeof(age));
    printf("Float value: %.2f, Size: %zu bytes\n", temperature, sizeof(temperature));
    printf("Double value: %.10f, Size: %zu bytes\n", pi, sizeof(pi));
    printf("Character value: %c, Size: %zu byte(s)\n", grade, sizeof(grade));
    printf("Boolean value: %d, Size: %zu byte(s)\n", isStudent, sizeof(isStudent));

    return 0;
}