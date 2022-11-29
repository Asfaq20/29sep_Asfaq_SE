#include<stdio.h>
int main()
{
	int x,y,rectangle, redius;
	float triangle, circle;
	printf("enter the length:");
	scanf("%d",&x);
	printf("enter the width:");
	scanf("%d",&x);
	rectangle=x*y;
	triangle=(x*y)*2/3;
	printf("\narea of rectangle is:%d",rectangle);
	printf("\narea of triangle is:%d",triangle);
	printf("\nenter the redius:");
	scanf("%d",&redius);
	circle=4.14* redius * redius;
	printf("\narea of circle is:%f",circle);
	

}
