#include <stdio.h>
int main(){
    int a=0,b=5;
    int *ptr_1,*ptr_2;
    ptr_1=&a,ptr_2=&b;
    printf("Before reverse: a = %d, b = %d\n",a,b);
    int swap;
    swap = *ptr_1;
    *ptr_1 = *ptr_2;
    *ptr_2 = swap;
    printf("After reverse: a = %d, b = %d\n",a,b);
    return 0;
}