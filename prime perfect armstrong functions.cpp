#include<iostream>
using namespace std;

void primeChk(int a);
void perfChk(int a);
void armChk(int a);

int main()
{
	int a;
	cout<<"Enter number:  "<<endl;
	cin>>a;
	if(a<0)
		a=-a;
	primeChk(a);
	perfChk(a);
	armChk(a);
	return 0;
}

void primeChk(int a)
{
	if(a>1)
	{
		if(a==2)
		cout<<"prime"<<endl;
		else
		{
			int i;
			for(i=2; i<(a/2)+1; i++)
			{
				system("cls");
				if(a%i==0)
				{
					cout<<"composite"<<endl;
					break;
				}
				else
				cout<<"prime"<<endl;
			}
		}
	}
	else
	cout<<"neither prime nor composite"<<endl;
}
	
void perfChk(int a)
{
	int sum=0;
	for(int i=1;i<((a/2)+1);i++)
	{
		if(a%i==0)
		{
			sum+=i;
		}
	}
	if(sum==a)
	cout<<"Perfect Number."<<endl;
	else
	cout<<"Not a Perfect Number."<<endl;
}

void armChk(int a)
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
	cout<<"Armstrong Number."<<endl;    
	else    
	cout<<"Not Armstrong Number."<<endl;   
}
