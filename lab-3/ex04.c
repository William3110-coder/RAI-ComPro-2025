#include<stdio.h>
int main()
{
    char name[20], grade;
    int num1, num2, num3;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your Calculus score: ");
    scanf("%d", &num1);
    printf("Enter your Physics score: ");
    scanf("%d", &num2);
    printf("Enter your Science score: ");
    scanf("%d", &num3);
    float avg = (num1+num2+num3)/3;
    if (avg>=80)
    grade = 'A';
    else if (avg>=70 || avg<80)
    grade = 'B';
    else if (avg>=60 || avg<70)
    grade = 'c';
    else if (avg>=50 || avg<60)
    grade = 'D';
    else if (avg<50)
    grade = 'F';
    printf("%s, your average is %.2f. You got grade %c\n", name, avg, grade);
    return 0;  
}