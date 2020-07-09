#include<iostream>
using namespace std;

void oddEven(int a)
{
    if(a%2==0)
    	cout<<"Even.";
	else
		cout<<"Odd.";
}

int main()
{
	int a;
	cout<<"Enter the number: ";
	cin>>a;
	oddEven(a);
	return 0;
}
