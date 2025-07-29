#include<stdio.h>
int main()
{
    int num, sum = 0, i;
    for(i=1;i<=10;i++)
    {
        printf("%d.Enter the number: ", i);
        scanf("%d", &num);
        sum = sum+num;
    }
    printf("\nToatal sum is %d", sum);
    float avg = sum/10.00;
    printf("\nAverage is %.2f\n", avg);
    return 0;
}