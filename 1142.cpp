#include<iostream>
using namespace std;
int main()
{
	int i, n, a=1;
	cin>>n;
	for(i=1;i<=n;i++,a+=4)
	{
		cout<<a<<" "<<a+1<<" "<<a+2<<" PUM"<<endl;
	}
	return 0;
}