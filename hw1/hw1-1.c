#include <stdio.h>
int main(){
    int i, j;
    int array[3][3]={1,2,3,4,5,6,7,8,9};
    int *ptr_arr[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            ptr_arr[i][j]=&array[i][j];
            printf("%3d", *ptr_arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}