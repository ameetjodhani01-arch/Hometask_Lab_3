#include <stdio.h>

int main(void)
{
    int age = 20;
    float height = 5.8f;
    double salary = 55000.75;
    char grade = 'A';
    char name[] = "Ahmed";
    long population = 2500000L;

    printf("Name: %s | Age: %d | Height: %.1f | Salary: %.2f | Grade: %c | Population: %ld\n",
           name, age, height, salary, grade, population);

    return 0;
}