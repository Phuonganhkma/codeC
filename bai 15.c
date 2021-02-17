/*nhap so nguyen n la canh ke cuar tam giac vuong can.
in ra hinh tam giac do co dang
1
01
101
0101
10101*/
#include<stdio.h>
int main()
{
    int n;
    printf("nhap n= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                if(j%2==0)
                    printf("1");
                else printf("0");
            }
            else{
                if(j%2==0)
                    printf("0");
                else printf("1");
            }

        }

printf("\n");

    }
    return 0;
}
