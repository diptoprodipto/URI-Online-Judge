#include<iostream>
using namespace std;
int main()
{
	int x, i, sum=0;

	while(1)
	{
		sum = 0;
		cin>>x;
		if(x==0)
			break;
		for(i=x;i<x+10;i++)
		{
			if(i%2==0)
				sum = sum+i;
		}
		cout<<sum<<endl;
	}
	return 0;
}