#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0,prod=1,r,result;
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        prod=prod*r;
        n=n/10;
    }
    result=prod-sum;
        printf("%d",result);
}