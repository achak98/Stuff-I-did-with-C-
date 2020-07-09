#include<iostream>
#include<math.h>
#include<stdint.h>
#include <typeinfo>
#include<cmath>
using namespace std;

bool isHex(unsigned long long a){
float x;
x=(float) (1+sqrt(1+8*a))/4;
    if(x==floor(x))
        return 1;
    else
		return 0;
}
	
	int main(){ 
		
		unsigned long long t,p,h;
		for(long i= 287l;;i++){
			int found=0;
			t=i*(i+1)/2; 
			for(long j=166l;j<i;j++){
				p=j*(3*j-1)/2;
				if(t==p){
					cout<<"t=p"<<t<<endl;
					for(long k=145l;k<=j;k++){
					if(isHex(p)){
						cout<<"t=p=h"<<"\t\t\t\t"<<p<<endl;
						found =1;
						break;
						}
					if(found==1)
						break;
					}
				}
			}
		}
		return 0;
	}
