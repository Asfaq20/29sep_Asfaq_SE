#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,a,b=1;
	printf("enter the number to define the columns:\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(a=1;a<=i;a++)
		{
			printf("* ");
		}
		printf("\n");
    }
    for(i=num-1;i>=1;i--)
    {
    	for(a=1;a<=i;a++)
    	{
    		printf("* ");
		}
		printf("\n");
	}
	getch();
}
