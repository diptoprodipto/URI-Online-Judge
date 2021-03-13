#include<iostream>
using namespace std;
int main()
{
    int n[101], i, pos = 0;

    for(i=0;i<100;i++)
    {
        cin>>n[i];
    }

    int max = n[0];

    for(i=1;i<100;i++)
    {
        if(n[i]>max)
        {
            max = n[i];
            pos = i;
        }
    }

    cout << max << endl << pos+1 << endl;

    return 0;
}
