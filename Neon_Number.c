#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sq,r,sum=0;
    sq=n*n;
    while(sq!=0)
    {
        r=sq%10;
        sum=sum+r;
        sq=sq/10;
    }
    if(sum==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}