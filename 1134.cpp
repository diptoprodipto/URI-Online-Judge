#include<iostream>
using namespace std;
int main()
{
	int n, alco=0, gas=0, die=0;
	while(1)
	{
		cin>>n;
		if(n==1)
			alco++;
		else if(n==2)
			gas++;
		else if(n==3)
			die++;
		else if(n==4)
			break;
	}

	cout<<"MUITO OBRIGADO"<<endl;
	cout<<"Alcool: "<<alco<<endl;
	cout<<"Gasolina: "<<gas<<endl;
	cout<<"Diesel: "<<die<<endl;

	return 0;
}