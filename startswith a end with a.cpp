//Dfa string start with a and end with a
#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	int i,n,flag=0;
	printf("Enter the String{a,b} :");
	scanf("%s",str);
	n=strlen(str);
	for(int i=0;i<n;i++)
	{
		if(str[i]!='a'&&str[i]!='b')
		{
			flag=1;
		}
	}
	if(flag==0&&str[0]=='a'&&str[n-1]=='a')
	{
		printf("String is Accepted...");
	}
	else
	{
		printf("String not Accepted...");
	}
}
