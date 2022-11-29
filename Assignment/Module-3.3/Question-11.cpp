#include<stdio.h>
struct employee
{
	int age;
	char name[40];
	char department[30];
	float salary;
};

union person 
{
	int ag;
	char nam[40];
	char deprtent[30];
	float salar;
};

int main()
{
	struct employee emp1;
	union person person1;
	
	printf("the size of employee structure = %d\n",sizeof (emp1) );
	printf("the size of person union = %d\n",sizeof (person1) );
	
	return 0;
	 
	
}
