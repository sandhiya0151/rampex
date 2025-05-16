#include <stdio.h>
int main() {
    int i;
   int fact=1;
   for(int i=1;i<=5;i++)
   {
   fact *=i;
   }
    printf("the factorial is:%d\n",fact);
return 0;
}