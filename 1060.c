#include<stdio.h>
int main()
{
    float n[6]; 
    int i, count = 0;

    for ( i = 0; i <= 5; i++)
    {
        scanf("%f",&n[i]);
    }
    
    for ( i = 0; i <= 5; i++)
    {
        if (n[i] >= 0)
        {
            count++;
        }
        
    }

    printf("%d valores positivos\n", count);

    return 0;
       
}
