#include <stdio.h>
int main(){
    float x,y;
    float *ptr_x=&x;
    float *ptr_y=&y;
    printf("Enter value of x and y(2 decimals): ");
    scanf("%f%f",&x,&y);
    float *swap;
    swap=ptr_x;
    ptr_x=ptr_y;
    ptr_y=swap;
    printf("Swaped value is: %.2f %.2f\n",*ptr_x,*ptr_y);
    return 0;
}