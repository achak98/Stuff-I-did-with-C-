#include<iostream>
#include<math.h>
using namespace std;


	
	int main()
	{ 
		
		double t,p,temp,h;
		for(long i= 2l;;i++)
		{
			t=i*(i+1)/2; 
			for(long j=2l;j<i;j++)
			{
				p=j*(3*j-1)/2;
				if(t==p)
				{
					cout<<t<<endl;
					for(long k= 2l;k<j;k++)
					{
						
						h=k*(2*k-1);
						if(p==h)
						{
							cout<<"poop"<<"\t\t\t\t"<<p<<endl;
						}
					}
				}
	
			}
		}	
		return 0;
	}	
