#include<iostream>
using namespace std;
int factorial=1;
int fact(int a, int b)
{
	if(a<=b)
	{
		factorial*=a;
		return fact(a+1,b);
	}
	return factorial;
}

int main() 
{
	int a;
	cout<<"Enter the number whose factorial is to be computed:   "<<endl;
	cin>>a;
	cout<<fact(1,a);
	return 0;
}
	
