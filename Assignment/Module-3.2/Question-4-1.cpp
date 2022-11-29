#include<stdio.h>
int main()
{
	int day;
	printf("\n");
	printf("\n1.monday");
	printf("\n2.tuesday");
	printf("\n3.wednesday");
	printf("\n4.tursday");
	printf("\n5.friday");
	printf("\n6.saturday");
	printf("\n7.sunday");
	printf("enter day");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
			printf("monday");
			break;
		case 2:
			printf("tuesday");
			break;
		case 3:
		    printf("wednesday");
			break;
		case 4:
		    printf("tursday");
			break;
		case 5:
		    printf("friday");
			break;
		case 6:
		    printf("saturday");
			break;
		case 7:
		    printf("sunday");
			break;
		default:
		    printf("\nenter input");
			break;				
		}
	    return 0;
			
}
