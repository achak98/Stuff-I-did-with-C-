#include<iostream>
using namespace std;

int printN(int i, int n)
{
	if(i<=n)
	{
	cout<<i<<"\t";
	return printN((i+1),n);
    }	
}

int main()
{
	int n;
	cout<<"Enter upper limit:   "<<endl;
	cin>>n;
	printN(1,n);
	return 0;
}
	

