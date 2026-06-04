#include <stdio.h>

int main() {
    long long num;
    int count = 0;

   
    printf("Enter an integer: ");
    scanf("%lld", &num);

    
    long long temp = num;

    
    do {
        count++;
        temp /= 10; // Removes the last digit
    } while (temp != 0);

    printf("The number of digits in %lld is: %d\n", num, count);

    return 0;
}
