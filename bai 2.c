/* nhap a,b in ra so le trong doan [a,b]*/
#include <stdio.h>
int main()
{
    int a,b;
    printf("nhap a,b:");
    scanf("%d%d",&a,&b);
    for (int i=a;i<=b;i++)
        if(i%2!=0)

            {

                printf(" %d\n",i);
        }

    return 0;
}
