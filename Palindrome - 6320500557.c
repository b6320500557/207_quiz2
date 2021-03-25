#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j=0,k,palin[n];
    for(i=0; i<n; i++)
    {
        palin[i] = 0;
    }
    for(i=1; i<n; i++)
    {
        palin[i] = i;
        //printf("%d ",palin[i]);
        if(n <= 10)
        {
            if(palin[i]/i != 0)
            //printf("%d ",palin[i]);
            j++;
        }
    }
    printf("%d",j);
    return 0;
}
