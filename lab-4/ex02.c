#include<stdio.h>
int main()
{
    int i=1, sum=0, num;
    while(i<=10)
    {
       printf("%d.Enter the number: ", i);
       scanf("%d", &num);
       sum = sum+num;
       i++;  
    }
    printf("\nToatal sum is %d\n", sum);
    return 0;
}