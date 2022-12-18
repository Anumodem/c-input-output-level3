#include <stdio.h>
#include <math.h>
int main()
{
    double base,exp,opt;
    scanf("%lf %lf",&base,&exp);
    opt=pow(base,exp);
    printf("%.2lf",opt);
	return 0;
}
