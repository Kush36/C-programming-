#include <stdio.h>

int main()
{
    float a,b,c,d,e,f,g,h,i;
    printf("Enter a value of a ");
    scanf("%f",&a);
    printf("Enter a value of b ");
    scanf("%f",&b);
    printf("Enter a value of c "); // a,b,c are values of 1st row
    scanf("%f",&c);
    printf("Enter a value of d ");
    scanf("%f",&d); 
    printf("Enter a value of e ");
    scanf("%f",&e);
    printf("Enter a value of f "); // d,e,f are values of 1st row
    scanf("%f",&f);
    printf("Enter a value of g ");
    scanf("%f",&g);
    printf("Enter a value of h ");
    scanf("%f",&h); 
    printf("Enter a value of i "); // g,h,i are values of 1st row
    scanf("%f",&i); 
    float det = (a*(e*i-f*h)-b*(d*i-g*f)+c*(d*h-e*g));
    printf("value of determinant is %f",det);
    return 0;
}
