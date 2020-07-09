#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	if (a%b!=0)
	{
	return gcd(b,a%b);
	}
	else 
	{
		return b;
	}
}

int lcm(int a, int b)
{
	if (a>b)
	return (a*b)/gcd(a,b);
	else
	return (a*b)/gcd(b,a);
}

int main()
{
	int a,b;
	cout<<"Enter numbers to be evaluated: ";
	cin>>a>>b;
	cout<<lcm(a,b);
	return 0;
}
		
		
