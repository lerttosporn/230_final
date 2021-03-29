#include<stdio.h>
int main ()
{
    int n,k,tmp,ch,i;
    scanf("%d",&n);
    scanf("%d",&k);
    do
    {
        n++;
    }
    while(n%10!=k);
    printf("%d",n);
    return 0;
}
