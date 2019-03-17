#include<stdio.h>
void main()
{
    double n,ave,sum=0,count=0;
    while(1)
    {
        if(count==2)
            break;
        scanf("%lf",&n);
        if(n<=10 && n>=0)
        {
            count++;
            sum+=n;
        }
        else
            printf("nota invalida\n");
    }

    ave = sum/2;
    printf("media = %.2lf\n",ave);
}

