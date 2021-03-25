#include <stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d",&n);
    scanf("%d",&m);
    int silk[n][m],p[n],q[n],r[n];
     for(i=1; i<=n; i++)
    {
        p[i] = 0;
        q[i] = 0;
        r[i] = 0;
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            scanf("%d",&silk[i][j]);
        }
    }
     for(i=1; i<=n; i++)
    {
        p[i] = silk[i];
        q[i] = silk[i+1];
        r[i] = silk[i+2];
    }
     for(i=1; i<=n; i++)
    {
        printf("%d ",p[i]);
        printf("%d ",q[i]);
        printf("%d ",r[i]);
    }

    return 0;
}
