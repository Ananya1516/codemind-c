#include<stdio.h>
int main()
{
    int n,s=0,sq,r;
    scanf("%d",&n);
    sq=n*n;
    while(sq)
    {
        r=sq%10;
        s=s+r;
        sq=sq/10;
    }
    if (n==s)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}