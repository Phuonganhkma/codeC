/* nhap so duong n dem cac chu so cua n*/
#include<stdio.h>
int main()
{
    int n,dem=1;
    printf("nhap n=");
    scanf("%d",&n);
    while(n/=10)
       {
        dem++;

       }
        printf("%d",dem);

    return 0;

}
