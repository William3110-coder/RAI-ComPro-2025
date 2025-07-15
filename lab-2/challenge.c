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
    printf("\nMinimum: %.0f", num2);
    printf("\nMaximum3: %.0f", num3);
    printf("\nSum: %.0f",num1+num2+num3);
    float x = (num1+num2+num3)/3;
    printf("\nAverage: %.2f\n",x);

    return 0;
}