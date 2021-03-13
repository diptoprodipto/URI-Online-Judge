#include<iostream>
using namespace std;
int main()
{
    int m, n, i;
    
    while (1)
    {
        cin>>m>>n;

        if(m>n)
            cout<<"Decrescente"<<endl;
        else if(m<n)
            cout<<"Crescente"<<endl;
        else
            break;
    }

    return 0;
    
}