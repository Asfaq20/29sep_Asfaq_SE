#include<stdio.h>
int main()
{
	int number[25];
	int i,a,b,n;
	printf("enter the value of N\n");
	scanf("%d",&n);
	
	printf("enter the number \n");
	for(i=0; i<n; i++)
	    scanf("%d",&number[i]);
	    
	for(i=0; i<n; a++)
	{
		for(a=i+1;a<n;a++)
		{
			if(number[i] < number[a])
			{
				b=number[i];
				number[i] = number[a];
				number[a];
			}
		}
	}    
    
    printf("the number arranged in descending order are given below\n");
    
    for(i=0; i<n ;i++)
    {
    	printf("%d\n",number[i]);
	}

}
   

