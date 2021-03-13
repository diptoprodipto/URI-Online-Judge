#include<iostream>
using namespace std;
int main()
{
	int n, a, b, c;
	cin>>n;
	cin>>a>>b;
	c = a+b;
	if(c<=n)
		cout<<"Farei hoje!"<<endl;
	else
		cout<<"Deixa para amanha!"<<endl;
	return 0;
}