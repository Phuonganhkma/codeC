/* nhap mot day so nguyen ket thuc bang 0 dem so duong so am trong day*/

#include <stdio.h>//
int main()
{
int n;

    int dd=0,da=0;
    printf("nhap day so");
    do
    {
        scanf("%d",&n);
        if(n<0)
            da+=1;
        if(n>0)
            dd+=1;

    }
    while(n!=0);



        printf("so cac so duong la %d\n",dd++);
        printf("so cac so am la %d",da++);
    return 0;
}
