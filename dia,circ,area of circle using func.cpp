#include<iostream>
using namespace std;

void circleEvaluation (int radius)
{
	cout<<"The diameter is = "<<radius*2<<endl;
	cout<<"The circumference is = "<<2*radius*3.14<<endl;
	cout<<"The area of the circle is = "<<3.14*radius*radius<<endl;
}

int main()
{
	int r;
	cout<<"Enter the radius of the circle:   ";
	cin>>r;
	circleEvaluation(r);
	return 0;
}
