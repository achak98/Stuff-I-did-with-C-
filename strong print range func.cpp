#include<iostream>
using namespace std;

int fact(int a)
{
	int fact=1;
	for(int i=1; i<=a; i++)
		fact*=i;
	return fact;
}
int strongChk(int a)
{
	int sum = 0,temp;
	temp=a;
	while (a>0)
	{
		int b = a%10;
		sum += fact(b);
		a=a/10;
	}
	if(sum==temp)
		return 1;
	else
	return 0;
}
void strongFinder(int a, int b)
{
	for(int i=a; i<=b; i++)
	{
		if(strongChk(i)==1)
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
	strongFinder(a,b);
	return 0;
}
