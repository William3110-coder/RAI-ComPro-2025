#include<stdio.h>
int main()
{
    int i,j, mark[6], max=0, num, sum;
    for(i=1;i<=5;i++)
    {
        printf("Eneter the marks of student %d: ", i);
        scanf("%d", &mark[i]);
        sum=sum+mark[i];
    }
    max = mark[i];
    for(j=1;j<=5;j++)
    {
        if(mark[j]>max)
        max=mark[j];
    }
    printf("Toatal marks: %d", sum);
    printf("\nHighest Marks: %d\n", max);
    return 0;
}