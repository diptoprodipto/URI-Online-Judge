#include<iostream>
#include<string>
using namespace std;
int main()
{
	int tc, i;
	string q;
	cin>>tc;
	for(i=0;i<=tc;i++)
	{
		getline(cin, q);
		if(i!=0)
			cout<<"I am Toorg!"<<endl;
	}
	return 0;
}