#include <stdio.h>

int productDigits(int n)
{
    if (n == 0)
        return 1;

    return (n % 10) * productDigits(n / 10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Product of digits = %d", productDigits(num));

    return 0;
}