/*Viết chương trình nhập vào x, n. Tính
T=100+x/2+x/3+…+x/n
In kết quả*/
#include<stdio.h>
int main()
{
    int n,x;
    float t=100;
    printf("nhap n,x= ");
    scanf("%d%d",&n,&x);
    for(int i=2;i<=n;i++)
    {
        t+=(float)x/i;
    }
    printf("T= %.4f",t);
    return 0;

}
