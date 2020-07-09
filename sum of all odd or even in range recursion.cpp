#include<iostream>
using namespace std;

int result=0;

int printsumOdd(int a, int b)
{
	if(a%2==0)
		a++;
	if(a<=b)
	{
		result+=a;
		return printsumOdd((a+2),b);
	}
	return result;
}

int printsumEven(int a, int b)
{
	if(a%2!=0)
		a++;
	if(a<=b)
	{
		result+=a;
		return printsumEven((a+2),b);
	}
	return result;
}

int main()
{
	int lowL,upL;
	char sw;
	cout<<"Enter upper limit:   "<<endl;
	cin>>upL;
	cout<<"Enter lower limit:   "<<endl;
	cin>>lowL;
	cout<<"Enter 'o' for printing sum of odd numbers and 'e' for printing sum of even numbers:   "<<endl;
	cin>>sw;
	switch(sw){
	case 'o':
		cout<<printsumOdd(lowL,upL);
		break;
	case 'e':
		cout<<printsumEven(lowL,upL);
		break;
	default:
		cout<<"INVALID INPUT";
		exit;}
	return 0;
}
