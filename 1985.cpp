#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n, p, q, i;
	float sum = 0, temp;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>p>>q;
		if(p==1001)
		{
			temp = 1.50*q;
		}
		else if(p==1002)
		{
			temp = 2.50*q;
		}
		else if(p==1003)
		{
			temp = 3.50*q;
		}
		else if(p==1004)
		{
			temp = 4.50*q;
		}
		else if(p==1005)
		{
			temp = 5.50*q;
		}
		sum = sum+temp;
	}
	printf("%.2f\n", sum);
	return 0;
}