#include<stdio.h>
int main()
{
	int n,marks[n],i,total=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&marks[i]);
		total=total+marks[i];
	}
	printf("%d",total);
	return 0;
}