#include<stdio.h>
int main()
{
    int i, size, a;
    printf("Enter number of elements: ");
    scanf("%d", &size);
    int num[size];
    int counted[size];
    printf("Eneter %d integers: ", size);
    for(i=0;i<size;i++)
    {
    scanf("%d", &num[i]);
    counted[i]=0;
    }
    printf("\nOutput:\n");
    for(i=0;i<size;i++)
    {
       if(counted[i]==1)
       continue;
       int seen=1;
       for(a=1+i;a<size;a++)
       {
            if(num[a]==num[i])
            {
            seen++;
            counted[a]=1;
            }
       }
       printf("Element %d occurs %d times\n", num[i], seen);
    }   
    return 0;
}
