#include<iostream>
using namespace std;
int main()
{
	int x, z, count=0;
	cin>>x>>z;
	while(z<=x)
		cin>>z;
	int i = x+1;
	while(x<=z)
	{
		x = x+i;
		i++;
		count++;
	}
	cout<<count+1<<endl;
	return 0;
}