#include<iostream>
using namespace std;

int result=0;

int sumArray(int arr[],int size)
{
   if(size==1)
   result+=arr[0];
   else
   {
      result+=arr[size-1];
      return sumArray(arr,(size-1));
   }
}

int main()
{
   int size;
   
   cout<<"Enter The Size Of The Array :"<<endl;
   cin>>size;
  int arr [size];
   cout<<"Enter The Elements of the Array :"<<endl;
   for(int i=0;i<size;i++)
   {
   cin>>arr[i];
   cout<<endl;
   }   
   cout<<"The sum of the elements are:  ";
   cout<<sumArray(arr,size);
   cout<<endl;
   return 0;
}
