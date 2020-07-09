#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	int c = 0;
	if (a%b!=0)
	{
		return gcd(b,a%b);
	}
	else 
	{
		return b;
	}
}

int main()
{
	int a,b;
	cout<<"Enter numbers to be evaluated: ";
	cin>>a>>b;
	if(a>b)
	cout<<gcd(a,b);
	else
	cout<<gcd(b,a);
	return 0;
}
		
		
