#include<stdio.h>
int main()
{
    int n[5]; 
    int i, evenCount = 0, oddCount = 0, posCount = 0, negCount = 0;

    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&n[i]);
    }
    
    for ( i = 0; i < 5; i++)
    {

        if (n[i]%2 == 0)
        {
            evenCount++;
        }
        if (n[i]%2 != 0)
        {
            oddCount++;
        }
        if (n[i] > 0)
        {
            posCount++;
        }
        if (n[i] < 0)
        {
            negCount++;
        }    
        
    }

    printf("%d valor(es) par(es)\n",evenCount);
    printf("%d valor(es) impar(es)\n",oddCount);
    printf("%d valor(es) positivo(s)\n",posCount);
    printf("%d valor(es) negativo(s)\n",negCount);

    return 0;
       
}