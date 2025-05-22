#include <stdio.h>
int Digits(int n) {
    if (n == 0)
        return 0;
    return 1 + Digits(n / 10);
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number == 0)
        printf("Number of digits: 1\n");
    else
        printf("Number of digits: %d\n",Digits(number));

    return 0;
}