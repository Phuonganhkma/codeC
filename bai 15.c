//tính tổng lẻ: s= 1+3+5+…+(2*n+1) ( n là số nguyên dwong nhập từ bàn phím)
#include<stdio.h>
/*int kiemTraSoLe(int n)
{
    if(n%2==0)
        return 0;
    return 1;
}
int main()
{
    int n,s=0;
    printf("nhap n= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(kiemTraSoLe(i))
            s+=i;
    }
    printf("tong cac so le la S= %d",s);
    return 0;
}*/
int main()
{
    int n,s=0;
    printf("nhap n= ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        s+=(2*i+1);

    }
    printf("tong cac so le la S= %d",s);
    return 0;
}
