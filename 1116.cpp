#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n, i;
    float a, b;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(b==0)
            cout<<"divisao impossivel"<<endl;
        else
        {
            printf("%.1f\n",a/b);
        }
    }

    return 0;
}