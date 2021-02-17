#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *p;
    int a,b;

    p = fopen("nhap2so.txt", "a");
    if (p == NULL){
        printf("tep khong ton tai!");

        return;
    }
    printf("nhap a: "); scanf("%d", &a);
    printf("nhap b: "); scanf("%d", &b);
    fprintf(p, "a= %d\n", a);
    fprintf(p, "b= %d\n", b),
    fclose(p);
    FILE *p1;
    p1= fopen("nhap2so.txt", "a");
    int tong=a+b;
    int hieu=a-b;
    int tich=a*b;
    float thuong= (float) a/b;
    fprintf(p1, "%d + %d = %d\n", a, b,tong);
    fprintf(p1, "%d - %d = %d\n", a, b,hieu);
    fprintf(p1, "%d * %d = %d\n", a, b,tich);
    fprintf(p1, "%d / %d = %.2f\n", a, b,thuong);
    fclose(p);
    return 0;
}
