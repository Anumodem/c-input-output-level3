#include <stdio.h>
#include <math.h>
int main()
{
    float gravity,distance,vf;
    scanf("%f",&distance);
    gravity=9.8;
    vf=pow((2*distance*gravity),0.5);
    printf("%.2f m/s",vf);
        return 0;
}
