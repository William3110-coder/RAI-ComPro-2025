#include<stdio.h>
int main()
{
    char name[25];
    int age;
    float point;
    char uni[6];

    printf("Enter your full name: ");
    scanf("%[^\n]", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &point);
    printf("Enter your University name: ");
    scanf("%s", uni);
    printf("\nHi! Everyone. This is %s from %s. I am %d years old and my height is %.1f cm tall.\n",name, uni, age, point);
    
    return 0;
}