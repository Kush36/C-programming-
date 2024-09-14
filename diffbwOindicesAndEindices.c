#include<stdio.h>
int main()
{
 int i,sum_e=0,sum_o=0,dif;
 int a[6]={1,2,3,4,5,6};
  for(i=0;i<6;i++){
   if(i%2==0)
    sum_e= sum_e+a[i];
   else
   sum_o= sum_o+a[i];
  } 
  dif =sum_o-sum_e;
  printf("%d ",dif);
return 0;
}