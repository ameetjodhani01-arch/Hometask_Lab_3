#include <stdio.h>

int main(void)
{
    char fullName[100];

    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Your full name is: ");
    puts(fullName);

    return 0;
}