#include <iostream>
using namespace std;
 
long long fibo(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return fibo(n - 1) + fibo(n - 2);;
}

int main()
{
    int n;
   
        cout<<"Enter the 'n'th number of term required in a Fibonacci Series: ";
        cin>>n;
        if (n<=0)
        cout<<"ERROR!";
        else
        cout<<fibo(n)<<endl;
    return 0;
}
