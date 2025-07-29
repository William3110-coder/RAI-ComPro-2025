#include<stdio.h>
int main()
{
    int i;
    float num, bal=0;
    for(i=1;i<=4;i++)
    {
        printf("\n====== ATM MENU ======");
        printf("\n1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &i);
        if(i==1)
        printf("Current Balance: %.2f\n", bal);
        else if(i==2)
        {
        printf("Enter amount to deposit: ");
        scanf("%f", &num);
        bal=bal+num;
        }
        else if(i==3)
        {
        printf("Enter amount to withdraw: ");
        scanf("%f", &num);
        printf("Withdrawal successful.\n");
        bal=bal-num;
        }
    }
    printf("Thank you for using ATM.\n");
    return 0;
}