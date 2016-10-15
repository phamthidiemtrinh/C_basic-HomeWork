#include <stdio.h>
void main()
{
    float a,b,h;
    printf("nhap day lon hinh thang : \n");
    scanf("%f",&a);
    printf("nhap day be: \n");
    scanf("%f",&b);
    printf("nhap chieu cao: \n");
    scanf("%f",&h);
    printf("dien tich hinh thang la: \n%f",(a+b)*h/2);
}
