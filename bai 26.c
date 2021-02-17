
#include<stdio.h>
#include<math.h>

void ngayThangKeTiep(int d, int m, int y)
{

        switch(m)
        {
        case 1:case 3:case 5:case 7:case 8:case 10:
            if(d==31)
            {
                d=1;
                m++;
                printf("ngay thang ke tiep la: %d %d %d",d,m,y);
                return;
            }
            else if(d>=1&&d<31){
                d++;
                printf("ngay thang ke tiep la: %d %d %d",d,m,y);
                return;}
            else
            {
                printf(" ngay thang khong hop le");
                 return;
            }
            break;
        case 12:
            if(d==31)
            {
                d=1;
                m=1;
                y++;
                printf("ngay thang ke tiep la: %d %d %d",d,m,y);
                return;
            }
            else if(d>=1&&d<31){
                d++;
                printf("ngay thang ke tiep la: %d %d %d",d,m,y);
                return;}
            else{
                printf("ngay thang khong hop le");
                 return;
            }
            break;
        case 4:case 6:case 9:case 11:
            if(d==30)
            {
                d=1;
                m++;
                printf("ngay thang lien truoc la: %d %d %d",d,m,y);
                return;
            }
            else if(d>=1&&d<30){
                d++;
                printf("ngay thang lien truoc la: %d %d %d",d,m,y);
                return;}
            else {
                printf(" ngay thang khong hop le");
                 return;}
            break;
        case 2:
            if((y%4==0&&y%100!=0)||y%400==0)
            {
                if(d==29)
                {
                    d=1;
                    m++;
                     printf("ngay thang ke tiep la: %d -%d -%d",d,m,y);
                     return;
                }
                else if(d>=1&&d<29){
                d++;
                 printf("ngay thang ke tiep la: %d -%d -%d",d,m,y);
                 return;}
            else{
                printf(" ngay thang khong hop le");

                return ;
            }
            }
            else
            {
                if(d==28)
                {
                    d=1;
                    m++;
                     printf("ngay thang ke tiep la: %d /%d /%d",d,m,y);
                     return;
                }
                else if(d>=1&&d<28){
                d++;
                 printf("ngay thang ke tiep la: %d /%d /%d",d,m,y);
                 return;}
            else
                printf(" ngay thang khong hop le");
            printf("ngay thang ke tiep la: %d/ %d/ %d",d,m,y);
            return;
            }
            break;

        }

    }


void ngayThangLienTruoc(int d, int m, int y)
{

        switch(m)
        {
        case 1:
            if(d==1)
            {
                d=31;
                m=12;
                y--;
                printf("ngay thang lien truoc la: %d %d %d",d,m,y);
                return;
            }
            else if(d>1&&d<=31)
            {
                d--;
                printf("ngay thang lien truoc la: %d %d %d",d,m,y);
                return;
            }
            else
                printf("ngay thang khong hop le");

            break;
        case 3:case 5:case 7:case 8:case 10:case 12:
             if(d==1)
            {
               d=31;
               m--;
               printf("ngay thang lien truoc la: %d %d %d",d,m,y);
               return;
            }
            else if(d>1&&d<=31)
            {
                d--;
                printf("ngay thang lien truoc la: %d %d %d",d,m,y);
                return;
            }
            else
                printf(" ngay thang khong hop le");
            break;

        case 4:case 6:case 9:case 11:
            if(d==1)
            {
                d=30;
                m--;
                printf("ngay thang lien truoc la: %d %d %d",d,m,y);
                return;
            }
            else if(d>1&&d<=30)
            {
                d--;
                printf("ngay thang lien truoc la: %d %d %d",d,m,y);
                 return;
            }
            else
                printf(" ngay thang khong hop le");
            break;
        case 2:
            if((y%4==0&&y%100!=0)||y%400==0)
            {
                if(d==1)
                {
                    d=29;
                    m--;
                    printf("ngay thang lien truoc la: %d %d %d",d,m,y);
                     return;
                }
                else if(d>1&&d<=29)
            {
                d--;
                printf("ngay thang lien truoc la: %d %d %d",d,m,y);
                 return;
            }
            else
                printf(" ngay thang khong hop le");

                return ;
            }
            else
            {
                if(d==1)
                {
                    d=28;
                    m--;
                     printf("ngay thang lien truoc la: %d %d %d",d,m,y);
                     return;
                }
                else if(d>1&&d<=28)
            {
                d--;
                 printf("ngay thang lien truoc la: %d %d %d",d,m,y);
                 return;
            }
            else{
                printf(" ngay thang khong hop le");
            printf("ngay thang lien truoc la: %d %d %d",d,m,y);
            return;
            }
            break;

        }

        }

}
int main()
{
    int d,m,y;
    printf("nhap ngay, thang, nam= ");
    scanf("%d%d%d",&d,&m,&y);
    ngayThangKeTiep(d,m,y);
    printf("\n");
    ngayThangLienTruoc(d,m,y);
    return 0;
}
