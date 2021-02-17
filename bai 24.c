//Kiểm tra một số có là số hoàn hảo không? (số hoàn hảo là số có tổng các ước = chính nó. Ví dụ:6=1+2+3)
#include<stdio.h>
void kiemTraSoHoanHao(int n, int s)
{
    s=0;
    for(int i=1; i<n;i++)
    {
        if(n%i==0)
            s+=i;
    }
    if(s==n)
        printf("%d la so hoan hao",n);
    else printf("%d khong la so hoan hao",n);
}
int main()
{
    int n,s;
    printf("nhap n: ");
    scanf("%d",&n);
    kiemTraSoHoanHao(n,s);
    return 0;
}
