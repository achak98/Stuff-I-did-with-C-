#include<iostream>
using namespace std;

int square (int a){
	return a*a;}
	
int main(){
	int sum1=0;
	int sum2=0;
	int sum3=0;
	
	for(int i=1;i<101;i++){
		sum1+=i;
		sum2+=square(i);
	}
	sum3=square(sum1);
	int a = sum3-sum2;
	cout<<a;
	return 0;
}
		
