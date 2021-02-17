/* nhap so nguyen duong n in ra cac cap so hang la so nguyen to cua n
input 16
output 16=3+13
16=5+11*/
#include<stdio.h>
#include<math.h>
int kiemtra(int i)
{
    if(i<2) return 0;
        if(i=2)return 1;
    if(i>2)
    {
        for(int j=1;j<=sqrt(i);j++)
        {
            if (i%j==0)
                return 0;
        }
        return 1;
    }
}
int  inso(int i)
{
    if(kiemtra(i)==1)
        printf("%d",i);
return 0;
}
int main()
{
    int n,i;
    printf("nhap n=");
    scanf("%d",&n);
for(i=0;i<n;i++)
    inso(i);
printf("%d=%d+(%d-%d0z")
    return 0;
}
