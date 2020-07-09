#include <iostream>
using namespace std;
 
int findMin(int A[], int n)
{
    if (n == 1)
        return A[0];
    return min(A[n-1], findMin(A,n-1));
}

int findMax(int A[], int n)
{
    if (n == 1)
        return A[0];
    return max(A[n-1], findMax(A, n-1));
}

int main()
{
    int size;
   
   cout<<"Enter The Size Of The Array :"<<endl;
   cin>>size;
  int A [size];
   cout<<"Enter The Elements of the Array :"<<endl;
   for(int i=0;i<size;i++)
   {
   cin>>A[i];
   cout<<endl;
   }   
    cout <<"Minimum valued element in the array is = "<<  findMin(A, size)<<endl;
    cout << "Maximum valued element in the array is = "<< findMax(A, size);
    return 0;
}
