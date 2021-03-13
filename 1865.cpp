#include<iostream>
using namespace std;
int main()
{
	int tc, i, n;
	string name;
	cin>>tc;
	for(i=1;i<=tc;i++)
	{
		cin>>name>>n;
		if(name=="Thor")
			cout<<"Y"<<endl;
		else
			cout<<"N"<<endl;
	}
	return 0;
}