#include<stdio.h>
int main ()
{
    int n,k,tmp,ch,i;
    scanf("%d",&n);
    scanf("%d",&k);
    if(k<10&&k>=0)
    {
        do
        {
            n++;
        }
        while(n%10!=k);
    }

    printf("%d",n);
    return 0;
}
