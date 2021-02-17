/*nhap so nguyen n la canh ke cua tam giac vuong can
in ra man hinh cac tam giac dac rong voi cac dau **/
#include<stdio.h>
int main()
{
    int n;
    printf("nhap n=");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
         {
        for(int j=1; j<=i; j++)
            printf("*");
            printf("\n");
         }

    return 0;
}
