#include<stdio.h>
int main()
{
    int num[8], min, max;
    int i;
    for(i=1;i<=8;i++)
    {
        printf("Enter number %d: ",i);
        scanf("%d", &num[i]);
    }
    max=num[1];
    min=num[2];
    for(i=1;i<=8;i++)
    {
        if(num[i]>max)
        {
        max=num[i];
        }
        if(num[i]<min)
        {
        min=num[i];
        }
    }
printf("Smallest numbers: %d\n", min);
printf("Biggest numbers: %d\n", max);
return 0;
}