#include <bits/stdc++.h>
using namespace std;

#define V 4

#define INF 99999
int c = 0;

void printMat(int g[][V], int flag)
{
	for (int i = 0; i < V; i++)
	{
		for (int j = 0; j < V; j++)
		{
			if (g[i][j] == INF){
				if(flag==0)
					cout<<"no edge"<<" ";
				if(flag==1)
					cout<<"INF"<<"	 ";
				}
			else
				cout<<g[i][j]<<"	 ";
		}
		cout<<endl;
	}
}

void floydWarshall (int graph[][V])
{
	int dist[V][V], i, j, k;

	for (i = 0; i < V; i++)
		for (j = 0; j < V; j++)
			dist[i][j] = graph[i][j];

	for (k = 0; k < V; k++)
	{
		for (i = 0; i < V; i++)
		{
			for (j = 0; j < V; j++)
			{
				c++;
				if (dist[i][k] + dist[k][j] < dist[i][j])
					dist[i][j] = dist[i][k] + dist[k][j];
			}
		}
	}

	cout<<"\n\n\nThe following matrix shows the shortest distances"
			" between every pair of vertices: \n\n\n";
	printMat(dist,1);
}

int main()
{
	int graph[V][V] ;
	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++){
			if(i==j)
				graph[i][j]=0;
			else{
			if(rand()%2==1)
				graph[i][j]=rand()%20;
			else
				graph[i][j]=INF;
			}
		}
	}
	printf("The input matrix is as follows:\n\n\n");
	printMat(graph,0);
	floydWarshall(graph);
	printf("\n\n\nTotal number of computations required: %d",c);
	return 0;
}


