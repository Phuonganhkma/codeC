/* nhap so nguyen n kiem tra n co phai so nguyen to hay khong*/
#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf(" nhap n\n");
    scanf("%d",&n);
    if(n<2)
        printf("%d khong phai la so nguyen to",n);
    else if(n==2)
        printf("2 la so nghuyen to");
    else{
    for(int i=3;i<sqrt(n);i++){
        if(n%i==2)
            printf("%d khong phai la so nguyen to",n);
        else
            printf("%d la so nguyen to",n);
}
}
return 0;
}
