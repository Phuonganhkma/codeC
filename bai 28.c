/*in ra các điểm của tam giác vuông đặc, ví dụ n = 4 thì chúng ta sẽ
in ra lần lượt các chuỗi
*
**
***
****
*/
#include<stdio.h>
int main ()
{
    int n;
    printf("nhap n= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            printf("*");
        printf("\n");

    }
    return 0;
}
