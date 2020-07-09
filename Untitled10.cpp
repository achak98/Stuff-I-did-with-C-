#include<iostream>
using namespace std;
void printArrayForward(char arr[],int size)
{
   if(size==1)
   cout<<arr[0]<<" ";
   else
   {
      printArrayForward(arr,size-1);
      cout<<arr[size-1]<<" ";
   }
}

int main()
{
   int size;
   char arr []={""};
   cout<<"Please Enter The Size Of The Array ?"<<endl;
   cin>>size;
   cout<<"Please Enter The Elament of the Array :";
   for(int i=0;i<=size;i++)
   {
   cin>>arr[i];//her when i start to enter the element it never stops so this is my problem and i need a help im hopeless
   cout<<endl;
   }   
   cout<<"The Element Of The Array in Forward :";
   printArrayForward(arr,size);
   cout<<endl;
	return 0;
}
