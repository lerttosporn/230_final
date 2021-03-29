#include<stdio.h>
int main ()
{
    int n,i,j,m,ch=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(ar[j]>ar[j+1])
            {
                m=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=m;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        if(ar[i]!=ar[i+1])
        {
            ch++;
        }
    }
    int rac[ch],x=ar[0];
    for(i=0; i<ch; i++)
    {
        rac[i]=0;
        rac[i]=rac[i]+rac[i];
        for(j=1+rac[i-1]; j<n; j++)
        {
            if(x!=ar[j])
            {
                x=ar[j];
            }
            else
            {
                rac[j]++;
            }
            printf("%d",rac[j]);
        }
    }
    for(i=0; i<ch-1; i++)
    {
        for(j=0; j<ch-1; j++)
        {
            if(rac[j]<rac[j+1])
            {
                m=rac[j+1];
                rac[j+1]=rac[j];
                rac[j]=m;
            }
        }
    }
    x=ar[0];
    j=0;
    if(rac[0]==rac[1])
    {
        i=1;
        do
        {
            if(x!=ar[i]&&rac[j]==rac[i+1])
            {
                printf("%d",ar[i]);
                j++;
            }
            i++;
        }
        while(i<n);
    }
    else
    {
        printf(" 1 %d",ar[0]);
    }
    return 0;
}
