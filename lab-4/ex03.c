#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=1,num,sum=0;
    do
    {
        printf("Enter the number: ");
        scanf("%d", &num);
        if(num==0){
        printf("Exiting Program...Bye\n");
        exit(0);
        }
        else if(num%2==0){
        printf("%d is even.\n",num);
        }
        else{
        printf("%d is odd.\n", num);
        }
    } while (i<=3);
     return 0;
}