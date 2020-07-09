#include<iostream>
using namespace std;

unsigned long long gNo=600851475143;

bool isPrime (unsigned long long a){
	for(unsigned long long i=3l;i<=((a/2)+1);i+=2){
		if (a%i==0 || a%2 == 0){
		return 0;
		}
	}
	return 1;
}

unsigned long long largestF(unsigned long long a){
	unsigned long long max=1l, i=1l;
	while((i*i)<gNo){
		if (a%i==0){
			if(i>max&&isPrime(i)==true){
				max=i;
				cout<<max<<endl;
				gNo/=i;
				i++;
			}
		}
	}
	return max;
}
			
int main(){
	cout << largestF(gNo);
	return 0;
}
				
	
		
