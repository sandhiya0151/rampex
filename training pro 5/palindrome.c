#include<stdio.h>
int main() {
     int num,reversed =0;
     printf("enter an integer :");
     scanf("%d",&num);
     int or=num;
     while (num !=0){
        int digit=num % 10;
        reversed = reversed* 10 + digit;
        num /= 10;
     }
    if(or==reversed){
        printf("yes palindrome");
    }
    else{
        printf("not plaindrtom");
    }
     return 0;
}