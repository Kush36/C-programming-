#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i+i;j=j+2)
        printf("%d",j);
        printf("\n");
    }
}