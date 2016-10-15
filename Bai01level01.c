#include <stdio.h>
#include <math.h>
void main()
{
    float a,b,c,p,s;
    printf("nhap 3 canh tam giac \n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    p = (a+b+c);
    printf("chu vi tam giac %f\n",p);
    p=p/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("dien tich tam giac %f\n", s);
}
