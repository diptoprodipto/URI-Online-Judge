#include<iostream>
using namespace std;
int main()
{
	int a, b, i, count = 0;
	cin>>a>>b;
	if (a<b)
	{
		for(i=1;i<=a;i++)
		{
			if(i!=a)
				cout<<i<<" ";
			else
				cout<<i<<endl;	
		}
		for(i=i;i<=b;i++)
		{
			++count;
			if (count!=a)
			{
				cout<<i<<" ";
			}			
			
			if(count==a)
			{
				cout<<i<<endl;
				count=0;
			}
		}
	}
	
	return 0;
}