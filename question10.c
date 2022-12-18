#include <stdio.h>
#include <math.h>
int main()
{
    float s1,s2,s3,s,area;
    scanf("%f\n%f\n%f",&s1,&s2,&s3);
    s=(s1+s2+s3)/2;
    area= pow((s*(s-s1)*(s-s2)*(s-s3)),0.5);
    printf("%.2f",area);
	return 0;
}
