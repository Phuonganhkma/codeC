/*nhap so n le la chieu cao cua tam giac can in ra tam giac can do
input n=5
output
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
   int h;
   printf("nhap chieu cao h");
   scanf("%d",&h);
   if(h%2==0)
    printf("nhap lai h");
   else
   {
   for(int i=1;i<=h;i++)
   {
       for(int j=1;j<=h-i;j++)
            printf(" ");
       for(int j=1;j<=2*i-1;j++)
        printf("*");
       printf("\n");
   }
   }
    return 0;
}
