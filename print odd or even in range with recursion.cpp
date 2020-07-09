#include<iostream>
using namespace std;

void printOdd(int a, int b)
{
	if(a%2==0)
		a++;
	if(a<=b)
	{
		cout<<a<<"\t";
		return printOdd((a+2),b);
	}
}

void printEven(int a, int b)
{
	if(a%2!=0)
		a++;
	if(a<=b)
	{
		cout<<a<<"\t";
		return printEven((a+2),b);
	}
}

int main()
{
	int lowL,upL;
	char sw;
	cout<<"Enter upper limit:   "<<endl;
	cin>>upL;
	cout<<"Enter lower limit:   "<<endl;
	cin>>lowL;
	cout<<"Enter 'o' for printing odd numbers and 'e' for printing of even numbers:   "<<endl;
	cin>>sw;
	switch(sw){
	case 'o':
		printOdd(lowL,upL);
		break;
	case 'e':
		printEven(lowL,upL);
		break;
	default:
		cout<<"INVALID INPUT";
		exit;}
	return 0;
}
