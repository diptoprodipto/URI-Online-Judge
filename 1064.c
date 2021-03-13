#include<stdio.h>
int main()
{
    float n[6], a[6], avg, sum = 0; 
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
            a[i] = n[i];
            sum = sum + a[i];
        }
        
    }

    avg = sum/count;

    printf("%d valores positivos\n%.1f\n", count, avg);

    return 0;
       
}