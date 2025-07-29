#include<stdio.h>
int main()
{
    int num, i;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Multiplication Table for %d\n", num);
    for(i=1;i<=12;i++)
    {
        sum = num*i;
        printf(" %d x %d = %d \n", num,i,sum);
    }
    return 0;
    
}