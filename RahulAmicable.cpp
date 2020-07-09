#include <iostream>
using namespace std;

bool isAmicable(int num);

bool isAmicable(int num)
{
	int sum = 0;
	for(int i = 1; i < num; i++)
	{
		if(num%i == 0)
		{
			sum += i;
		}
	}
	
	int s_sum = 0;
	for(int i = 1; i < sum; i++)
	{
		if(sum%i == 0)
		{
			s_sum += i;
		}
	}
	
	if(s_sum == num && s_sum != sum)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	
	int sum = 0;
	
	for(int i = 1; i< 10000; i++)
	{
		if(isAmicable(i))
		{
			sum = sum + i;
		}
	}
	
	cout << sum;
}
