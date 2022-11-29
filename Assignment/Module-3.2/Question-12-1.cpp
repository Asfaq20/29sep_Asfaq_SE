#include<stdio.h>
int main()
{
	int i,m,n;
	printf("enter how many row and colom you want:");
	scanf("%d",&n);
    for(i=1; i<=n; i++)
	{
		for(m=1; m<=i; m++)
		{
			printf("%d",m%5);
		}
	   printf("\n");
	   
	}
}
