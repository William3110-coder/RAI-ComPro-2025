#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    float D;
    struct coordinates{
        float x, y;
    }cor[2];
    printf("x1: ");
    scanf("%f",&cor[0].x);
    printf("y1: ");
    scanf("%f",&cor[0].y);
    printf("x2: ");
    scanf("%f",&cor[1].x);
    printf("y2: ");
    scanf("%f",&cor[1].y);
    D=sqrt(((cor[1].x-cor[0].x)*(cor[1].x-cor[0].x))+((cor[1].y-cor[0].y)*(cor[1].y-cor[0].y)));
    printf("Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.3f unit(s)\n", cor[0].x,cor[0].y,cor[1].x,cor[1].y, D);
    return 0;
}