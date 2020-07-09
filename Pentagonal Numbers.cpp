#include<iostream>
using namespace std;
unsigned long long arrPent[2500];
int search (int a)
{
 for (int i=0;i<2500;i++)
 {
  if(a==arrPent[i])
  return 1;
 }
 return 0;
}
bool found =0;
int main()
{
  
 int i, a=0,b=0;
 
 for(int i=1;i<=2500;i++)
 {
  arrPent[i-1] = (i*((3*i)-1)/2);
 }
  
 for (int j=0;j<2500;j++)
 {
  for (int k=0;k<2500;k++)
  {
   unsigned long long P_a=0, P_b=0, sum=0, diff=0;
   if(arrPent[j]>arrPent[k])
   {
    P_a = arrPent[j];
    P_b = arrPent[k];
   }
   else
   {
    P_a = arrPent[k];
    P_b = arrPent[j];
   }
   sum = P_a + P_b;
   a=search(sum);
   diff = P_a - P_b;
   b=search(diff);
   if(a==1&&b==1)
   {
    cout<<"Larger number:  "<<P_a<<endl<<"Smaller number:  "<<P_b<<endl<<"Difference (D) :  "<<diff<<endl<<"Summation (S):  "<<sum;
   found=1;
   break;
   }
   if (found==1)
   break;
  }
  if (found==1)
   break;
 }
 return 0;
}
