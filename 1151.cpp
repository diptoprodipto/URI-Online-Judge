#include <iostream>
#include<stdio.h>
using namespace std;
int main() 
{
    int i, n, t1 = 0, t2 = 1, nextTerm;
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        if(i<n)
            printf("%d ", t1);
        else if(i==n)
            printf("%d\n", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}