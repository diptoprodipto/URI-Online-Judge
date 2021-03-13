#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i, n;
    float a, b, c;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        printf("%.1f\n", ((a*2)+(b*3)+(c*5))/10);   
    }
    return 0;
}