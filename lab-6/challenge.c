#include <stdio.h>
int main(){
    int i;
    int n;
    struct detail{
        char name[20];
        int id;
        float score[4];
    }student[3];
    for(i=0;i<3;i++){
        printf("Enter name, ID, and 4 grades for student %d:\n", i+1);
        scanf("%s", student[i].name);
        scanf("%d", &student[i].id);
        for(n=0;n<4;n++){
            scanf("%f", &student[i].score[n]);
        } 
    }
    float st_avg[3];
    int a=0;
    printf("\nStudent Averages:\n");
    for(i=0;i<3;i++){
        st_avg[i]=0;
        for(n=0;n<4;n++){
            st_avg[i]+=student[i].score[n];
        }
        st_avg[i]=st_avg[i]/4;
        if(st_avg[i]>st_avg[a]){
            a=i;
        }
        printf("%s (ID: %d): %.2f\n", student[i].name,student[i].id,st_avg[i]);
    }
    printf("\nTop student: %s with %.2f\n", student[a].name, st_avg[a]);
    printf("\nSubject Averages:\n");
    float sj_avg[4];
    int j=0;
    char *subject[4]={"Math","English","Science","History"};
    for(n=0;n<4;n++){
        for(i=0;i<3;i++){
            sj_avg[n]+=student[i].score[n];
        }
        sj_avg[n]=sj_avg[n]/3;
        if(sj_avg[n]>sj_avg[j]){
            j=n;
        }
    }
    for(n=0;n<4;n++){
        printf("%s: %.2f\n", subject[n], sj_avg[n]);
    }
    printf("\nTop subject: %s with average %.2f\n", subject[j], sj_avg[j]);
    return 0;
}