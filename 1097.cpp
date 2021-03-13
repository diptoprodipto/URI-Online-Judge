#include<iostream>
using namespace std;
int main()
{
	int i, j=7, k=5, m, n;

	for(i=1;i<=9;i+=2)
	{			 
		for(j=j;j>=k;j--)
		{
			cout<<"I="<<i<<" J="<<j<<endl;
			
		}

		if(j==4 || j==6 || j==8 || j==10)
		{
			j=j+5;
			k=j-2;
		}
	}

	return 0;
}



