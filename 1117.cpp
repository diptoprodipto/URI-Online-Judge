#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int count = 0;
	float a, sum = 0;
	while(1)
	{
		cin>>a;
		if(a>=0 && a<=10)
		{
			++count;
			sum = sum+a;
		}
		else
			cout<<"nota invalida"<<endl;
		if(count==2)
			break;
	}

	printf("media = %.2f\n", sum/2);
	return 0;
}