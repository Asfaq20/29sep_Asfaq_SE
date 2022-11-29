#include<stdio.h>
int main()
{
	float m,d,t,si;
	printf("enter the principal amount=");
	scanf("%f",&m);
	printf("enter the rate of intrest=");
	scanf("%f",&d);
	printf("enter the time duration=");
	scanf("%f",&t);
	
	si=(m*d*t)/100;
    printf("the simple interest is: %f",si); 
}
