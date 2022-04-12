#include <stdio.h>
int main()
{
    char ch;
    float a, b;
    printf("Enter the first number\n");
    scanf("%f", &a);
    printf("Enter the second number\n");
    scanf("%f", &b);
    printf("Enter the operation you want to perform\n");
    scanf(" %c", &ch);
    if (ch == '+')
    {
        printf("The sum of %f and %f is %f\n", a, b, (a + b));
    }
    else if (ch == '-')
    {
        printf("The substraction of %f and %f is %f\n", a, b, (a - b));
    }
    else if (ch = '*')
    {
        printf("The multiplication of %f and %f is %f\n", a, b, (a * b));
    }
    else if (ch == '/')
    {
        printf("The devision of %f and %f is %f\n", a, b, (a / b));
    }

    return 0;
}