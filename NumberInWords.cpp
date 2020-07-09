#include<iostream>
#include<conio.h>
using namespace std; 
int main()
{
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	int i=0;
	cout<<"input number: ";
	cin>>a;
	
	for(i=0;; i++)
	{
		
	   e=a%10;
	   if(e>0)
	    {
	   		break;
		}
	   a=a/10;
}
	   
	while(a>0)
	{
		b=a%10;
		a=a/10;
		c=c*10+b;
	}
	while(c>0)
	{
	
		d=c%10;
		c=c/10;
		switch (d)
		{
			
			case 0 :
			cout<<"ZERO ";
			break;
			
			case 1 :
			cout<<"ONE ";
			break;
			
			case 2 :
			cout<<"TWO ";
			break;
			
			case 3 :
			cout<<"THREE ";
			break;
			
			case 4 :
			cout<<"FOUR ";
			break;
			
			case 5 :
			cout<<"FIVE ";
			break;
			
			case 6 :
			cout<<"SIX ";
			break;
			
			case 7 :
			cout<<"SEVEN ";
			break;
			
			case 8 :
			cout<<"EIGHT " ;
			break;
			
			case 9 :
			cout<<"NINE ";
			break; 
		}
	}
	for( int j = i; j>0 ; j--)
	{
	cout<<"ZERO ";
}
getch();
return 0;

}
