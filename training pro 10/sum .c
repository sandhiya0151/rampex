#include <stdio.h>
int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + sumOfDigits(n / 10);
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number < 0)
        number = -number;
        int result = sumOfDigits(number);
    printf("Sum of digits: %d\n", result);

    return 0;
}