#include<stdio.h>
int main()
{
    float num1,num2;
    float pi = 22/7;
    printf("Enter cone height: ");
    scanf("%f", &num1);
    printf("Enter cone base radius: ");
    scanf("%f", &num2);
    float vol = 0.33*(pi*num2*num2*num1);
    printf("Cone volume = %.1f \n", vol);
    if (vol > 260)
    printf("This cone is perfect for Supun project\n");
    else if (vol < 260)
    printf("This cone is not fit for this project\n");
    return 0;
    
}