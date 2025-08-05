#include<stdio.h>
int main()
{
    int i,a;
    int even=0,odd=0;
    int num[10];
    for(i=1;i<=10;i++)
    {
        printf("Enter value %d: ", i);
        scanf("%d", &num[a++]);
    }
    for(a=0;a<10;a++)
    {
        if(num[a]%2==0)
        even++;
        else
        odd++;
    }
printf("Even numbers: %d\n", even);
printf("Odd numbers: %d\n", odd);
return 0;    
}