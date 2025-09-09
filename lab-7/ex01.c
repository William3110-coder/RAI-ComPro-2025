#include <stdio.h>
int main(){
    int test=0;
    int *ptr_test;
    ptr_test=&test;
    printf("The address of %d variable is at: %p\n",test,ptr_test);
    return 0;
}