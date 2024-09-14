#include <stdio.h>
int main()
{
 int i,j,k,n,count=0;
 printf("Enter a  nuumber ");
 scanf("%d",&n);
 int a[7] = {1,3,4,7,2,8,10};
 for(i=0;i<7;i++)
 {
    for(j=i+1;j<7;j++)
    {
      for(k=j+1;k<7;k++)  
    if(a[i]+a[j]+a[k]==n){
    count++;
        printf("(%d,%d,%d)\n",a[i],a[j],a[k]);
    }
 }
 }
 printf("%d",count);
    return 0;
}

