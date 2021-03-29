#include<stdio.h>
int main ()
{
    int n,k,tmp,ch,i;
    scanf("%d",&n);
    scanf("%d",&k);
    while(n%10!=k)
    {
    n++;
    }
    printf("%d",n);
    return 0;
}
