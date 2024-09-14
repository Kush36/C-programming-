#include<stdio.h>
int main()
{
    int i;
    int a[5];
    for(int i=0;i<=4;i++){
    printf("Enter element no. %d \n",i+1);
    scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
     printf("%d\n",a[i]);
    return 0;
}
