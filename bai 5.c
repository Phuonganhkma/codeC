/* nhap n tinh tong va n!*/
#include<stdio.h>
int main()
{
    int n,tong=0,daithua=1,s=1;
    printf("nhap n=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        tong+=i;
        daithua*=i;
        s=s+1/(daithua);

    }
    printf("tong =%d\n",tong);
    printf("dai thua=%d\n",daithua);
    printf("s=%d",s);
    return 0;
}
