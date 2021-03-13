#include<iostream>
using namespace std;
int main()
{
	int tc, i, j, a, b, sum=0;
	cin>>tc;
	for(i=1;i<=tc;i++)
	{
		cin>>a>>b;
		if(a<b)
		{
			sum = 0;
			for(j=a+1;j<b;j++)
			{
				if(j%2!=0)
					sum = sum+j;
			}
			cout<<sum<<endl;
		}
		else
		{
			sum = 0;
			for(j=b+1;j<a;j++)
			{
				if(j%2!=0)
					sum = sum+j;
			}
			cout<<sum<<endl;
		}
	}
	return 0;
}