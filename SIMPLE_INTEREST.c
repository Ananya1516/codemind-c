#include<stdio.h>
int main()
{
    int p,t,r;
    float si;
    scanf("%d %d %d",&p,&t,&r);
    si=p*t*r/100;
    printf("%.0f",si);
}