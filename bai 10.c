/* nhap a,b tim ucln va bcnn*/
#include<stdio.h>
int main()
{
    int a,b,UCLN,BCNN;
    printf("nhap a,b\n");
    scanf("%d%d",&a,&b);
    int i,j;
    for(i=1;i<a;i++)
    {
        if(a%i==0&&b%i==0)
        UCLN=i;
    }
    for(j=b;;j++)
       {
        if(j%a==0&&j%b==0)
        BCNN=j;
    break;
       }
       printf(" uoc chung lon nhat la %d\n",UCLN);
       printf("boi chhung nho nhat la %d\n",BCNN);
       return 0;
}
