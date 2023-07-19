#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
class Graph{
    public:
    // creating unordered map
    unordered_map<int,list<int>> adj;
    void addadj(int u,int v,bool direction)
    {
        // direction 0 : -> unidirected
        // direction 1 : ->directed
        // create an edge from u to v
        adj[u].push_back(v);
        if(direction==0){
            // create edge from v to u
            adj[v].push_back(u);
        } 
    }
    void printadj(){
        for(auto i :adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j;
            }
            cout<<endl;
        }
    }
};
int main()
{
    Graph g;
    int n,m;
    cout<<"enter number of nodes"<<endl;
    cin>>n;
    cout<<"enter number of edges"<<endl;
    cin>>m;
    // creating graph
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.addadg(u,v,0);
    }
    // print ans
    g.printAdj();
    return 0;
}