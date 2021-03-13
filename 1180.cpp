#include<iostream>
using namespace std;
int main()
{
	int a[1000], i, n, pos=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	int min = a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
		{
			min = a[i];
			pos = i;
		}
	}
	cout<<"Menor valor: "<<min<<endl;
	cout<<"Posicao: "<<pos<<endl;
	return 0;
}