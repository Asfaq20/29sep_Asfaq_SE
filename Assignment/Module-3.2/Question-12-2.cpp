#include<stdio.h>
int main()
{
	int i,y;
	char ch='A';
	for(i=1;i<=5;i++)
	{
		for(y=1;y<=i;y++)
		{
			printf("%c",ch++);
		}
		printf("\n");
	}
    return 0;
}
