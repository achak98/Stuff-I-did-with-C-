#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
   if(size==1)
   cout<<arr[0]<<" ";
   else
   {
      printArray(arr,(size-1));
      cout<<arr[size-1]<<" ";
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
   cout<<"The Elements are:  ";
   printArray(arr,size);
   cout<<endl;
   return 0;
}
