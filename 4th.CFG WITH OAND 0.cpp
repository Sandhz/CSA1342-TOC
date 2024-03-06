#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	int i, n, flag=0;
	printf("Enter the string{0,1} :");
	scanf("%s",str);
	n=strlen(str);
	for(int i=0;i<n;i++)
	{
		if(str[i]!='0' && str[i]!='1')
		{
			flag=1;
		}
	}
	if(flag==0 && str[0]=='0' && str[n-1]=='0' || flag==0&& str[0]=='1' && str[n-1]=='1')
	{
		printf("String is accepted");
	}
	else
	{
		printf("String is not accepted");
	}
	return 0;
}
