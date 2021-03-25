#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k;
    for(i=2; n!=0;)
    {
        if(n%i == 0)
        {
            printf("%d ",i);
        }
        n/=i;
        i++;
    }

}
