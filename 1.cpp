//Adjacency Matrix -Implementation
#include<iostream>
using namespace std;
int adjmatrix[20][20];//adjacency matrix initially to zero 
void displaymatrix(int v)
{
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
           cout<<adjmatrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
void addedge(int source , int dest) //function to add 0 or 1 in case of undirected graph
{
   adjmatrix[source][dest]=1;
   adjmatrix[dest][source]=1;
}
int main()
{
   int v=6;
   addedge(0,4);
   addedge(1,3);
   displaymatrix(v);
}