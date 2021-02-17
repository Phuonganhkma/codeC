#include<stdio.h>
int main()
{
    int a,b;
    printf("nhap a,b= ");
    scanf("%d%d",&a,&b);
    int bcnn;
    int max=a*b;

    for(int i=max; i>a||i>b; i--){
        if(i%a==0&&i%b==0){
            bcnn=i;
        }
    }
    printf("bcnn= %d", bcnn);
    return 0;
}
