#include <stdio.h>
int main ()
{
    float pi,radius,v;
    printf("ENTER THE VALUE OF PI : ");
    scanf("%f",&pi);
    printf("ENTER RADIUS : ");
    scanf("%f",&radius);
    v = (4*pi*radius*radius*radius)/3;
    printf("THE VOLUME OF SPHERE IS :%f ",v);
    return 0;
}

