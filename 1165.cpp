#include<iostream>
using namespace std;
int main()
{
	int t, i, j, n, count=0;

	cin>>t;

	for(i=1;i<=t;i++)
	{
		cin>>n;

		for(j=2;j<n;j++)
		{
			if(n%j==0)
				count++;
		}
		if(count==0)
			cout<<n<<" eh primo"<<endl;
		else
			cout<<n<<" nao eh primo"<<endl;

		count=0;
	}

	return 0;
}