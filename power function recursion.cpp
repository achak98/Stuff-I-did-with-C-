#include<iostream>
using namespace std;

int result=1;

int powerOf(int a, int b)
{
	while (b>0)
	{
		result*=a;
		return powerOf (a,(b-1));
	}
	return result;
}

int main()
{
	int base,exponential;
	cout<<"Enter the base number whose exponential value is required:   "<<endl;
	cin>>base;
	cout<<"Enter the exponential value:   "<<endl;
	cin>>exponential;
	if(exponential==0)
	cout<<"1";
	else
	cout<<powerOf(base,exponential);
	return 0;
}
