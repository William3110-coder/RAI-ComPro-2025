#include<stdio.h>
int main()
{
    int num[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("Enter the value %d here: ", i);
        scanf("%d", &num[i]);
    }
    printf("Values in array are: %d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n", num[0],num[1],num[2],num[3],num[4],num[5],num[6],num[7],num[8],num[9]);
    return 0;
}