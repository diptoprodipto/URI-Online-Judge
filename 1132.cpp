#include<iostream>
using namespace std;
int main()
{
	int a , b, i, sum = 0;
	cin>>a>>b;

	if(a<b)
	{
		for(i=a;i<=b;i++)
		{
			if(i%13!=0)
				sum = sum+i;
		}
	}
	else
	{
		for(i=b;i<=a;i++)
		{
			if(i%13!=0)
				sum = sum+i;
		}
	}
	
	cout<<sum<<endl;
	return 0;
}