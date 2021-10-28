
#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);

  float sum=0;
  for(int i=1;i<=n;i++){
  int g;
  scanf("%d",&g);
  sum=sum+g;
  }
  printf("%.2f",sum/n);
}
