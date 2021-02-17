/*Cho ma trận A với kích thước NxM. Thực hiện các yêu cầu sau:
Yêu cầu: Tạo menu cho phép người dùng chọn các chức năng cần thực hiện

1. Tính tổng các phần tử trong ma trận
2. Liệt kê các phần tử chia hết cho 7
3. Tìm tổng các phần tử nằm trên đường viền của ma trận
4. Tìm tổng các phần tử nằm trên phần tam giác trên của ma trận
5. Tìm cột có tích max
6. Tìm dòng có nhiều số chính phương nhất
7. Hoán vị ma trận thành MxN*/
#include<stdio.h>
#define Max 100
#include<math.h>
void nhapMang(int m[][Max], int dong, int cot)
{
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            scanf("%d", &m[i][j]);
        }
    }
}
void xuatMang(int m[][Max], int dong, int cot)
{
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }
}
void tongCacPhanTu(int m[][Max], int dong, int cot)
{
    int s=0;
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            s+=m[i][j];
        }
    }
    printf("tong tat ca cac phan tu trong ma tran la: %d\n",s);
}

void cacPhanTuChia7(int m[][Max], int dong, int cot)
{
    printf("so phan tu chi het cho 7 la: ");
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            if(m[i][j]%7==0)
                printf("%d\t", m[i][j]);
        }
    }
    printf("\n");
}
void tongPhanTuVien(int m[][Max], int dong, int cot)
{
    int tong=0;
    for(int j=0; j<cot; j++){
            tong+=m[dong-1][j];
            tong+=m[0][j];
    }
    for(int i=1; i<dong-1; i++){
            tong+=m[i][0];
            tong+=m[i][cot-1];

    }
    printf("tong cac phan tu vien la: %d\n", tong);
}
void tongTamGiacTren(int m[][Max], int dong, int cot)
{
    int s=0;
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            if(i<=j){
                s+=m[i][j];
            }
        }
    }
    printf("tong tan giac tren la: %d\n", s);

}
int tichCot(int m[][Max], int dong, int cot)
{
    int s=1;
    for(int i=0; i<dong; i++)
        s*=m[i][cot];
    return s;
}
void timCotMax(int m[][Max], int dong, int cot)
{
    int d;
    int max=tichCot(m, dong, 0);
    for(int j=0; j<cot; j++){
    int t=tichCot(m, dong, j);
        if(max<t){
            max=t;
            d=j;
        }
    }
    printf("cot co tich max la: %d\n",d+1);
}
int kiemTraSoChinhPhuong(int n)
{
    if(sqrt(n)*sqrt(n)==n)
        return 1;
    else return 0;
}
int demSoChinhPhuong(int m[][Max], int dong, int cot)
{
    int dem=0;
    for(int j=0; j<cot; j++){
        if(kiemTraSoChinhPhuong(m[dong][j])==1){
            dem++;
        }
    }
    return dem;
}
void timHangNhieuSoChinhPhuong(int m[][Max], int dong, int cot)
{
    int d;
    int dem=0;
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
            int  max=demSoChinhPhuong(m,0, j);
             int t=demSoChinhPhuong(m,i,j);
             if(max<t){
                max=t;
                d=i;
             }
        }
    }
    printf("dong co nhieu so chinh phuong nhat la: %d\n ",d+1);
}
void hoanVi(int m[][Max], int m1[][Max], int dong, int cot)
{
    printf("ma tran hoan vi: \n");
    for(int i=0; i<dong; i++){
        for(int j=0; j<cot; j++){
           int tg=m[i][j];
           m[i][j]=m1[j][i];
           m1[j][i]=tg;
        }
    }

        for(int j=0; j<cot; j++){
                for(int i=0; i<dong; i++){
            printf("%4d", m1[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int chon;
    int m[Max][Max],m1[Max][Max];
    int dong, cot;
    printf("nhap hang cot: ");
    scanf("%d%d",&dong,&cot);
    nhapMang(m, dong, cot);
    xuatMang(m, dong,cot);
    do{
     printf("\n=======MENU=======\n");
     printf("1. tinh tong phan tu trong ma tran\n");
     printf("2. liet ke cac phan tu chia het cho 7\n");
     printf("3. tim tong cac phan tu nam tren duonng vien cua ma tran\n");
     printf("4. tim tong cac phan tu nam tren phan tam giac tren cua ma tran\n");
     printf("5. tim cot co tich Max\n");
     printf("6. tim dong co nhieu so chinh phuong nhat\n");
     printf("7. Hoán vị ma trận thành MxN\n");
     printf("chon: ");
     scanf("%d",&chon);

     switch(chon)
     {
         case 1: tongCacPhanTu(m, dong, cot); break;
         case 2: cacPhanTuChia7(m, dong, cot); break;
         case 3: tongPhanTuVien(m, dong, cot); break;
         case 4: tongTamGiacTren(m, dong, cot); break;
         case 5: timCotMax(m, dong, cot); break;
         case 6:timHangNhieuSoChinhPhuong(m, dong, cot);break;
         case 7: hoanVi(m, m1, dong, cot);
     }
    }while(chon<=7&&chon>0);
    return 0;

}

