#include<stdio.h>
int main()
{
    for (int i=10000;i<=99999;i++)
        if((i/10000)%2==0)
    {
        if(((i/1000)%10)%2==0)
        {
            if(((i/100)%100)%2==0)
            {
                if(((i/10)%1000)%2==0)
                {
                    if((i%10000)%2==0)
                        printf("%d\n",i);
                }
            }
        }
    }
    return 0;

}
