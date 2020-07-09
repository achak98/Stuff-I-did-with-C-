#include<iostream>
using namespace std;

int sum=0;

int sumNum(int a)
{
	if (a>0)
	{
		int b;
		b = a/10;
		sum = sum + a%10;
		return sumNum(b);
	}
	else
	{
		return sum;
	}
}

int main()
{
	int a;
	cout<<"Enter number: ";
	cin>>a;
	cout<<sumNum(a);
	return 0;
}
		
		
