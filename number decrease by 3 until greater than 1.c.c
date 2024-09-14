#include <stdio.h>
int main()
{
   int a ;
   printf("Enter a number ");
   scanf("%d",&a);
   for(int i=1;a>=1;i++){
       printf("%d\n",a);
       a = a-3;
   }
    return 0;
}
