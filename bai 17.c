/* chuyen nhi phan sang thap phan*/
#include<stdio.h>
#include<math.h>
int chuyen(int long a)
{
    int b=0;
    int p=0;

    while(a>0)
    {
    b+= (a%10)*pow(2,p);
    p++;
    a/=10;
    }
    return b;
}
int main()
{
    int long a;
    printf("nhap a:");
    scanf("%d",&a);
    printf("so thap phan la %d",chuyen(a));
    return 0;

}
