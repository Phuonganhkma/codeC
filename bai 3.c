/* liet ke so chinh phuong co 4 chu so*/
#include <stdio.h>
#include<math.h>
int main()
{
    for(int i=1000;i<=9999;i++)
    {
        if((int)sqrt(i)*(int)sqrt(i)==i)
            printf("%d\n",i);

    }
    return 0;
}
