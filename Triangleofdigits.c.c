#include <stdio.h>
int main()
{
  int i,j,l,n,a=1;
  printf("Enter no. of rows");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      a = i-1;
      for(j=1;j<=n-i;j++)
     printf(" ");
     for(j=1;j<=i;j++)
     printf("%d",j);
     for(l=1;l<=i-1;l++){
     printf("%d",a);
     a--;
     }
  printf("\n");
  }
    return 0;
}
