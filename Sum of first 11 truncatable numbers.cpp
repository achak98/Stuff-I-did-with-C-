#include<iostream> 
#include<cmath>
using namespace std;
bool leftChk(unsigned long long int);
bool rightChk(unsigned long long int);
bool isPrime(unsigned long long int);
int main() {
 int count = 0;
 int sum = 0;
 for(unsigned long long int n = 11;; n++) {
  if(isPrime(n) && leftChk(n) && rightChk(n)) {
   cout << n << endl;
   count++;
   sum = sum + n;
   }
  if(count == 11) 
  break;
  }
 cout <<"SUMMATION:  "<<sum << endl;
 return 0;
 }
bool leftChk(unsigned long long int n) {
 int i = 0;
 int sum = 0;
 while(pow(10, i) <= n) 
 i++;
 
 i--;
 while(i != 0) {
  sum = sum + (n/int(pow(10, i)));
  n = n - (n/int(pow(10, i)))*(int(pow(10, i)));
  if(!isPrime(sum)) 
  return 0;
  
  sum = sum * 10;
  i--;
  }
 return 1;
 }
bool rightChk(unsigned long long int n) {
 int i = 1;
 while(pow(10, i) <= n) {
  if(!isPrime(n % int(pow(10, i)))) 
  return 0;
 
  i++;
  }
 return 1;
 }
bool isPrime(unsigned long long int n) {
 if(n == 1) return 0;
 for(unsigned long long int i = 2; i <= sqrt(n); i++)
  if(n % i == 0) 
  return 0;
 return 1;
 }
