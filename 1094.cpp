#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int tc, n, ccount = 0, rcount = 0, scount = 0, total, i;
	float cper, rper, sper;
	char ch;
	cin>>tc;
	for(i=1;i<=tc;i++)
	{
		cin>>n>>ch;
		if(ch=='C')
			ccount = ccount+n;
		else if(ch=='R')
			rcount = rcount+n;
		else if(ch=='S')
			scount = scount+n;
	}
	total = ccount+rcount+scount;

	cout<<"Total: "<<total<<" cobaias"<<endl;
	cout<<"Total de coelhos: "<<ccount<<endl;
	cout<<"Total de ratos: "<<rcount<<endl;
	cout<<"Total de sapos: "<<scount<<endl;

	cper = ((float)ccount/(float)total)*100;
	rper = ((float)rcount/(float)total)*100;
	sper = ((float)scount/(float)total)*100;

	printf("Percentual de coelhos: %.2f %\n", cper);
	printf("Percentual de ratos: %.2f %\n", rper);
	printf("Percentual de sapos: %.2f %\n", sper);

	return 0;
}