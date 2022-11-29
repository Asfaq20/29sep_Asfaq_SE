#include<stdio.h>
#include<string.h>
int stringreverse(char *str)
{
	if(*str)
	{
		stringreverse(str+1);
		printf("%c",*str);
	}
}
int main()
{
	char str[50];
	
	printf("any string to reverse= ");
	fgets(str,sizeof str,stdin);
	
	printf("\n string after reversing= ");
	stringreverse(str);
	printf("\n");
}
