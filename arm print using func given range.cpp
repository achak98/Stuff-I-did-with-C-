#include<iostream>
using namespace std;

int armChk(int a)
{
	int numCount=0,b,sum=0,temp1;    
	temp1=a;  
	while(a>0)
	{
		a/=10;
		numCount++;
	}
	a=temp1;
	while(a>0)    
	{    
	int temp2=1;
	b=a%10;    
	for(int i=0;i<numCount;i++)
	temp2*=b;
	sum=sum+temp2;    
	a=a/10;    
	}    
	if(temp1==sum)    
	return 1;
	else    
	return 0;
}
void armFinder(int a, int b)
{
	for(int i=a; i<=b; i++)
	{
		if(armChk(i)==1)
		cout<<i<<"\t";
	}
}

int main()
{
	int a,b;
	cout<<"Enter lower limit:  ";
	cin>>a;
	cout<<"Enter upper limit:  ";
	cin>>b;
	armFinder(a,b);
	return 0;
}
