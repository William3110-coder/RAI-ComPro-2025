#include<stdio.h>
int main ()
{
    float point;
    int number;
    int num;
    char name[20];
    char gender[2];
    char uni[11];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &number);
    printf("Enter your height: ");
    scanf("%f", &point);
    printf("Enter your weight: ");
    scanf("%d", &num);
    printf("Enter your gender: ");
    scanf("%s", gender);
    printf("Enter your education qualification: ");
    scanf("%s", uni);
    printf("\nName: %s \tAge: %d \tGender: %s", name,number,gender);
    printf("\nHeight: %.1f \tWeight: %d", point,num);
    printf("\nEducation: %s\n", uni);
    return 0;
}
