#include <stdio.h>
int main()
{
    int price,loaves,regularprice;
    float discountrate,discount,finalprice;
    scanf("%d",&loaves);
    price=185;
    regularprice=loaves*price;
    discount=60;discountrate=regularprice*discount/100;
    finalprice=regularprice-discountrate;
    printf("Regular Price=%d\nAmount Discounted=%.2f\nAmount to be paid=%.2f"
    ,regularprice,discountrate,finalprice);
	return 0;
}
