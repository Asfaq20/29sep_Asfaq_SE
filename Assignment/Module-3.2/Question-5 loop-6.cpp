#include<stdio.h>
int main()
{
	int v, w;
	printf("odd numbers:");
	scanf("%d",&w);
	printf("all odd numbers 1 to %d are:\n",w);
	for(v=1; v<=w; v++)
	{
		if(v%2!=0)
		{
			printf("%d\n",v);
		}
	}
	
}

