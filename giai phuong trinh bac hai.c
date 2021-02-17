#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float x,x1,x2;
    float denta;
    printf("nhap a,b,c= ");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0){
       if(b==0){
        if(c==0)
           printf("pt co vo so nghiem\n");
        else printf("pt vo nghiem\n");
       }
       else{
        x=(float) -c/b;
        printf("phuong trinh co nghiem la: %f", x);
       }
    }
    else{
        denta=b*b-4*a*c;

        if(denta<0){
            printf("phuong trinh vo nghiem\n");
            return;
        }
        if(denta==0){
            x=-b/(2*a);
            printf("phuong trinh co nghiem kep x1=x2=%f",x);
            return;
        }
        else{
            x1=(float) (-b+sqrt(denta))/(2*a);
            x2=(float) (-b-sqrt(denta))/(2*a);
            printf("phuong trinh cos hai nghiem phan biet \n %f\t%f", x1, x2);
        }
    }
    return 0;
}
