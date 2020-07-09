#include<iostream>
using namespace std;

int rev=0;
	
int printRev(int a)
{
	if(a>0)
	{
		rev=rev*10+(a%10);
		return printRev(a/10);
	}
	return rev;
}

int main()
{
	int a;
	cout<<"Enter integer to be reversed:   "<<endl;
	cin>>a;
	cout<<printRev(a);
	return 0;
}
