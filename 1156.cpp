#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	float i, j, s=0;

	for(i=1,j=1;i<=39;i+=2,j*=2)
	{
		s = s+(i/j);
	}

	printf("%.2f\n",s);

	return 0;
}