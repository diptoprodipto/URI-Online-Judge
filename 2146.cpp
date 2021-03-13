#include<iostream>
using namespace std;
int main()
{
	int n;
	while(1)
	{
		cin>>n;
		if(n>1000 && n<10000)
		{
			cout<<n-1<<endl;
		}
		if(n==9999)
			break;	
	}
	
	return 0;
}