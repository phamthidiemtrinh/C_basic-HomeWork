#include <stdio.h>
void main()
{
    int ngay,thang,nam;
    printf("nhap ngay : \n");
    scanf("%d",&ngay);
    nam=ngay/365;
    ngay=ngay-nam*365;
    thang=ngay/30;
    ngay=ngay-thang*30;
    printf("%d nam %d thang %d ngay",nam,thang,ngay);
}
