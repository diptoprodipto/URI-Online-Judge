#include<iostream>
using namespace std;
int main()
{
	int a, n, i, sum=0;
	while(1)
	{
		cin>>a;
		if(a>0)
		{
			while(1)
			{
				cin>>n;
				if(n>0)
					break;
			}
			break;
		}
		else
			continue;

		break;
	}

	for(i=a;i<a+n;i++)
		sum = sum+i;

	cout<<sum<<endl;

	return 0;
}