#include<iostream>
using namespace std;
int proD(int n)
{
	int sum = 0;
	for (int i = 1;i<n;i++)
	{
		if(n%i==0)
		{
			sum = sum + i;
		}
	}
	return sum;
}
int perfNo(int n)
{
	int sum = 0;
	for (int i = 1;i<n;i++)
	{
		if(n%i==0)
		{
			sum = sum + i;
		}
	}
	bool fact = (sum==n)? true:false;
	return fact;
	
}
int findAm()
{
	int amSum = 0;
	for(int j=0;j<10000;j++)
	{
		if(j==proD(proD(j)) && perfNo(j) == false )
		{
			amSum = amSum + j;
		}
	}
	return amSum;
}
int main()
{
	cout<<findAm();
	return 0;
}
