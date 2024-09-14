#include<stdio.h>
int main()
{
 int n,i;
 printf("Enter size of an array");
 scanf("%d",&n);
 int a[n];
 for(i=0;i<n;i++)
{
 scanf("%d",&a[i]); 
}
  for(i=0;i<n;i++){
  if(i%2==1){
  a[i] = 2*a[i];
  printf("%d ",a[i]);}
  else{
  printf("%d ",a[i]+10);
}
}
return 0;
}