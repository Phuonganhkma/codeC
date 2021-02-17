
#include <stdio.h>

int main ()
{
    int h,u;
    printf("nhap chieu cao cua tam giac: ");
    scanf("%d",&h);
    u=h;// gán u = nhiều cao của tam giac can ấy
    for (int j=1;j<=h;j++)
    {
        for (int i=1;i<=(2*h-1);i++)
            if (j<h){
                if (u==i||i==2*h-u){
                    printf("*");
                }
                else printf(" ");
            }
           // else printf("*");//đây là in dấu * của dòng cuối cùng này
          u=u-1;
          printf("\n");
    }
}
