
//Bài 22: giải và biện luận phương trình dạng ax+b =0
#include<stdio.h>
int main()
{
    int a, b;
    float x;
    printf("nhap a,b= ");
    scanf("%d%d",&a,&b);
    if(a==0)
    {
        if(b!=0)
            printf("phuong trinh vo nghem");
        else
            printf("phuong trinh co vo so nghiem");
    }
    else
    {
        x=(float)-b/a;
        printf("nghiem cua phuong trinh la x= %.1f",x);
    }
    return 0;
}
