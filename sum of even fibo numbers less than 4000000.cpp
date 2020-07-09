#include<iostream>
using namespace std;
long a,b,c,sum;
long sumEven()
{
	a=1l;
	b=2l;
	sum = 2l;
	while(c<4000000)
	{
		c=a+b;
		a=b;
		b=c;
		if (c%2==0)
		{
			sum+=c;
		}
	}
	return sum;
}

int main()
{
	cout<<sumEven();
	return 0;
}
	
