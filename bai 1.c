#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    int ngay;
    int thang;
    int nam;
}date;
date getDate()
{
    date d;
    printf("Nhap ngay:");
    scanf("%d",&d.ngay);
    printf("Nhap thang:");
    scanf("%d",&d.thang);
    printf("Nhap nam:");
    scanf("%d",&d.nam);
    return d;
}
void displayDate (date d)
{
    printf("%d/%d/%d",d.ngay,d.thang,d.nam);
}
int isLeaapYear (int nam)
{
    if(nam%400==0 || (nam%4==0 && nam%100!=0))
        return 1;
    return 0;
}
int isValidDate (date d)
{
    if(d.nam==0||d.thang<=0||d.thang>12||d.ngay<=0){
    return 0;
    }
    switch (d.thang)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        {
            if(d.ngay>31)
                return 0;
        }
        break;
    case 4: case 6: case 9: case 11:
        {
            if(d.ngay>30)
                return 0;
        }
    case 2:
        {
            if(isLeaapYear(d.nam))
            {
                if(d.ngay>29)
                {
                    return 0;
                }
            }
            else
                if(d.ngay>28)
                return 0;

        }
    }

}
int main ()
{
    date d;
    int n;
    getDate(&n);
    displayDate(d);
    return 0;
}
