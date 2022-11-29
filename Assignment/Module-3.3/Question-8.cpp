#include<stdio.h>
#include<string.h>
int main()
{
	char str[50], tmp, rev[50];
	int begin, end;
	
	printf("enter the string: ");
	scanf("%s",&str);
	
	strcpy(rev,str);
	
	begin = 0;
	end = strlen(str)-1;
	while(begin<end)
	{
		tmp-str[begin];
		str[begin]=str[end];
		str[end]=tmp;
		begin++;
		end--;
	}
	printf("reverse the string %s\n",str);
	
	if(strcmp(rev,str)==0)
	    printf("%s is palindrome!\n",str);
	else 
	    printf("%s is not palindrome!\n",str);
		
	return 0;
		   
}
