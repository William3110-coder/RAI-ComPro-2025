#include <stdio.h>
int main()
{
    int i;
    int total_sec=0, total_min=0;
    struct profile{
        int min;
        int sec;
    }ppl[3];
    for(i=0;i<3;i++){
        printf("Time input (m:s): ");
        scanf("%d:%d", &ppl[i].min, &ppl[i].sec);
    }
    for(i=0;i<3;i++){
        ppl[i].min = ppl[i].min*60;
        total_sec+=ppl[i].sec;
        total_min+=ppl[i].min;
    }
    printf("Total time elasped: %d\n", total_sec+total_min);
    return 0;
}