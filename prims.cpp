#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;



#define V 5


int minKey(int key[], bool mstSet[])
{
    int min = INT_MAX, min_index;
	cout<<"Finding vertex with minimum key value from the set of vertices not yet included in MST."<<endl;
    for (int v = 0; v < V; v++)
        if (mstSet[v] == false && key[v] < min)
            min = key[v], min_index = v;

    return min_index;
}


void printMST(int mst[], int g[V][V])
{
    cout<<"Edge \tWeight\n";
    for (int i = 1; i < V; i++)
        cout<<mst[i]<<" - "<<i<<" \t"<<g[i][mst[i]]<<" \n";
}


void primMST(int g[V][V])
{
    int mst[V];

    int key[V];

    bool mstSet[V];

    for (int i = 0; i < V; i++)
        key[i] = INT_MAX, mstSet[i] = false;

	cout<<endl<<"Including first vertex as root."<<endl;
    key[0] = 0;
    mst[0] = -1;

    for (int count = 0; count < V - 1; count++)
    {
        cout<<endl<<"Picking vertex with minimum key value."<<endl;
        int u = minKey(key, mstSet);

        cout<<endl<<"Adding vertex "<<u<<"into the MST."<<endl;
        mstSet[u] = true;

        for (int v = 0; v < V; v++){
            cout<<endl<<"If "<<u<<"\t"<<v<<" have a connecting edge and the vertex "<<v<<" is not included in the MST yet, we update the key if the weight is smaller than key "<<key[v]<<"."<<endl;
            if (g[u][v] && mstSet[v] == false && g[u][v] < key[v])
                mst[v] = u, key[v] = g[u][v];
        }
    }
	cout<<endl<<"Printing MST:"<<endl<<endl;
    printMST(mst, g);
}

int main()
{
	cout<<"The outputted key value might be drastically large whilst printing initial INT_MAX value. It is not a result of overflow. Thank you."<<endl;
    int g[V][V];
	for(int i=0;i<V;i++)
		for(int j=0;j<V;j++)
			g[i][j]=rand()%100;


    primMST(g);

    return 0;
}

