#include <stdio.h>
int main(){
    int size=6;
    int array[]={3,1,2,4,5,6};
    int *ptr_arr;
    ptr_arr=array;
    int i,sum=0;
    for(i=0;i<size;i++){
        sum+=*ptr_arr;
        *ptr_arr++;
    }
    printf("The sum of array is: %d\n", sum);
    return 0;
}