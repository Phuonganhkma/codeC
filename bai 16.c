#include<stdio.h>
#include<math.h>
/*nhap n in ra bang cuu chuong*/
int main()
{
int n;
printf("nhap n\n");
scanf("%d",&n);
  for(int j=1;j<=10;j++)
    {
        printf("%d.%d=%d\n",n,j,n*j);

    }

return 0;
}
