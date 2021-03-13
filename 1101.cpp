#include<iostream>
using namespace std;
int main()
{
    int m, n, i, sum=0;

    while (1)
    {
        cin >> m >> n;

        if(m<=0 || n<=0)
            break;

        else
        {
            sum = 0;

            if(m>n)
            {
                for(i=n;i<=m;i++)
                {
                    cout<<i<<" ";
                    sum = sum+i;
                }
            }
            else
            {
                for(i=m;i<=n;i++)
                {
                    cout<<i<<" ";
                    sum = sum+i;
                }
            }

            cout<<"Sum="<<sum<<endl;

            }
    }
    
    return 0;
}