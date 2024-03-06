#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	int i, n, flag=0;
	printf("The grammar is \n S->0S0/A \n A->1A/E \n");
	printf("Enter a string{0,1} :");
	scanf("%s",str);
	n=strlen(str);
	for(int i=0;i<n;i++)
	{
		if(str[i]!='0' && str[i]!='1')
		{
			flag=1;
		}
	}
	if(flag==0 && str[0]=='0' && str[n-1]=='0')
	{
		printf("String is accepted");
	}
	else
	{
		printf("String is not accepted");
	}
	return 0;
	
}
