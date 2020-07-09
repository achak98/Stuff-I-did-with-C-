#include<iostream>
using namespace std;

int result=0;

int  printNat(int a, int b)
{
	if(a<=b)
	{	
		result+=a;
		return printNat((a+1),b);
	}
	else 
	return result;
}

int main ()
{
	int n;
	cout<<"Enter upper limit of the natrual numbers whose consecutive sum is to be evaluated:   "<<endl;
	cin>>n;
	cout<<printNat(1,n);
	return 0;
}
		
