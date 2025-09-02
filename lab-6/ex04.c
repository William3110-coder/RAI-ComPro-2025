#include <stdio.h>
int main()
{
    int i;
    float result_x, result_y;
    struct vector{
        float x;
        float y;
    }v,u;
    printf("u_x: ");
    scanf("%f", &u.x);
    printf("u_y: ");
    scanf("%f", &u.y);
    printf("v_x: ");
    scanf("%f", &v.x);
    printf("v_x: ");
    scanf("%f", &v.y);
    result_x = u.x+v.x;
    result_y = u.y+v.y;
    printf("Resultant vector is equivalent to %.1fi + %.1fj\n", result_x,result_y);
    return 0;
}