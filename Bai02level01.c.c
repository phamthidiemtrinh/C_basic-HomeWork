#include <stdio.h>
void main ()
{
    float r,p,s,pi;
    pi=3.1416;
    printf("nhap ban kinh hinh tron\n");
    scanf("%f",&r);
    p=2*pi*r;
    s=r*r*pi;
    printf("chu vi hinh tron: \n%f",p);
    printf("dien tich hinh tron: \n%f",s);
}
