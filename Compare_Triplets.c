#include<stdio.h>
int main()
{
    int a[3],A=0,B=0;
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    int b[3],i;
    scanf("%d%d%d",&b[0],&b[1],&b[2]);
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            A++;
        }
        else if(b[i]>a[i])
        {
            B++;
        }
    }
    printf("%d %d",A,B);
}
