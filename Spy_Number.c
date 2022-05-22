#include<stdio.h>
int main()
{
    int n,p=1,s=0,r,res;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s=s+r;
        p=p*r;
        n=n/10;
    }
    if (s==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
}
