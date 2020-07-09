#include <iostream>
#include <stdlib.h>
using namespace std;

#define MAX 10

int count=0;
double x[MAX];
bool cmp(int i, int j, int p[], int w[]);
void sort(int (&p)[MAX], int (&w)[MAX], int n);
double greedyKnapsack(int M, int (&p)[MAX], int (&w)[MAX], int n);
int main(){
 cout<<"Enter maximum weight capacity for knapsack:"<<endl;
 int M,p[MAX],w[MAX];
 cin>>M;
    for(int i=0;i<MAX;i++){
    	p [i]=  rand();
    	w [i]=  rand()%20;
    	cout<<i+1<<"th element has value: "<<p[i]<<"and weight: "<<w[i]<<endl<<endl;
    }
    int n = MAX;
    cout << "Maximum value we can obtain = "
         << greedyKnapsack(M, p, w, n)<<endl<<endl;
 cout<<"Solution Set:"<<endl<<endl;
 for(int i=0; i<n; i++){
  cout<<"amount of item "<<i<<" selected: "<<x[i]<<" with net value: "<<x[i]*p[i]<<endl;
 }
 cout<<endl<<"Total computations done: "<<count;
    return 0;
}

bool cmp(int i, int j, int p[], int w[])
{
    double r1 = (double)p[i]/w[i];
    double r2 = (double)p[j]/w[j];
    return r1 < r2;
}
void sort(int (&p)[MAX], int (&w)[MAX], int n)
{
	for(int i=0;i<MAX;i++){
		
		for(int j=i;j<MAX-1;j++){
			double t1 = (double)p[j]/w[j];
			double t2 = (double)p[j+1]/w[j+1];
			if(t1<t2){
				int temp1 = p[j];
				int temp2 = w[j];
				p[j]=p[j+1];
				w[j]=w[j+1];
				p[j+1]=temp1;
				w[j+1]=temp2;
		}
	}
}

}
double greedyKnapsack(int M, int (&p)[MAX], int (&w)[MAX], int n)
{

    sort(p,w,n);
    int curWeight = 0;
    double finalvalue = 0.0;
   for (int i = 0; i < n; i++)
    x[i]=0;
    for (int i = 0; i < n; i++)
    {
  		count++;
        if (curWeight + w[i] <= M)
        {
            curWeight += w[i];
            finalvalue += p[i];
            x[i]=1;
            count+=3;
        }

        else
        {
            int remain = M - curWeight;
            finalvalue += p[i] * ((double)(((double) remain) / ((double)w[i])));
            x[i]=((double)(((double) remain) / ((double)w[i])));
            count+=3;
            break;
        }
    }

    return finalvalue;
}
