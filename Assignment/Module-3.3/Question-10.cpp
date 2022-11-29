#include<stdio.h>

typedef struct
{
	char name[50];
	int id,address;
	double age;
}employee;

int main()
{
	int x=5;
	
	employee employee[x];
	
	printf("enter %d employee details \n \n",x);
	for(int i=0; i<x; i++)
	{
		printf("employee %d:- \n",i+1);
		
		printf("name:");
		scanf("%[^\n]s",employee[i].name);
		
		printf("id:");
		scanf("%d",&employee[i].id);
		
		printf("age:");
		scanf("%if",&employee[i].age);
		
		printf("address:");
		scanf("%f",&employee[i].address);
		
		char ch = getchar();
		
		printf("\n");
		
	}
    
    printf("-----------all employee details------------\n");
    for(int i=0; i<x; i++)
    {
    	printf("name \t:");
    	printf("%s \n",employee[i].name);
    	
    	printf("id \t:");
    	printf("%d \n",employee[i].id);
    	
    	printf("address \t:");
    	printf("%d \n",employee[i].address);
    	
    	printf("age \t:");
    	printf("%d \n",employee[i].age);
    	
    	printf("\n");
    	
	}
    return 0;
}
	
	
	
	
	
