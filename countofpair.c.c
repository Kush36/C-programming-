#include<stdio.h>
int main()
{
 int i,j,n,count=0;
 printf("Enter a number ");
 scanf("%d",&n);
 int a[6]={1,3,6,2,4,0};
  for(i=0;i<6;i++)
  {
   for(j=i+1;j<6;j++)
   {
       
     if(a[i]+a[j]==n)
     count++;
    }
   
  }
  printf("%d ",count);
return 0;
}