/*liet ke so n dang n=abc sao cho n=a^3+b^3+c^3*/
#include<stdio.h>
int main()
{
    for(int n=100;n<999;n++)
        {
            if (n==(n/100)*(n/100)*(n/100)+((n/10)%10)*((n/10)%10)*((n/10)%10)+(n%10)*(n%10)*(n%10)){
            printf("%d\n",n);
            }
        }
        return 0;

}
