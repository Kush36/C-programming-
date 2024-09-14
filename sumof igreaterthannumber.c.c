#include<stdio.h>
int main()
{
 int n,i,soi=0;//sum of i;
 printf("Enter an number ");
 scanf("%d",&n);
 int a[7]={1,2,3,4,5,6,7};
  for(i=0;i<=7;i++){
  if(a[i]>n)
  soi++;
  }
  printf("%d ",soi);
return 0;
}