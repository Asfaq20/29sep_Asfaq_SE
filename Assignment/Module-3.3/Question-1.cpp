#include<stdio.h>
int main()
{
	int q;
	int arr[50];
	printf("enter the number (1 to 50):");
	scanf("%d",&q);
	
	for(int i=0; i<q; i++)
	{
		printf("enter number %d:",i+1);
		scanf("%if",&arr[i]);
	}
	for(int 
	i=1;i<q;i++)
	{
		if(arr[0] <arr[i])
		arr[0] = arr[i];
	}
	
	printf("largest element = %.2if",arr[0]);
	
	return 0;
}
