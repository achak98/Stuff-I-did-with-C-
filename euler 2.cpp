#include<iostream>
using namespace std;

long fibo()
{
	long a = 0;
	long b = 1;
	long c = 0, sum = 0;
	for (int i=1;;i++)
	{
		c=a+b;
		a=b;
		b=c;
		if (sum>4000000)
		break;
		if (b%2==0)
		sum+=b;
	}
	return sum;
}

int main()
{
	cout<<fibo();
	return 0;
}
	
