
/*16: Viết chương trình nhập vào hai ma trận An*m và Bm*p. Tính ma trận tích
Cn*p = An*m * Bm*p sau đó in cả ba ma trận ra màn hình.*/
#include<stdio.h>
#define Max 100
void nhapMang1(int m1[][Max], int dong, int cot)
{
    printf(" nhap Mang thu 1:\n");
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            scanf("%d",&m1[i][j]);
        }
    }
}
void nhapMangm2(int m2[][Max], int dong, int cot)
{
     printf(" nhap Mang thu 2:\n");
    for(int i=0; i<cot; i++){
        for(int j=0; j<dong; j++){
            scanf("%d",&m2[i][j]);
        }
    }
}
void xuatMang1(int  m1[][Max], int dong, int cot)
{
    printf("Mang thu 1:\n");
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            printf("%4d",m1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void xuatMang2(int  m2[][Max], int dong, int cot)
{
    printf("Mang thu 2:\n");
    for(int i=0; i<cot; i++){
        for(int j=0; j<dong; j++){
            printf("%4d",m2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void tichHaiMaTran(int m1[][Max], int m2[][Max], int m3[][Max], int dong, int cot)
{
    printf("tich hai ma tran la: \n");
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
                m3[i][j]=0;
            for(int k=0; k<cot; k++){
                m3[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
    for(int i=0; i<dong; i++){
        for(int j=0; j<dong; j++){
            printf("%4d",m3[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int main()
{
    int m1[Max][Max],m2[Max][Max],m3[Max][Max];
    int dong, cot;
    printf("nhap dong1, cot1 va cot2 dong2: ");
    scanf("%d%d",&dong, &cot);
    nhapMang1(m1, dong, cot);
    nhapMangm2(m2, dong, cot);
    tichHaiMaTran(m1,m2,m3, dong, cot);
    xuatMang1(m1, dong, cot);
    xuatMang2(m2, dong, cot);
    return 0;
}
