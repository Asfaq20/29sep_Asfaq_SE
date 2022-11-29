#include<stdio.h>
int main()
{
	int j;
	printf("even number between 1 to 100:\n");
	for(j = 1; j <= 100; j++)
    {
    	if(j%5 == 0)
    	{
    		printf("%d",j);
		}
	}
}
