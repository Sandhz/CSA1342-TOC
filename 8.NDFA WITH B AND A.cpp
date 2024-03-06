#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	int i,n,flag=0;
	printf("Enter the string{b,a} :");
	scanf("%s",str);
	n=strlen(str);
	for(int i=0;i<n;i++)
	{
		if(str[i]!='b'&&str[i]!='a')
		{
			flag=1;
		}

	}
	if(flag==0&&str[0]=='b'&&str[n-1]=='a')
	{
		printf("String is Accepted...");
	}
	else
	{
		printf("String not Accepted...");
	}
    return 0;
}
