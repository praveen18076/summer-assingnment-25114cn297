#include <stdio.h>

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    
    int sum = (num * (num + 1)) / 2;// Calculate sum directly using formula

    printf("Sum of first %d natural numbers = %d\n", num, sum);
    return 0;
}
