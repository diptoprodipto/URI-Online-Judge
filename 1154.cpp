#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<fixed;
    cout<<setprecision(2);

    float sum = 0, count = 0;
    float avg, numbs;

    while(1)
    {
        cin>>numbs;

        if(numbs<0)
        {
            break;
        }
        else
        {
            sum = sum+numbs;
            count++;
        }
            
    }

    avg = sum/count;

    cout<<avg<<endl;

    return 0;

}