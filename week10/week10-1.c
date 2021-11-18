#include <stdio.h>
int main()
{
    int n,ans=0;
    scanf("%d",&n);
    for(int m=2;m<=n;m++)
    {
        int bad=0;
        for(int i=2;i<m;i++)
        {
            if(m%i==0) bad=1;
        }
        if(bad==0)
        {
            ans++;
            printf("%d ",m);
        }
    }
    printf("\n ans:%d \n",ans);
}
