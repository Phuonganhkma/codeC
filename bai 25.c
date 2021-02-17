
//nhập vào một ngày tháng năm. In ra ngày tháng năm kế tiếp (VÍ DỤ: 12/2/2020=&gt; 13/2/2020)
#include<stdio.h>
int main()
{
    int d,m,y;
    printf("nhap ngay thang nam: ");
    scanf("%d%d%d",&d,&m,&y);
    if(d<=0||m<=0||y<=0)
        printf("ngay thang nam khong hop le");
    else{
    if(m==3||m==5||m==7||m==8||m==10)
    {
        if(d==31)
        {
            d=1;
            m++;
        }
        else if(d<31&&d>0)
        {
            d++;
        }

       else
        {
            printf("ngay thang nam khong hop le");
            return;
        }
    }
    if(m==12)
    {
        if(d==31)
        {
            d=1;
            m=1;
            y++;
        }
        else if(d>0&&d<31)
        {
            d++;
        }
        else
        {
            printf("ngay thang nam khong hop le");
            return;
        }
    }
    if(m==4||m==6||m==9||m==11)
    {
        if(d==30)
        {
            d=1;
            m++;
        }
        else if(d<30&&d>0)
        {
            d++;
        }
        else
        {
            printf("ngay thang nam khong hop le");
            return;
        }
    }
    if(m==2)
    {
        if((y%4==0&&y%100==0)||y%400==0)
        {
            if(d==29)
            {
                d=1;
                m++;
            }
            else if(d<29&&d>0)
            {
                d++;
            }
            else
        {
            printf("ngay thang nam khong hop le");
            return;
        }

        }
        else
        {
            if(d==28)
            {
                d=1;
                m++;
            }
            else if(d<28&&d>0)
            {
                d++;
            }
            else
        {
            printf("ngay thang nam khong hop le");
            return;
        }

        }
    }
    printf("ngay thang nam ke tiep la %d %d %d",d,m,y);
    return 0;
    }


}
