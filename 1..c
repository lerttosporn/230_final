#include<stdio.h>
int main ()
{
    int n,k,tmp,ch,i,c;
    scanf("%d",&n);
    scanf("%d",&c);
    k=n;
    if(n>=0&&c<10&&c>=0)
    {
        do
        {
            k++;
        }
        while(k%10!=c);
    }
    if(k>n)
    {
        printf("%d",k);
    }
    return 0;
}
