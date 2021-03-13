#include<iostream>
using namespace std;
int main()
{
	int tc, i, n;
	cin>>tc;
	for(i=1;i<=tc;i++)
	{
		cin>>n;
		if(n%2==0)
			cout<<"0"<<endl;
		else
			cout<<"1"<<endl;
	}
	return 0;
}