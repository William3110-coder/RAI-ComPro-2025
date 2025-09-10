#include <stdio.h>
int main(){
    int i, num[5];
    int *ptr_num[5];
    printf("Enter 5 integers: ");
    for(i=0;i<5;i++){
    scanf("%d",&num[i]);
    ptr_num[i]=&num[i];
    }
    int n;
    int*store_value;
    for(i=0;i<4;i++){
        for(n=i+1;n<5;n++){
            if(*ptr_num[i]>*ptr_num[n]){
            store_value=ptr_num[i];
            ptr_num[i]=ptr_num[n];
            ptr_num[n]=store_value;
            }
        }
    }
    for(i=0;i<5;i++){
        printf("%d ",*ptr_num[i]);
    }
    printf("\n");
    return 0;
}