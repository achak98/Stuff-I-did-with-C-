#include<iostream>
using namespace std;

int primeChk(int a)
{
	if(a<0)
	a=-a;
	if(a>1)
	{
		if(a==2)
		return 1;
		else
		{
			int i;
			for(i=2; i<(a/2)+1; i++)
			{
				if(a%i==0)
				{
					return 0;
					break;
				}
			}
			return 1;
		}
	}
	else
	return 0;
}
void primeFinder(int a, int b)
{
	for(int i=a; i<=b; i++)
	{
		if(primeChk(i)==1)
		cout<<i<<"\t";
	}
}

int main()
{
	int a,b;
	cout<<"Enter lower limit:  ";
	cin>>a;
	cout<<"Enter upper limit:  ";
	cin>>b;
	primeFinder(a,b);
	return 0;
}
