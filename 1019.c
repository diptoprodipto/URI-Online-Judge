//This is my first problem solving on VS code. It's accepted on the second attempt.

#include<stdio.h>
int main()
{
    int n, h, m, s, t1, t2, t3;
    scanf("%d",&n);

    if(n>=0 && n<60)
    {
        printf("0:0:%d\n",n);
    }
    else if(n>=60 && n<3600)
    {
        m = n/60;
        t1 = m*60;
        s = n - t1;
        printf("0:%d:%d\n",m,s);
    }
    else if(n>=3600)
    {
        h = n/3600;
        t1 = h*3600;
        t2 = n - t1;
        m = t2/60;
        t3 = m*60;
        s = t2-t3;
        printf("%d:%d:%d\n",h,m,s);
    }
    return 0;
}