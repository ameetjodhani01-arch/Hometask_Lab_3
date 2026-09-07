#include <stdio.h>

int main(void)
{
    double pi = 3.14159265358979;

    printf("Pi with 2 decimal places:  %.2f\n", pi);
    printf("Pi with 4 decimal places:  %.4f\n", pi);
    printf("Pi with 6 decimal places:  %.6f\n", pi);
    printf("Pi with 10 decimal places: %.10f\n", pi);

    return 0;
}