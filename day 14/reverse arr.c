#include <stdio.h>

int main() {
    int arr[]={2,8,6,9,4,5};
    int *start=arr;
    int *end=arr+5;
    int temp;
    while(start<end){
        temp= *start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    for(int i=0;i<6;i++){
         printf("%d\n",arr[i]);
        }
        return 0;
}