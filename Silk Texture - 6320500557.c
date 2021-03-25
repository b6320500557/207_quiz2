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
        r[i]= 0;
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
        for(j=1; j<=m; j++)
        {
            p[i] = silk[i][j] ;
            q[i] = silk[i][j+1];
            r[i] = silk[i][j+2];
        }
    }

     for(i=1; i<=n; i++)
    {
        printf("%d ",p[i]);
        //printf("%d ",q[i]);
        //printf("%d ",r[i]);
    }


    /*for(i=1; i<=n; i++)
    {
        for(j=1; j<=70; j++)
        {
            if(j>=1 && j<=9 )
            {
                printf("x");
            }
            else
            printf("o");
        }
        printf("\n");
    }*/
    return 0;
}
