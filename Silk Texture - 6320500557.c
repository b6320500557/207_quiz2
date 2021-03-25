#include <stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d",&n);
    scanf("%d",&m);
    int silk[n][m];
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            scanf("%d",&silk[i][j]);
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=70; j++)
        {
            if(i == silk[i][j])
            {
                printf("x");
            }
            else
            {
               printf("o");
            }

        }
        printf("\n");
    }
    return 0;
}
