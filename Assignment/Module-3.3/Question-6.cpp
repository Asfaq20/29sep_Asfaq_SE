#include<stdio.h>
int mian()
{
	int e,f,g,h,A[4][4],B[4][4];
	int add[4][4],sub[4][4],multiplication[4][4];
	printf("enter any two number:");
	scanf("%d%d",&e,&f);
	printf("\nenter the value of first matrix:");
	for(g=0;g<e;g++)
	{
		for(h=0;h<f;h++)
		{
			scanf("%d",&A[g][h]);
		}
 	}
    printf("\nenter the value of second matrix:");
    for(g=0;g<e;g++)
    {
    	for(h=0;h<f;h++)
    	{
    		add[g][h]=A[g][h]+B[g][h];
    		sub[g][h]=A[g][h]-B[g][h];
    		multiplication[g][h]=A[g][h]*B[g][h];
        }
	}
    
    printf("\naddition of two matrix is:\n");
    printf("\nsubstriction of two matrix is:\n");
    printf("\nmultiplication of two matrix is:\n");
    for(g=0;g<e;g++)
    {
    	for(h=0;h<f;h++)
    	{
    		printf("%d",add[g][h]);
    		printf("%d",sub[g][h]);
    		printf("%d",multiplication[g][h]);
    		
		}
	    printf("\n");
	    
	}
	
}   
