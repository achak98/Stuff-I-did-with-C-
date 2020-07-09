#include <limits.h>
#include <stdio.h>
#include<stdlib.h>

#define V 9

int cnt=0;

int minD(int dist[], bool set[])
{
	int min = INT_MAX, minI;

	for (int v = 0; v < V; v++){
		if (set[v] == false && dist[v] <= min)
			min = dist[v], minI = v;
		cnt++;
	}

	return minI;
}

int sol(int d[])
{
	printf("Vertex \t\t Distance from Source\n");
	for (int i = 0; i < V; i++)
		printf("%d \t\t %d\n", i, d[i]);
}

void dijkstra(int g[V][V], int src)
{
	int d[V];

	bool set[V];

	for (int i = 0; i < V; i++)
		d[i] = INT_MAX, set[i] = false;

	d[src] = 0;

	for (int count = 0; count < V - 1; count++) {

		int u = minD(d, set);
		set[u] = true;
		for (int v = 0; v < V; v++){
			cnt++;
			if (!set[v] && g[u][v] && d[u] != INT_MAX
				&& d[u] + g[u][v] < d[v])
				d[v] = d[u] + g[u][v];
  		}
 }

 	sol(d);
}

int main()
{
	int g [V][V];
	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++){
			if(i==j)
				g[i][j]=0;
			else
				g[i][j]=rand()%21;
		}
	}

	dijkstra(g, 0);
	printf("\n Total computations required:  %d", cnt);
	return 0;
}

