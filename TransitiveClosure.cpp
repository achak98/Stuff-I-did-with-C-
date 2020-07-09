#include<stdio.h>
#include<stdlib.h>
#define V 4

int c=0;

void printMat(int g[][V])
{
	for (int i = 0; i < V; i++)
	{
		for (int j = 0; j < V; j++)
			printf ("%d ", g[i][j]);
		printf("\n");
	}
}

void transitiveClosure(int graph[][V])
{
	int reach[V][V], i, j, k;

	for (i = 0; i < V; i++)
		for (j = 0; j < V; j++){
			c++;
			reach[i][j] = graph[i][j];
		}

	for (k = 0; k < V; k++)
	{
		for (i = 0; i < V; i++)
		{
			for (j = 0; j < V; j++)
			{
				c++;
				reach[i][j] = reach[i][j] || (reach[i][k] && reach[k][j]);
			}
		}
	}

	printf ("Following matrix is transitive closure of the given graph\n");
	printMat(reach);
}

int main()
{
	int graph[V][V];
	
	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++){
			graph[i][j]=rand()%2;
			
		}
	}
	printf("Following matrix is the input matrix: \n");
	printMat(graph);
	transitiveClosure(graph);
	printf("The number of computations required: %d",c);
	return 0;
}

