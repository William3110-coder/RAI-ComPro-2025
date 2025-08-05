#include<stdio.h>
int main()
{
    int num[9]={1,2,3,4,5,6,7,8,9};
    int i;
    printf("Reversed Array: ");
    for(i=8;i>=0;i--)
    {
        if(i==0)
        printf("%d", num[i]);
        else
        printf("%d", num[i]);
    }
    printf("\n");
return 0;
}