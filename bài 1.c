/* nhap n in ra dau *
nhap n in ra ki tu +-+-+-
*/
#include<stdio.h>
int main()
{
    int n;
    printf ("nhap n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("*");}
        printf("\n");
    for(int j=0;j<n;j++)
    {
        if (j%2==0)
            printf("+");
        else
            printf("-");
    }
    return 0;
}
