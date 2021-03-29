#include<stdio.h>
int main ()
{
    int n,m,p,i,j;
    scanf("%d %d %d",&n,&m,&p);
    int ar1[n][n],ar2[m][m],ar3[p][p];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&ar1[i][j]);
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&ar2[i][j]);
        }
    }
    for(i=0; i<p; i++)
    {
        for(j=0; j<p; j++)
        {
            scanf("%d",&ar3[i][j]);
        }
    }
    int low1[n],low2[m],low3[p];
    int col1[n],col2[m],col3[p];
    int ch1[2],ch2[2],ch3[2];
    //1
    for(i=0; i<n; i++)
    {
        low1[i]=0;
        for(j=0; j<n; j++)
        {
            low1[i]+=ar1[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        col1[i]=0;
        for(j=0; j<n; j++)
        {
            col1[i]+=ar1[j][i];
        }
    }
    ch1[0]=0;
    ch1[1]=0;
    for(j=0; j<n; j++)
    {
        ch1[0]+=ar1[j][j];
    }
    for(i=0; i<n; i++)
    {
        ch1[1]+=ar1[n-i-1][i];
    }
    //2
    for(i=0; i<m; i++)
    {
        low2[i]=0;
        for(j=0; j<m; j++)
        {
            low2[i]+=ar2[i][j];
        }
    }
    for(i=0; i<m; i++)
    {
        col2[i]=0;
        for(j=0; j<m; j++)
        {
            col2[i]+=ar2[j][i];
        }
    }
    ch2[0]=0;
    ch2[1]=0;
    for(j=0; j<m; j++)
    {
        ch2[0]+=ar2[j][j];
    }
    for(i=0; i<m; i++)
    {
        ch2[1]+=ar2[m-i-1][i];
    }
    //3
    for(i=0; i<p; i++)
    {
        low3[i]=0;
        for(j=0; j<p; j++)
        {
            low3[i]+=ar3[i][j];
        }
    }
    for(i=0; i<p; i++)
    {
        col3[i]=0;
        for(j=0; j<p; j++)
        {
            col3[i]+=ar3[j][i];
        }
    }
    ch3[0]=0;
    ch3[1]=0;
    for(j=0; j<p; j++)
    {
        ch3[0]+=ar3[j][j];
    }
    for(i=0; i<p; i++)
    {
        ch3[1]+=ar3[p-i-1][i];
    }
    //11
    if(low1[0]==low1[1]&&low1[1]==low1[2]&&col1[0]==col1[1]&&col1[1]==col1[2]&&ch1[0]==ch1[1])
    {
        if(low1[0]==col1[0]&&col1[0]==ch1[0])
        {
            printf("no\n");
        }
    }
    else
    {
        printf("yes\n");
    }
    //2
    if(low2[0]==low2[1]&&low2[1]==low2[2]&&col2[0]==col2[1]&&col2[1]==col2[2]&&ch2[0]==ch2[1])
    {
        if(low2[0]==col2[0]&&col2[0]==ch2[0])
        {
            printf("no\n");
        }
    }
    else
    {
        printf("yes\n");
    }
    //3
    if(low3[0]==low3[0]&&low3[1]==low3[2]&&col3[0]==col3[1]&&col3[1]==col3[2]&&ch3[0]==ch3[1])
    {
        if(low3[0]==col3[0]&&col3[0]==ch3[0])
        {
            printf("no");
        }
    }
    else
    {
        printf("yes");
    }
    return 0;
}
