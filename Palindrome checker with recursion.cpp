#include<iostream>
using namespace std;

int rev=0;

int reverse(int a)
{
	if (a>0)
	{
		int b;
		b = a/10;
		rev = rev*10 + a%10;
		return reverse(b);
	}
	else
	{
		return rev;
	}
}

void pChk(int a)
{
	if (a == reverse (a))
	{
		cout<<"PALINDROME!";
	}
	else
	{
		cout<<"NOT A PALINDROME!";
	}
}
	

int main()
{
	int a;
	cout<<"Enter number: ";
	cin>>a;
	pChk(a);
	return 0;
}
		
		
