#include <stdio.h>
int main()
{
    float basicPay,employeeFund,employerFund;
    scanf("%f",&basicPay);
    employeeFund=basicPay*17.5/100;
    employerFund=basicPay*23.5/100;
    printf("%.2f\n%.2f",employeeFund,employerFund);
	return 0;
}
