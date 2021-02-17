/* liet ke so co hai chu so sao cho so do gap hai lan tong cac chu so tao nen no*/
#include<stdio.h>
#include<math.h>
int main()
{
    for(int ab=10;ab<100;ab++)
    {
        if(ab==2*(ab%10+ab/10))
            printf("%d",ab);
    }
    return 0;

}
