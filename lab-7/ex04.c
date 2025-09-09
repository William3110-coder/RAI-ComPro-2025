#include <stdio.h>
int main(){
    int size=6;
    int array[]={3,1,2,4,5,6};
    int *ptr_arr;
    ptr_arr=&array[0];
    int i;
    for(i=0;i<size;i++){
        printf("%d\n", array[i]);
    }
    return 0;
}