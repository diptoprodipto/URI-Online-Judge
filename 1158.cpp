#include<iostream>
using namespace std;
int main()
{
	int tc, x, y, i, j, sum=0;
	cin>>tc;
	for(i=1;i<=tc;i++)
	{
		sum=0;
		cin>>x>>y;
		for(j=x;j<x+y*2;j++)
		{
			if(j%2!=0)
				sum=sum+j;
		}
		cout<<sum<<endl;
	}
	return 0;
}