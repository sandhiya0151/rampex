#include <stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    if(n%5==0&&n%11==0)
    {
        printf("yes it % 5 and 11");
}
else
{
  printf("not");
}
return 0;
}