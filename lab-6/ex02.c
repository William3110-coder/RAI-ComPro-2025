#include <stdio.h>
int main()
{
    int i;
    int a=0;
    struct profile{
        char name[100], surname[100];
        int age;
        float score;
    }student[3];
    for(i=0;i<3;i++){
        printf("Student %d's name: ",i+1);
        scanf("%s%s", student[i].name, student[i].surname);
        printf("Student %d's age: ",i+1);
        scanf("%d", &student[i].age);
        printf("Student %d's score: ",i+1);
        scanf("%f", &student[i].score);
    }
    printf("\n");
    for(i=1;i<3;i++){
       if(student[i].score>student[a].score){
        a=i;
       }
    }
    printf("The highest score belongs to %s %s at %.1f scores!\n", student[a].name,student[a].surname,student[a].score);
    return 0;
}