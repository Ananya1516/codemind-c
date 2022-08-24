#include<stdio.h>
int main()
{
	int n,a,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		a=n%i;
	    if(a==0)
		sum=sum+i;
	}
	if(sum==n)
	{
		printf("True",n);
	}
	else
	{
		printf("False",n);
	}
	return 0;
}