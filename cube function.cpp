#include<iostream>
using namespace std;

int cube (int a)
{
	int b = a*a*a;
	return b;
}

int main(){
	int a;
	cout<<"Input the number you want the cube of:   ";
	cin>>a;
	cout<<endl<<cube(a);
	return 0;
}
