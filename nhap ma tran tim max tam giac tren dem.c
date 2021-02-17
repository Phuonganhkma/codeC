#include<stdio.h>
void nhapMaTran(int m[][100], int n)
{
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&m[i][j]);
        }
    }
}
void xuatMaTran(int m[][100], int n)
{
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }
}
void Max(int m[][100], int n)
{
     int max, dem=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j>=i){
                    max=m[0][0];
                if(m[i][j]>max)
                    max=m[i][j];

            }

        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
             if(m[i][j]==max)
                dem++;
        }
    }
    printf("Max= %d\n", max);
    printf("so lan xuat hien: %d", dem);
}
int main ()
{
    int m[100][100];
    int n;
    printf("NHAP dong, cot: ");
    scanf("%d", &n);
    nhapMaTran(m, n);
    xuatMaTran(m, n);
    Max(m, n);
    return 0;
}

