
#include<stdio.h>
#define Max 100
void nhapMang(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);

    }
}
void xuatMang(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}

void GopMang(int a[],int b[],int c[],int k,int j)
{
    int n= k+j;
    for (int i =0;i<n;i++)
    {
        if(i<k)
            {
                a[i] = c[i];
            }
        else
        {
            a[i] = b[i-k];
        }
    }
}
int main()
{
    int a[Max];
    int n;
    printf("nhap n= ");
    scanf("%d",&n);
    nhapMang(a,n);
    //xuatMang(a,n);
    int c[n+1],b[n+1];
    int k =0, j =0;
    ////tach mang
    for(int i=0;i<n;i++)
        {
            if(a[i]<=0)
                {
                    c[k] = a[i];
                    k++;
                }
            else {
                b[j] = a[i];
                j++;
            }
        }
    GopMang(a,b,c,k,j);
    xuatMang(a,n);
    return 0;

}
