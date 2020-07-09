#include<iostream>
#include<conio.h>
using namespace std;
int main () 
{
	int a,b=1;
	cout<<"enter length of side of box in units: ";
	cin>>a;
	b=a-1;
	for(int i=0;i<=a;i++)
	{
	 	for(int j=0;j<=b;j++)
	 		{
	 			 cout<<" ";
	 		}
	 		b--;
	 		for(int j=1;j<=(2*i-1);j++)
	 		{
	 			cout<<"*";
	 		}
	 		cout<<"\n";
	 }
	 b=1;
	 for(int i=1; i<=(a-1);i++)
	 {
	 	for(int j=1;j<=b;j++)
	 	{
	 		cout<<" ";
	 	}
	 	b++;
	 	for(int j=1;j<=(2*(a-i)-1);j++)
	 	{
	 		cout<<" ";
	 	}
	 	cout<<"\n";
	 }
	 getch();
	 return 0;
}

	
	
