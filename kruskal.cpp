#include<iostream>
#include<conio.h>
#include <stdlib.h>

#define MAX 5

using namespace std;
int flag = 0, v[MAX];
struct node_info
{
    int no;
}*q = NULL, *r = NULL;
struct node
{
    node_info *pt;
    node *next;
}*top = NULL, *p = NULL, *np = NULL;
void push(node_info *ptr)
{
    np = new node;
    np->pt = ptr;
    np->next = NULL;
    if (top == NULL)
    {
        top = np;
    }
    else
    {
        np->next = top;
        top = np;
    }
}
node_info *pop()
{
    if (top == NULL)
    {
        cout<<"Underflow.\n";
    }
    else
    {
        p = top;
        top = top->next;
        return(p->pt);
        delete(p);
    }
}
int back_edges(int *v,int am[][MAX],int i,int k)
{
    q = new node_info;
    q->no = i;
    push(q);
    v[i] = 1;
    for (int j = 0; j < MAX; j++)
    {
        if (am[i][j] == 1 && v[j] == 0)
        {
            back_edges(v, am, j, i);
        }
        else if (am[i][j] == 0)
            continue;
        else if ((j == k) && (am[i][k] == 1 && v[j] == 1))
            continue;
        else
        {
            flag = -1;
        }
    }
    r = pop();
    return(flag);
}
void init()
{
    for (int i = 0; i < MAX; i++)
        v[i] = 0;
    while (top != NULL)
    {
        pop();
    }
}
void kruskals(int am[][MAX], int wm[][MAX])
{
    int ve = 1, min, temp, temp1;
    cout<<"\n\nSTEPS ARE AS FOLLOWS:\n\n";
    while (ve <= MAX-1)
    {
        min = 9999, temp = 0, temp1 = 0;
        for (int i = 0; i < MAX; i++)
        {
            for (int j = 0; j < MAX; j++)
            {
                if ((wm[i][j] < min) && wm[i][j]!=0)
                {
                    min = wm[i][j];
                    cout<<"Vertex selected: "<<i<<"\t"<<j<<" with weight: "<<wm[i][j]<<endl;
                    temp = i;
                    temp1 = j;
                }
                else if (wm[i][j] == 0)
					cout<<"Vertex selected: "<<i<<"\t"<<j<<" are disconnected."<<endl;
                    continue;
            }
        }
        wm[temp][temp1]=wm[temp1][temp] = 9999;
        am[temp][temp1]=am[temp1][temp] = 1;
        init();
        cout<<"Checking for backedge return value for "<<temp<<" and "<<temp1<<" ."<<endl;
        if (back_edges(v, am, temp, 0) < 0)
        {
            am[temp][temp1]=am[temp1][temp] = 0;
            flag = 0;
            continue;
        }
        else
        {
            cout<<"edge created between "<<temp<<" th node and "<<temp1<<" th node"<<endl;
            ve++;
        }
    }
}
int main()
{
    int am[MAX][MAX], wm[MAX][MAX];
    for (int i = 0; i < MAX; i++)
        v[i] = 0;
    for (int i = 0; i < MAX; i++)
    {
        for(int j = 0; j < MAX; j++)
        {
            am[i][j] = 0;
        }
    }
    for (int i = 0; i < MAX; i++)
    {
        for(int j = 0; j < MAX; j++)
        {
        	if(i==j)
            	wm[i][j]=0;
			else{
				wm[i][j]=rand()%1000;
			}
        }
    }
    kruskals(am,wm);
}
