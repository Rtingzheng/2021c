#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int bad=0;
    for(int i=2;i<=n;i++)
    {
        int bad=0;
        for(int m=2;m<i;m++){
        if(n%i==0) bad++;
    }
    if(bad==0) printf("%d ",i);
    }
}

