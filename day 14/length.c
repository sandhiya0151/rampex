#include <stdio.h>
int main() {
    char str[50];
    int length=0;
    printf("enter the line : ");
    fgets(str,50,stdin);
     while (str[length] != '\0') {
        length++;
     }
   printf("%d\n",length) ;
   return 0;
}