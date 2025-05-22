#include <stdio.h>
int perfect(int n)
{
    int sum = 0;
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(perfect(num))
        printf("%d is a perfect number.\n", num);
    else
        printf("%d is not a perfect number.\n", num);
    return 0;
}