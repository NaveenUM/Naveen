#include <stdio.h>
int main()
{
    double number;
    printf("Enter a number: ");
    scanf("%lf", &number);
    if (number <= 0.0)
    {
        if (number == 0.0)
            printf("You entered 0");
        else
            printf("it is a negative number");
    }
    else
        printf("it is a positive number");
    return 0;
}
