#include <stdio.h>
void main()
{
    int gio,giay,phut;
    printf("nhap giay : \n");
    scanf("%d",&giay);
    gio = giay/3600;
    giay=giay-gio*3600;
    phut= giay/60;
    giay=giay-phut*60;
    printf("%d gio %d phut %d giay",gio,phut,giay);
}
