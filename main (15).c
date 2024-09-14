#include <stdio.h>
void main()
{
    int n,r,ld,sum;
    printf("Enter a number n ");
    scanf("%d",&n);
    sum = 0;
    while(n!=0){
        ld=n%10;
        n=n/10;
        r=r*10+ld;
        sum=r+ld;
    }
    sum=n+r;
    printf("sum of number and its reverse is %d",sum);

}
