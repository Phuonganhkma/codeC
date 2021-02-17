#include<stdio.h>
#include<math.h>
/*nhap a,b in ra tat ca so nguyen to trong doan a b*/
int kiemtrasonguyen(int n)
{
    if (n<2) return 0;
    if (n==2) return 1;
    if (n>2) {
        for (int i=2; i<=sqrt (n); i++)
            if (n%i==0) return 0;
    }
    return 1;
}


void xuat( int a, int b)
{
    printf ("day cac so nguyen to la");
    for (int n=a; n<b; n++){
          if(kiemtrasonguyen(n)==1)
           printf("%d\n",n);
    }



}
int main()
{
int a,b;
printf("nhap a,b\n");
scanf("%d%d",&a,&b);
xuat(a,b);


    return 0;

}



