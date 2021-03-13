#include<iostream>
using namespace std;
int main()
{
    int tc, i, inCount = 0, outCount = 0;
    cin>> tc;
    int a[tc];

    for (i = 0; i < tc; i++)
    {
        cin>>a[i];
    }

    for ( i = 0; i < tc; i++)
    {
        if (a[i]>=10 && a[i]<=20)
        {
            inCount++;
        }
        else
        {
            outCount++;
        }
        
    }

    cout<< inCount<<" in"<<endl<<outCount<<" out"<<endl;

    return 0;   
}