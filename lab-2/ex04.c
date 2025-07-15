#include<stdio.h>
int main()
{
    char name[10];
    int id;
    int num;
    float point1, point2;

    printf("Enter your Name: ");
    scanf("%s", name);
    printf("Enter your student ID: ");
    scanf("%d", &id);
    printf("Enter your programming score: ");
    scanf("%d", &num);
    printf("Enter your Physics score: ");
    scanf("%f", &point1);
    printf("Enter your Calculus score: ");
    scanf("%f", &point2);
    float x = (point1+point2+num)/3;
    printf("Hi %s(%d)! Your GPA is %.2f\n",name,id,x);
    return 0;
}