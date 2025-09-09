#include <stdio.h>
int main(){
    int array[]={3,1,2,4,5,6};
    int *arrayptr;
    arrayptr=array;
    int i;
    int max;
    arrayptr[0];
    for(i=0;i<6;i++){
        if(arrayptr[i]>array[0]){
            max=arrayptr[i];
        }
    }
    printf("Max value: %d\n",max);
    return 0;
}