#include<stdio.h>

int main()
{
    float num1, num2, num3;
    
    printf("Enter integer ");
    scanf("%f", &num1);
    printf("Enter integer: ");
    scanf("%f", &num2);
    printf("Enter integer: ");
    scanf("%f", &num3);
    printf("Results: ");
    float min = num1;
    if(num2 < min) min = num2;
    if(num3 < min) min = num3;
    float max = num1;
    if(num2 > max) max = num2;
    if(num3 > max) max = num3;
    printf("\nMinimum: %.0f", min);
    printf("\nMaximum3: %.0f", max);
    printf("\nSum: %.0f",num1+num2+num3);
    float x = (num1+num2+num3)/3;
    printf("\nAverage: %.2f\n",x);

    return 0;
}