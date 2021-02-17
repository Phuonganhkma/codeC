
#include<stdio.h>

void main()
{
    int a[100];
    int n,stt;
    printf("Nhap n : ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n-1; i++)
    {
        if(a[i]<0)
        {
            continue;
        }
        else if(a[i]>=0)
        {
            for(int j=i+1; j<n; j++)
            {
                if(a[j]==0)
                {

                    int tmp=a[j];
                    for(int k=j; k>=i; k--)
                    {
                        a[k]=a[k-1];
                    }
                    a[i]=tmp;


                }

            }
            for(int j=i+1; j<n; j++)            {
                if(a[j]<0)
                {

                    int tmp=a[j];
                    for(int k=j; k>=i; k--)
                    {
                        a[k]=a[k-1];
                    }
                    a[i]=tmp;
                    break;

                }

            }
        }

    }
    for(int i=0; i<n; i++)
    {
        printf(" \t%d ",a[i]);
    }
}
