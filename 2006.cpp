#include<iostream>
using namespace std;
int main()
{
	int t, n, i, count=0;
	cin>>t;
	for(i=0;i<5;i++)
	{
		cin>>n;
		if(n==t)
			count++;
	}
	cout<<count<<endl;
	return 0;
}