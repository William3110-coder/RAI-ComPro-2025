#include <stdio.h>
int main(){
    struct numbers{
        int a, b;
        int sum;
    }num;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &num.a,&num.b);
    num.sum=num.a+num.b;
    int *ptr_num1;
    ptr_num1=&num.a;
    int *ptr_num2;
    ptr_num2=&num.b;
    int *ptr_num3;
    ptr_num3=&num.sum;
    printf("The sumation of 2 numbers is: %d\n",*ptr_num3);
    return 0;
}