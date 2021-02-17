//Liệt kê tất cả các số nguyên tố nhỏ hơn n.
#include<stdio.h>
int kiemTraSoNguyenTo(int n)
{
    if(n<2)
        return 0;
    if(n==2)
        return 1;
    if(n>2){
        for(int i=2; i<n; i++){
            if(n%i==0)
                return 0;
        }
        return 1;
    }
}
int main()
{
    int n;
    printf("nhap n= ");
    scanf("%d",&n);
    printf("so nguyen to nho hon %d la: ",n);
    for(int i=1; i<n; i++){
        if(kiemTraSoNguyenTo(i))
            printf("%d\t",i);
    }
    return 0;
}
