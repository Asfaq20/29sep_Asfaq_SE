#include<stdio.h>
#include<conio.h>
int factorial (int num){
	
	if (num==0)
	{
        return 1;	
	}
	else
	{
		
		return num * factorial (num - 1);
	}
}
int main()
{
	
	int num;
	printf("\nenter any number:");
	scanf("%c",&num);
	
	printf("\nfactorial of %d is %d",num, factorial (num));
    
    return 0;
}

