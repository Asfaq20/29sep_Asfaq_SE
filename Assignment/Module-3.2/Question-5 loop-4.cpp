#include<stdio.h>
int main()
{
	int j, m;
	printf("\nenter a number:");
	scanf("%d",&m);
	printf("\nodd numbers between 1 and %d are: \n",m);
	for(j=1;j<=m;j+=2)
	{
		printf("%d",j);
	}
	
}
