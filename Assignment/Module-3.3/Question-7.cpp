#include<stdio.h>
int main()
{
	char str[50];
	int i,length=0;
	
	printf("enter a string: \n");
	scanf("%s",str);
	
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	
	printf("\nlength of input string: %d",length);
	
	return 0;

}
