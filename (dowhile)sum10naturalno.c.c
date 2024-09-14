#include <stdio.h>
int main()
{
    int n=1,sum=0;
    do
    {
        sum=sum+n;
        n++;
    }
    while(n<=10);
    printf("%d is the sum of first 10 natural numbers",sum);
    return 0;
}
