#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int gcd=0,min;
    if(a<b)
    min=a;
    else
    min=b;
    for(int i=min; i>0; i--)
    {
        if(a%i==0 && b%i==0)
        {
        gcd=i;
        break;
        }
    }
       printf("%d",gcd);
}