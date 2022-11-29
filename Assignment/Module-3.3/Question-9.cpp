#include<stdio.h>
struct employee
{
	int id, age, address;
	char name[40], designation[40], department[40];
};
int main()
{
	struct employee e;
	
	printf("enter the id of the emplyee:");
	scanf("%d",&e.id);
	
	printf("enter the age of the emplyee:");
	scanf("%d",&e.age);
	
	printf("enter the name of the emplyee:");
	scanf("%d",&e.name);
	
	printf("enter the address of the emplyee:");
	scanf("%d",&e.address);
	
	printf("\nemployee details:\n");
	printf("employee id: %d\n",e.id);
	printf("employee name: %s",e.name);
	printf("employee age: %d\n",e.age);
	printf("employee address: %d\n",e.address);
	
	return 0;
	
	
}
