#include<stdio.h>
int main()
{
    int n,s=0,r;
    scanf("%d",&n);
    int temp;
    temp=n;
    while(n>0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    if(temp%s==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}