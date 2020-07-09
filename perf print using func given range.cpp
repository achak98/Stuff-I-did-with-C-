#include<iostream>
using namespace std;

int perfChk(int a)
{
	int sum=0;
	for(int i=1;i<((a/2)+1);i++)
	{
		if(a%i==0)
		{
			sum+=i;
		}
	}
	if(sum==a)
	return 1;
	else
	return 0;
}
void perfFinder(int a, int b)
{
	for(int i=a; i<=b; i++)
	{
		if(perfChk(i)==1)
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
	perfFinder(a,b);
	return 0;
}
