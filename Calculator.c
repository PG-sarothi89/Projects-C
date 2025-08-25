#include <stdio.h>
// making a simple calculator

int main()
{
    int a, b, sum, minus, product, devide;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    minus = a - b;
    product = a * b;
    devide = a / b;
    printf("Sum: %d\n", sum);
    printf("Minus: %d\n", minus);
    printf("Product: %d\n", product);
    printf("Divide: %d\n", devide);
    return 0;
}