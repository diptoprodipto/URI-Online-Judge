#include <stdio.h>

int main()
{
    float n, newSalary, earned;
    int e;
    char p = '%';
    scanf("%f",&n);
    
    if(n>=0 && n<=400.00)
    {
        earned = n*(15.00/100.00);
        e = (float) earned;
        newSalary = n+earned;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %c\n",newSalary, (float) e, p);
    }
    else if(n>400 && n<=800)
    {
        earned = n*(12.00/100.00);
        e = (float) earned;
        newSalary = n+earned;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %c\n",newSalary, (float) e, p);

    }
    else if(n>800 && n<=1200)
    {
        earned = n*(10.00/100.00);
        e = (float) earned;
        newSalary = n+earned;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %c\n",newSalary, (float) e, p);

    }
    else if(n>1200 && n<=2000)
    {
        earned = n*(7.00/100.00);
        e = (float) earned;
        newSalary = n+earned;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %c\n",newSalary, (float) e, p);

    }
    else if(n>2000)
    {
        earned = n*(4.00/100.00);
        e = (float) earned;
        newSalary = n+earned;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %c\n",newSalary, (float) e, p);

    }

    return 0;
}
