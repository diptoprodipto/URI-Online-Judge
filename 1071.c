#include<stdio.h>
int main()
{
    int x, y, i, sum = 0;

    scanf("%d",&x);
    scanf("%d",&y);
    
    if (y<x)
    {
        for ( i = y+1; i < x; i++)
        {
            if(i%2 != 0)
            {
                sum = sum+i;
            }
        }
        
    }
    else
    {
        for ( i = x+1; i < y; i++)
        {
            if(i%2 != 0)
            {
                sum = sum+i;
            }
        }
    }
    
    printf("%d\n",sum);

    return 0;
}